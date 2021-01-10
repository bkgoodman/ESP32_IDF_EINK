/* SPI Master example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "driver/spi_master.h"
#include "driver/gpio.h"
#include "OLEDDisplay.h"
#include "fonts.h"

/*
 This code displays some fancy graphics on the 320x240 LCD on an ESP-WROVER_KIT board.
 This example demonstrates the use of both spi_device_transmit as well as
 spi_device_queue_trans/spi_device_get_trans_result and pre-transmit callbacks.

 Some info about the ILI9341/ST7789V: It has an C/D line, which is connected to a GPIO here. It expects this
 line to be low for a command and high for data. We use a pre-transmit callback here to control that
 line: every transaction has as the user-definable argument the needed state of the D/C line and just
 before the transaction is sent, the callback will set this line to the correct state.
*/

#ifdef CONFIG_IDF_TARGET_ESP32
#define LCD_HOST    HSPI_HOST
#define DMA_CHAN    2

#define DISPLAY_HEIGHT 128
#define DISPLAY_WIDTH 296
#define PIN_NUM_MISO 2
#define PIN_NUM_MOSI 23
#define PIN_NUM_CLK  18
#define PIN_NUM_CS   5
#define PIN_NUM_BUSY	4   // Active low - wait if low!

#define PIN_NUM_DC   17
#define PIN_NUM_RST  16
//#define PIN_NUM_BCKL 5
#elif defined CONFIG_IDF_TARGET_ESP32S2BETA
#error UNDEF
#define LCD_HOST    SPI2_HOST
#define DMA_CHAN    LCD_HOST

#define PIN_NUM_MISO 37
#define PIN_NUM_MOSI 35
#define PIN_NUM_CLK  36
#define PIN_NUM_CS   34

#define PIN_NUM_DC   4
#define PIN_NUM_RST  5
#define PIN_NUM_BCKL 6
#else
#error UNDEFINED HOST
#endif

//To speed up transfers, every SPI transfer sends a bunch of lines. This define specifies how many. More means more memory use,
//but less overhead for setting up / finishing transfers. Make sure 240 is dividable by this.
#define PARALLEL_LINES 16

//This function is called (in irq context!) just before a transmission starts. It will
//set the D/C line to the value indicated in the user field.
void lcd_spi_pre_transfer_callback(spi_transaction_t *t)
{
    int dc=(int)t->user;
    gpio_set_level(PIN_NUM_DC, dc);
}


typedef struct {
  uint16_t  	 width;
  uint16_t  	 height;
  uint16_t  	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  uint8_t  	*comment;
  uint16_t 	 pixel_data[0];
} gimpimage_t;

    spi_bus_config_t buscfg={
        .miso_io_num=PIN_NUM_MISO,
        .mosi_io_num=PIN_NUM_MOSI,
        .sclk_io_num=PIN_NUM_CLK,
        .quadwp_io_num=-1,
        .quadhd_io_num=-1,
        .max_transfer_sz=PARALLEL_LINES*320*2+8
    };
    spi_device_interface_config_t devcfg={
#ifdef CONFIG_LCD_OVERCLOCK
#error DONT DO
        .clock_speed_hz=26*1000*1000,           //Clock out at 26 MHz
#else
        .clock_speed_hz=4*1000*1000,           //Clock out at 10 MHz
#endif
        .mode=0,                                //SPI mode 0
        .spics_io_num=PIN_NUM_CS,               //CS pin
        .queue_size=7,                          //We want to be able to queue 7 transactions at a time
        .pre_cb=lcd_spi_pre_transfer_callback,  //Specify pre-transfer callback to handle D/C line
    };

extern gimpimage_t *mil_logo;
int page=0;
#define bufsz ((DISPLAY_WIDTH*DISPLAY_HEIGHT)/8)
OLEDDisplay_t *oled;
spi_device_handle_t spi;
 void *db;
/*
 The LCD needs a bunch of command/argument values to be initialized. They are stored in this struct.
*/
typedef struct {
    uint8_t cmd;
    uint8_t data[16];
    uint8_t databytes; //No of data in data; bit 7 = delay after set; 0xFF = end of cmds.
} lcd_init_cmd_t;

