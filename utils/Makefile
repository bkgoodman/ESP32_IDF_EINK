fonts: fonts.o OLEDDisplayFonts.o
	gcc -o fonts fonts.o OLEDDisplayFonts.o 

OLEDDisplayFonts.o: ../components/OLEDDisplayFonts.c
	gcc -c ../components/OLEDDisplayFonts.c 

fonts.o: fonts.c 
	gcc -c  fonts.c

.PHONY clean:
	rm -f fonts *.o
