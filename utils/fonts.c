#include <stdint.h>
#include "../components/include/OLEDDisplayFonts.h"
#include <stdio.h>

/* Check fonts in C file */

void main() {
	const uint8_t *font = ArialMT_Plain_10;
	int width, height, firstChar, numChars, i;
	width = font[0];
	height = font[1];
	firstChar = font[2];
	numChars = font[3];
	for (i=0;i<numChars;i++) {
		printf("%d: Char %d ",i,i+firstChar);
		uint16_t offset= (font[4+(4*i)] <<8) + (font[5+(4*i)]);
		uint8_t len= (font[6+(4*i)]);	/* Data Len */
		uint8_t width= (font[7+(4*i)]); /* Physical Width */
		if (offset == 0xffff) {
			printf("NODATA Width %d",width);
		}
		else {
			char c = i+firstChar;
			printf("Char %c Offset %x len %d width %d\n",((c>=32) && (c<127)) ? c : '?',offset,len,width);
			int x,y;
			int ybytes = 1+ ((height-1)>>3);
			for (y=0;y<height;y++) {
				for (x=0;x<width;x++) {
					int bit = y%8;
					int xo = x*ybytes;
					int yo = y%ybytes;
					uint8_t val= font[5 + offset + yo + xo];
					printf("    %d,%d bytes offset %d+ %d=%d\n",x,y,xo,yo,xo+yo);
				}
			}
		}
		printf("\n");
	}
}