typedef enum {
    LCD_TYPE_ILI = 1,
    LCD_TYPE_ST,
    LCD_TYPE_PAPER,
    LCD_TYPE_MAX,
} type_lcd_t;

//Place data into DRAM. Constant data gets placed into DROM by default, which is not accessible by DMA.

DRAM_ATTR static const lcd_init_cmd_t paper_init_cmds[]={
    /* Booster Soft Start */
    {0x06, {0x17, 0x17, 0x17}, 3},
    /* Display on */
    {0x04, {0}, 0x80},
		/* BIG BUSY WAIT?? */
    /* Pannel Setting */
    {0x0, {0x8f}, 1},
    /* VCOM Internval and Data Setting (CDI) */
    {0x50, {0x77}, 1},
    /* TRES  */
    {0x61, {DISPLAY_HEIGHT, (DISPLAY_WIDTH >> 8) & 0x01, DISPLAY_WIDTH & 0xFF}, 3},
    {0, {0}, 0xff},
};
/* Send a command to the LCD. Uses spi_device_polling_transmit, which waits
 * until the transfer is complete.
 *
 * Since command transactions are usually small, they are handled in polling
 * mode for higher speed. The overhead of interrupt transactions is more than
 * just waiting for the transaction to complete.
 */
void lcd_cmd(spi_device_handle_t spi, const uint8_t cmd)
{
    esp_err_t ret;
    spi_transaction_t t;
    memset(&t, 0, sizeof(t));       //Zero out the transaction
    t.length=8;                     //Command is 8 bits
    t.tx_buffer=&cmd;               //The data is the cmd itself
    t.user=(void*)0;                //D/C needs to be set to 0
#ifdef  PIN_NUM_BUSY
    while ( gpio_get_level(PIN_NUM_BUSY)==0);
#endif
    ret=spi_device_polling_transmit(spi, &t);  //Transmit!
    assert(ret==ESP_OK);            //Should have had no issues.
}

/* Send data to the LCD. Uses spi_device_polling_transmit, which waits until the
 * transfer is complete.
 *
 * Since data transactions are usually small, they are handled in polling
 * mode for higher speed. The overhead of interrupt transactions is more than
 * just waiting for the transaction to complete.
 */
void lcd_data(spi_device_handle_t spi, const uint8_t *data, int len)
{
    esp_err_t ret;
    spi_transaction_t t;
    if (len==0) return;             //no need to send anything
    memset(&t, 0, sizeof(t));       //Zero out the transaction
    t.length=len*8;                 //Len is in bytes, transaction length is in bits.
    t.tx_buffer=data;               //Data
    t.user=(void*)1;                //D/C needs to be set to 1
#ifdef  PIN_NUM_BUSY
    while ( gpio_get_level(PIN_NUM_BUSY)==0);
#endif
    ret=spi_device_polling_transmit(spi, &t);  //Transmit!
    assert(ret==ESP_OK);            //Should have had no issues.
}

uint32_t lcd_get_id(spi_device_handle_t spi)
{
    //get_id cmd
    lcd_cmd(spi, 0x04);

    spi_transaction_t t;
    memset(&t, 0, sizeof(t));
    t.length=8*3;
    t.flags = SPI_TRANS_USE_RXDATA;
    t.user = (void*)1;

    esp_err_t ret = spi_device_polling_transmit(spi, &t);
    assert( ret == ESP_OK );

    return *(uint32_t*)t.rx_data;
}

