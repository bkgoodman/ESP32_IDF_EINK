#include <stdint.h>
//#include "../components/include/OLEDDisplayFonts.h"

/* NOTE!! Make a font header with ./cvtfont.py */
#include "../components/fonts/fonts.h"
#include <stdio.h>

/* Check fonts in C file */

void main() {
	//const uint8_t *font = ArialMT_Plain_10;
	const uint8_t *font = oledfont_Palatino_Roman_24;
	int width, height, firstChar, numChars, i;
	width = font[0];
	height = font[1];
	firstChar = font[2];
	numChars = font[3];
	int jtoffset = (numChars * 4);
	int ybytes = 1+ (((height)-1)>>3);
	int bitspercol= ybytes*8;
	printf("Y-Bytes %d (for %d pixels) %d pixels per col\n",ybytes,height,bitspercol);
	for (i=0;i<numChars;i++) {
		printf("%d: Char %d ",i,i+firstChar);
		uint16_t offset= (font[4+(4*i)] <<8) + (font[5+(4*i)]);
		uint8_t len= font[6+(4*i)];	/* Data Len */
		uint8_t width= font[7+(4*i)]; /* Physical Width */
		if (offset == 0xffff) {
			printf("NODATA Width %d",width);
		}
		else {
			int ii;
			char c = i+firstChar;
			printf("Char %c Offset %x datalen %d charwidth %d\n",((c>=32) && (c<127)) ? c : '?',offset,len,width);
			printf("jtoffset %d offset %d\n",jtoffset,offset);
			for (ii=0;ii<len;ii++)
				printf(" 0x%x", font[jtoffset + offset + ii]);
			printf("\n");
			int x,y;
			for (y=0;y<height;y++) {
				printf("0x%2x: ",(1<<(y%8)));
				for (x=0;x<width;x++) {
					int bit = y%8;
					int xo = x*ybytes;
					int yo = (y)/8;
					if ((yo+xo) >= len) {
						printf(" ");
					} else {
					uint8_t val= font[jtoffset + offset + yo + xo];
#if 1
					if (val & (1<<bit))
						printf("X");
					else
						printf(" ");
#else
					printf("    %d,%d bytes offset %d+ %d=%d bit %d val 0x%x = %c\n",x,y,xo,yo,xo+yo,bit,val,(val&(0x1<<bit))?'X':' ');
#endif
					}
				}
			printf("\n");
			}
		}
		printf("\n");
	}
}
