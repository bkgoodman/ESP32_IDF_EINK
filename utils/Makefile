fonts: fonts.o palatino_24.o
	gcc -o fonts fonts.o palatino_24.o 

OLEDDisplayFonts.o: ../components/fonts/palatino_24.c
	gcc -c ../components/fonts/palatino_24.c 

fonts.o: fonts.c 
	gcc -c  fonts.c

.PHONY clean:
	rm -f fonts *.o