//Initialize the display
void lcd_init(spi_device_handle_t spi)
{
    int cmd=0;
    const lcd_init_cmd_t* lcd_init_cmds;

    //Initialize non-SPI GPIOs
    gpio_set_direction(PIN_NUM_DC, GPIO_MODE_OUTPUT);
#ifdef PIN_NUM_BUSY
    gpio_set_direction(PIN_NUM_BUSY, GPIO_MODE_INPUT);
#endif
#ifdef PIN_NUM_RST
    gpio_set_direction(PIN_NUM_RST, GPIO_MODE_OUTPUT);
#endif
#ifdef PIN_NUM_BCKL
    gpio_set_direction(PIN_NUM_BCKL, GPIO_MODE_OUTPUT);
#endif

#ifdef PIN_NUM_RST
    //Reset the display
    gpio_set_level(PIN_NUM_RST, 0);
    vTaskDelay(100 / portTICK_RATE_MS);
    gpio_set_level(PIN_NUM_RST, 1);
    vTaskDelay(100 / portTICK_RATE_MS);
#endif

    printf("kconfig: force CONFIG_LCD_TYPE_PAPER.\n");
		printf("Digital Paper initialization.\n");
		lcd_init_cmds = paper_init_cmds;

    //Send all the commands
    while (lcd_init_cmds[cmd].databytes!=0xff) {
        lcd_cmd(spi, lcd_init_cmds[cmd].cmd);
        lcd_data(spi, lcd_init_cmds[cmd].data, lcd_init_cmds[cmd].databytes&0x1F);
        if (lcd_init_cmds[cmd].databytes&0x80) {
            vTaskDelay(100 / portTICK_RATE_MS);
        }
        cmd++;
    }

#ifdef PIN_NUM_BCKL
    ///Enable backlight
    gpio_set_level(PIN_NUM_BCKL, 0);
#endif
}

static void paper_trans_finish(spi_device_handle_t spi)
{
    spi_transaction_t *rtrans;
    esp_err_t ret;
    ret=spi_device_get_trans_result(spi, &rtrans, portMAX_DELAY);
    //We could inspect rtrans now if we received any info back. The LCD is treated as write-only, though.
    assert(ret==ESP_OK);
}

static void paper_send_data(spi_device_handle_t spi, uint16_t *linedata, size_t len) {
    esp_err_t ret;

    //Transaction descriptors. Declared static so they're not allocated on the stack; we need this memory even when this
    //function is finished because the SPI driver needs access to it even while we're already calculating the next line.
    static spi_transaction_t trans;

    memset(&trans, 0, sizeof(trans));
    trans.tx_buffer=linedata;        //finally send the line data
    trans.length=len*8;          //Data length, in bits
    trans.user=(void *)1;
    trans.flags=0;

#ifdef  PIN_NUM_BUSY
		while ( gpio_get_level(PIN_NUM_BUSY)==0);
#endif
    ret=spi_device_queue_trans(spi, &trans, portMAX_DELAY);
    assert(ret==ESP_OK);
}

/* RGB 565 */
void draw_image(gimpimage_t *srcimg, uint8_t *black, uint8_t *red,int h, int w, int x_offset, int y_offset) {
  int x,y;
  int uk=10;
  for (y=0;y<srcimg->height;y++) 
    for (x=0;x<srcimg->width;x++) {
      int color = 0;
      uint16_t srcoffset = (x) + (y*srcimg->width);
      uint16_t rgb = srcimg->pixel_data[srcoffset];
      uint8_t r = (rgb & 0xf800) >> 11;
      uint8_t g = (rgb & 0x7e0) >> 6; /* One extra to make the 5 bits, too */
      uint8_t b = (rgb & 0x1f);

      if ((r > 29) && (g > 29) && (b > 29)) {
        color = 0;
      }
      else if ((r < 4) && (g < 4) && (b < 4)) {
        color = 1;
      }  
      else if (r  > 18) {
        color = 2;
      } 
      else {
        if (uk)  { printf("%d,%d RGB 0x%x is (%d %d %d) UNKNOWN COLOR\n", x,y,rgb,r,g,b); uk--;}
      }

      int bytespercol = DISPLAY_HEIGHT/8;
      int byteoffset = (x*bytespercol) + (((DISPLAY_HEIGHT-1)-y)/8);
      uint8_t shift = (y%8);
      if (color == 0) {
        /* white */
        if (red) red[byteoffset] |= (1<<shift);
        if (black) black[byteoffset] |= (1<<shift);
      } 
      if (color == 1) {
        /* BLACK */
        if (black) black[byteoffset] &= ~(1<<shift);
      } 
      if (color == 2) {
        /* RED */
        if (red) red[byteoffset] &= ~(1<<shift);
      } 
  }
}

#define GPIO_INPUT_IO_UP     39
#define GPIO_INPUT_IO_SEL     37
#define GPIO_INPUT_IO_DOWN     38
#define GPIO_INPUT_PIN_SEL  ((1ULL<<GPIO_INPUT_IO_UP) | (1ULL<<GPIO_INPUT_IO_DOWN) | (1ULL<<GPIO_INPUT_IO_SEL))
#define ESP_INTR_FLAG_DEFAULT 0

static xQueueHandle gpio_evt_queue = NULL;

static void IRAM_ATTR gpio_isr_handler(void* arg)
{
    uint32_t gpio_num = (uint32_t) arg;
    xQueueSendFromISR(gpio_evt_queue, &gpio_num, NULL);
}

void draw_page_1(void) {
    /* Do Black */
    char txt[20];
    memset(db,0xff,bufsz);

    OLEDDisplay_assignBuffer(oled,db);
    OLEDDisplay_setFont(oled,oledfont_Helvetica_24);
    OLEDDisplay_setColor(oled,BLACK);
    OLEDDisplay_drawString(oled,180, 0, "Reset");
    OLEDDisplay_drawString(oled,180,34,"Previous"); 
    OLEDDisplay_drawString(oled,180,34+34,"Select"); 
    OLEDDisplay_drawString(oled,180,32+34+34,"Next"); 
    OLEDDisplay_drawHorizontalLine(oled,280, 12,292-280);
    OLEDDisplay_drawHorizontalLine(oled,280, 34+12,292-280);
    OLEDDisplay_drawHorizontalLine(oled,280, 34+34+12,292-280);
    OLEDDisplay_drawHorizontalLine(oled,280, 34+34+34+12,292-280);
    OLEDDisplay_setFont(oled,oledfont_AvantGarde_Book_36);
    OLEDDisplay_drawString(oled,10,60,"Test"); 

    lcd_cmd(spi, 0x10); /* Send BW data */
    paper_send_data(spi, db,bufsz);
    paper_trans_finish(spi); // Since we're re-using the buffer for red and black to save memory - wait for it to complete

    /* Do Red */
    memset(db,0xff,bufsz);
    OLEDDisplay_setFont(oled,oledfont_AvantGarde_Book_36);
    OLEDDisplay_drawString(oled,10,20,"eInk"); 
    OLEDDisplay_setColor(oled,BLACK);
    lcd_cmd(spi, 0x13); /* Draw Red Data data */
    paper_send_data(spi, db,bufsz);
    paper_trans_finish(spi); // Since we're re-using the buffer for red and black to save memory - wait for it to complete

    lcd_cmd(spi, 0x12); /* Update Display data */
    return;
}
void draw_page_0(void) {
    /* Do Black */
    char txt[20];
    if (page == 0)
      return draw_page_1();
    memset(db,0xff,bufsz);
   	draw_image((gimpimage_t *) &mil_logo, db, 0L,DISPLAY_WIDTH, DISPLAY_HEIGHT, 0, 0);

    OLEDDisplay_assignBuffer(oled,db);
    OLEDDisplay_setFont(oled,oledfont_Palatino_Roman_24);
    OLEDDisplay_setColor(oled,BLACK);
    OLEDDisplay_drawString(oled,20, 64, "This test 123");
    OLEDDisplay_drawLine(oled,10,60,280,60);
    OLEDDisplay_fillRect(oled,240,70,40,40);
    OLEDDisplay_drawHorizontalLine(oled,10,120,276);

    lcd_cmd(spi, 0x10); /* Send BW data */
    paper_send_data(spi, db,bufsz);
    paper_trans_finish(spi); // Since we're re-using the buffer for red and black to save memory - wait for it to complete

    /* Do Red */
    memset(db,0xff,bufsz);
    draw_image((gimpimage_t *) &mil_logo, 0L, db,DISPLAY_WIDTH, DISPLAY_HEIGHT, 0, 0);
    OLEDDisplay_setFont(oled,oledfont_Helvetica_12);
    snprintf(txt,sizeof(txt)-1,"This is page %d",page);
    OLEDDisplay_drawString(oled,20, 90, txt);
    OLEDDisplay_fillCircle(oled,210,90,25);
    OLEDDisplay_drawVerticalLine(oled,290,10,108);
    lcd_cmd(spi, 0x13); /* Draw Red Data data */
    paper_send_data(spi, db,bufsz);
    paper_trans_finish(spi); // Since we're re-using the buffer for red and black to save memory - wait for it to complete

    lcd_cmd(spi, 0x12); /* Update Display data */
    return;
}

static void gpio_task_example(void* arg)
{
    uint32_t io_num;
    for(;;) {
        if(xQueueReceive(gpio_evt_queue, &io_num, portMAX_DELAY)) {
            printf("GPIO[%d] intr, val: %d, page: %d->", io_num, gpio_get_level(io_num),page);
            if (gpio_get_level(io_num) == 1) {
              if (io_num == GPIO_INPUT_IO_UP) page++;
              if (io_num == GPIO_INPUT_IO_DOWN) page--;
              printf("%d\n",page);
              draw_page_0();
            } else printf("\n");
        }
    }
}

void gpio_setup(void)
{
    gpio_config_t io_conf;

    //interrupt of rising edge
    io_conf.intr_type = GPIO_INTR_POSEDGE;
    //bit mask of the pins
    io_conf.pin_bit_mask = GPIO_INPUT_PIN_SEL;
    //set as input mode
    io_conf.mode = GPIO_MODE_INPUT;
    //enable pull-up mode
    io_conf.pull_up_en = 1;
    gpio_config(&io_conf);

    //change gpio intrrupt type for one pin
    gpio_set_intr_type(GPIO_INPUT_IO_UP, GPIO_INTR_ANYEDGE);

    //create a queue to handle gpio event from isr
    gpio_evt_queue = xQueueCreate(10, sizeof(uint32_t));
    //start gpio task
    xTaskCreate(gpio_task_example, "gpio_task_example", 2048, NULL, 10, NULL);

    //install gpio isr service
    gpio_install_isr_service(ESP_INTR_FLAG_DEFAULT);
    //hook isr handler for specific gpio pin
    gpio_isr_handler_add(GPIO_INPUT_IO_UP, gpio_isr_handler, (void*) GPIO_INPUT_IO_UP);
    //hook isr handler for specific gpio pin
    gpio_isr_handler_add(GPIO_INPUT_IO_DOWN, gpio_isr_handler, (void*) GPIO_INPUT_IO_DOWN);
    gpio_isr_handler_add(GPIO_INPUT_IO_SEL, gpio_isr_handler, (void*) GPIO_INPUT_IO_SEL);

    //remove isr handler for gpio number.
    //gpio_isr_handler_remove(GPIO_INPUT_IO_0);
    //hook isr handler for specific gpio pin again
    //gpio_isr_handler_add(GPIO_INPUT_IO_0, gpio_isr_handler, (void*) GPIO_INPUT_IO_0);

    printf("Minimum free heap size: %d bytes\n", esp_get_minimum_free_heap_size());
}


void app_main(void)
{
    esp_err_t ret;
    gpio_set_direction(37, GPIO_MODE_INPUT);
    gpio_set_direction(38, GPIO_MODE_INPUT);
    gpio_set_direction(39, GPIO_MODE_INPUT);
    //Initialize the SPI bus
#if 1
    ret=spi_bus_initialize(LCD_HOST, &buscfg, DMA_CHAN);
    ESP_ERROR_CHECK(ret);
		printf("BUS INIT\n");
    //Attach the LCD to the SPI bus
    ret=spi_bus_add_device(LCD_HOST, &devcfg, &spi);
		printf("DEV ADD\n");
    ESP_ERROR_CHECK(ret);
    //Initialize the LCD
    lcd_init(spi);
    //Initialize the effect displayed
    ESP_ERROR_CHECK(ret);

    // Brad Stuff
#endif
    db=heap_caps_malloc(bufsz, MALLOC_CAP_DMA);

    printf("DB init as %p\n",db);
    oled = OLEDDisplay_init(DISPLAY_WIDTH,DISPLAY_HEIGHT);
    /* To save memory - we are only allocating one buffer and using it for black and red.
    This requires two calls to draw_image and send_data, while waiting for the first 
    send_data to (asynchronously) finish so we can re-use the buffer. If you have the
    memory, just use a single call to draw_image with two buffers, then send them both
    back-to-back.

    Note that if you have code that is going to modify and redraw, you must always wait for
    last SPI transaction to finish (paper_trans_finish) before re-using the buffer!
    */

    printf("GPIO SETup\n");
    gpio_setup();
    draw_page_0();
    printf("Starting Task Sched\n");
    //vTaskStartScheduler();
    while(1) {
        vTaskDelay(100000 / portTICK_RATE_MS);
    }
}
