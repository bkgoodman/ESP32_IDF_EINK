#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Utopia_20[] PROGMEM = {
10 , // Width 
24 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 10, // Char 32   - Nodata
 0x0, 0x0, 0x9, 0x5, // Char 33 ! 
 0x0, 0x9, 0xe, 0x7, // Char 34 " 
 0x0, 0x17, 0x1d, 0xc, // Char 35 # 
 0x0, 0x34, 0x1a, 0xb, // Char 36 $ 
 0x0, 0x4e, 0x2c, 0x11, // Char 37 % 
 0x0, 0x7a, 0x27, 0xf, // Char 38 & 
 0x0, 0xa1, 0x4, 0x4, // Char 39 ' 
 0x0, 0xa5, 0xc, 0x6, // Char 40 ( 
 0x0, 0xb1, 0xb, 0x6, // Char 41 ) 
 0x0, 0xbc, 0x11, 0x8, // Char 42 * 
 0x0, 0xcd, 0x1d, 0xc, // Char 43 + 
 0x0, 0xea, 0x6, 0x4, // Char 44 , 
 0x0, 0xf0, 0xe, 0x7, // Char 45 - 
 0x0, 0xfe, 0x9, 0x5, // Char 46 . 
 0x1, 0x7, 0xd, 0x7, // Char 47 / 
 0x1, 0x14, 0x1a, 0xb, // Char 48 0 
 0x1, 0x2e, 0x12, 0x8, // Char 49 1 
 0x1, 0x40, 0x1a, 0xb, // Char 50 2 
 0x1, 0x5a, 0x18, 0xa, // Char 51 3 
 0x1, 0x72, 0x1d, 0xc, // Char 52 4 
 0x1, 0x8f, 0x1a, 0xb, // Char 53 5 
 0x1, 0xa9, 0x1a, 0xb, // Char 54 6 
 0x1, 0xc3, 0x19, 0xb, // Char 55 7 
 0x1, 0xdc, 0x1a, 0xb, // Char 56 8 
 0x1, 0xf6, 0x1a, 0xb, // Char 57 9 
 0x2, 0x10, 0x9, 0x5, // Char 58 : 
 0x2, 0x19, 0x9, 0x5, // Char 59 ; 
 0x2, 0x22, 0x1e, 0xc, // Char 60 < 
 0x2, 0x40, 0x1d, 0xc, // Char 61 = 
 0x2, 0x5d, 0x1d, 0xc, // Char 62 > 
 0x2, 0x7a, 0x10, 0x8, // Char 63 ? 
 0x2, 0x8a, 0x29, 0x10, // Char 64 @ 
 0x2, 0xb3, 0x27, 0xf, // Char 65 A 
 0x2, 0xda, 0x20, 0xd, // Char 66 B 
 0x2, 0xfa, 0x24, 0xe, // Char 67 C 
 0x3, 0x1e, 0x29, 0x10, // Char 68 D 
 0x3, 0x47, 0x20, 0xd, // Char 69 E 
 0x3, 0x67, 0x1c, 0xc, // Char 70 F 
 0x3, 0x83, 0x26, 0xf, // Char 71 G 
 0x3, 0xa9, 0x2a, 0x10, // Char 72 H 
 0x3, 0xd3, 0xf, 0x7, // Char 73 I 
 0x3, 0xe2, 0x10, 0x8, // Char 74 J 
 0x3, 0xf2, 0x24, 0xe, // Char 75 K 
 0x4, 0x16, 0x1e, 0xc, // Char 76 L 
 0x4, 0x34, 0x33, 0x13, // Char 77 M 
 0x4, 0x67, 0x28, 0x10, // Char 78 N 
 0x4, 0x8f, 0x26, 0xf, // Char 79 O 
 0x4, 0xb5, 0x1d, 0xc, // Char 80 P 
 0x4, 0xd2, 0x26, 0xf, // Char 81 Q 
 0x4, 0xf8, 0x24, 0xe, // Char 82 R 
 0x5, 0x1c, 0x1a, 0xb, // Char 83 S 
 0x5, 0x36, 0x22, 0xe, // Char 84 T 
 0x5, 0x58, 0x28, 0x10, // Char 85 U 
 0x5, 0x80, 0x25, 0xf, // Char 86 V 
 0x5, 0xa5, 0x37, 0x15, // Char 87 W 
 0x5, 0xdc, 0x24, 0xe, // Char 88 X 
 0x6, 0x0, 0x22, 0xe, // Char 89 Y 
 0x6, 0x22, 0x24, 0xe, // Char 90 Z 
 0x6, 0x46, 0x9, 0x5, // Char 91 [ 
 0x6, 0x4f, 0xf, 0x7, // Char 92 Backslash 
 0x6, 0x5e, 0x9, 0x5, // Char 93 ] 
 0x6, 0x67, 0x1a, 0xb, // Char 94 ^ 
 0x6, 0x81, 0x1e, 0xc, // Char 95 _ 
 0x6, 0x9f, 0xa, 0x6, // Char 96 ` 
 0x6, 0xa9, 0x1b, 0xb, // Char 97 a 
 0x6, 0xc4, 0x1d, 0xc, // Char 98 b 
 0x6, 0xe1, 0x18, 0xa, // Char 99 c 
 0x6, 0xf9, 0x1e, 0xc, // Char 100 d 
 0x7, 0x17, 0x1a, 0xb, // Char 101 e 
 0x7, 0x31, 0xf, 0x7, // Char 102 f 
 0x7, 0x40, 0x1b, 0xb, // Char 103 g 
 0x7, 0x5b, 0x21, 0xd, // Char 104 h 
 0x7, 0x7c, 0xc, 0x6, // Char 105 i 
 0x7, 0x88, 0xc, 0x6, // Char 106 j 
 0x7, 0x94, 0x1b, 0xb, // Char 107 k 
 0x7, 0xaf, 0xc, 0x6, // Char 108 l 
 0x7, 0xbb, 0x33, 0x13, // Char 109 m 
 0x7, 0xee, 0x21, 0xd, // Char 110 n 
 0x8, 0xf, 0x1d, 0xc, // Char 111 o 
 0x8, 0x2c, 0x1d, 0xc, // Char 112 p 
 0x8, 0x49, 0x21, 0xd, // Char 113 q 
 0x8, 0x6a, 0x14, 0x9, // Char 114 r 
 0x8, 0x7e, 0x15, 0x9, // Char 115 s 
 0x8, 0x93, 0xf, 0x7, // Char 116 t 
 0x8, 0xa2, 0x21, 0xd, // Char 117 u 
 0x8, 0xc3, 0x1d, 0xc, // Char 118 v 
 0x8, 0xe0, 0x2c, 0x11, // Char 119 w 
 0x9, 0xc, 0x1e, 0xc, // Char 120 x 
 0x9, 0x2a, 0x1d, 0xc, // Char 121 y 
 0x9, 0x47, 0x1b, 0xb, // Char 122 z 
 0x9, 0x62, 0xc, 0x6, // Char 123 { 
 0x9, 0x6e, 0x3, 0x3, // Char 124 | 
 0x9, 0x71, 0xb, 0x6, // Char 125 } 
 0x9, 0x7c, 0x17, 0xa, // Char 126 ~ 

// Data Table:
0xf0 , 0x0 , 0x3 , 0xf0 , 0x1f , 0x3 , 0x20 , 0x0 , 0x1 , // Char 33 !
0xf0 , 0x1 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf0 , 0x1 , // Char 34 "
0x0 , 0x10 , 0x0 , 0x0 , 0x12 , 0x3 , 0x0 , 0xf2 , 0x1 , 0x0 , 0x1f , 0x0 , 0xf0 , 0x13 , 0x0 , 0x10 , 0x92 , 0x3 , 0x0 , 0xfa , 0x0 , 0x80 , 0x1f , 0x0 , 0xf0 , 0x12 , 0x0 , 0x0 , 0x2 , // Char 35 #
0x80 , 0x83 , 0x1 , 0xc0 , 0x87 , 0x3 , 0x20 , 0xe , 0x2 , 0x20 , 0xc , 0x2 , 0xf0 , 0xff , 0xf , 0x20 , 0x18 , 0x2 , 0x60 , 0x38 , 0x3 , 0xc0 , 0xf0 , 0x1 , 0x0 , 0xe0 , // Char 36 $
0xe0 , 0x3 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x10 , 0x8 , 0x0 , 0x10 , 0x8 , 0x3 , 0x30 , 0x8c , 0x1 , 0xe0 , 0x67 , 0x0 , 0x20 , 0x18 , 0x0 , 0x20 , 0xc , 0x0 , 0x20 , 0xc3 , 0x0 , 0xa0 , 0xf1 , 0x1 , 0x60 , 0x18 , 0x2 , 0x10 , 0x8 , 0x2 , 0x0 , 0x8 , 0x2 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xe0 , // Char 37 %
0x0 , 0xf0 , 0x0 , 0x0 , 0xf8 , 0x1 , 0xe0 , 0xf , 0x3 , 0x10 , 0x7 , 0x2 , 0x10 , 0xe , 0x2 , 0x10 , 0x3b , 0x2 , 0xf0 , 0x71 , 0x2 , 0xc0 , 0xe0 , 0x1 , 0x0 , 0xc0 , 0x1 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x3e , 0x3 , 0x0 , 0xe , 0x2 , 0x0 , 0x0 , 0x2 , // Char 38 &
0xf0 , 0x1 , 0x0 , 0x70 , // Char 39 '
0x0 , 0xff , 0x0 , 0xc0 , 0xff , 0x3 , 0x60 , 0x0 , 0x6 , 0x10 , 0x0 , 0x8 , // Char 40 (
0x10 , 0x0 , 0x8 , 0x60 , 0x0 , 0x6 , 0xc0 , 0xff , 0x3 , 0x0 , 0xff , // Char 41 )
0x60 , 0x3 , 0x0 , 0x40 , 0x1 , 0x0 , 0xd0 , 0x7 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x40 , 0x1 , 0x0 , 0x60 , 0x3 , // Char 42 *
0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , // Char 43 +
0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x3 , // Char 44 ,
0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , // Char 45 -
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 46 .
0x0 , 0x0 , 0x3 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x3e , 0x0 , 0xc0 , 0x7 , 0x0 , 0x70 , // Char 47 /
0x80 , 0x7f , 0x0 , 0xe0 , 0xff , 0x1 , 0x70 , 0x80 , 0x3 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0xe0 , 0xc0 , 0x1 , 0xc0 , 0xff , 0x0 , 0x0 , 0x3f , // Char 48 0
0x20 , 0x0 , 0x2 , 0x20 , 0x0 , 0x2 , 0xe0 , 0xff , 0x3 , 0xe0 , 0xff , 0x3 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 49 1
0x40 , 0x0 , 0x3 , 0xe0 , 0xc0 , 0x3 , 0x30 , 0x60 , 0x3 , 0x10 , 0x30 , 0x3 , 0x10 , 0x18 , 0x3 , 0x30 , 0xc , 0x3 , 0xe0 , 0x7 , 0x3 , 0xe0 , 0x3 , 0x3 , 0x0 , 0x80 , // Char 50 2
0x60 , 0x80 , 0x1 , 0x60 , 0x0 , 0x3 , 0x10 , 0x4 , 0x2 , 0x10 , 0x4 , 0x2 , 0x10 , 0x4 , 0x2 , 0x30 , 0xe , 0x2 , 0xe0 , 0xfb , 0x1 , 0xc0 , 0xf1 , 0x1 , // Char 51 3
0x0 , 0x20 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x2c , 0x0 , 0x0 , 0x23 , 0x0 , 0x80 , 0x21 , 0x2 , 0x60 , 0x20 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x0 , 0x20 , 0x2 , 0x0 , 0x20 , // Char 52 4
0x0 , 0x80 , 0x1 , 0xf0 , 0x87 , 0x3 , 0x30 , 0x2 , 0x2 , 0x30 , 0x2 , 0x2 , 0x30 , 0x2 , 0x2 , 0x30 , 0x6 , 0x2 , 0x30 , 0xfc , 0x1 , 0x10 , 0xfc , 0x1 , 0x0 , 0x30 , // Char 53 5
0x80 , 0x7f , 0x0 , 0xc0 , 0xff , 0x1 , 0x60 , 0x4 , 0x3 , 0x10 , 0x2 , 0x2 , 0x10 , 0x2 , 0x2 , 0x10 , 0x6 , 0x2 , 0x30 , 0xe , 0x3 , 0x60 , 0xfc , 0x1 , 0x0 , 0xf8 , // Char 54 6
0x70 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x80 , 0x3 , 0x30 , 0xe0 , 0x3 , 0x30 , 0xf8 , 0x1 , 0x30 , 0xe , 0x0 , 0xb0 , 0x3 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x30 , // Char 55 7
0xc0 , 0xf1 , 0x0 , 0xe0 , 0xfb , 0x1 , 0x30 , 0xe , 0x3 , 0x10 , 0x4 , 0x2 , 0x10 , 0x4 , 0x2 , 0x10 , 0x4 , 0x2 , 0xf0 , 0x9f , 0x3 , 0xe0 , 0xfb , 0x1 , 0x0 , 0xe0 , // Char 56 8
0xc0 , 0x87 , 0x1 , 0xe0 , 0x8f , 0x3 , 0x30 , 0xc , 0x2 , 0x10 , 0x8 , 0x2 , 0x10 , 0x8 , 0x2 , 0x30 , 0x4 , 0x3 , 0xe0 , 0xff , 0x1 , 0xc0 , 0xff , 0x0 , 0x0 , 0xe , // Char 57 9
0x0 , 0x2 , 0x1 , 0x0 , 0x87 , 0x3 , 0x0 , 0x3 , 0x3 , // Char 58 :
0x0 , 0x2 , 0x0 , 0x0 , 0x87 , 0xf , 0x0 , 0x3 , 0x3 , // Char 59 ;
0x0 , 0x30 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x58 , 0x0 , 0x0 , 0x48 , 0x0 , 0x0 , 0xcc , 0x0 , 0x0 , 0x84 , 0x0 , 0x0 , 0x86 , 0x1 , 0x0 , 0x2 , 0x1 , 0x0 , 0x3 , 0x3 , 0x0 , 0x0 , 0x2 , // Char 60 <
0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , // Char 61 =
0x0 , 0x3 , 0x3 , 0x0 , 0x2 , 0x1 , 0x0 , 0x86 , 0x1 , 0x0 , 0x84 , 0x1 , 0x0 , 0x84 , 0x0 , 0x0 , 0xcc , 0x0 , 0x0 , 0x48 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , // Char 62 >
0x60 , 0x0 , 0x0 , 0x30 , 0x1c , 0x0 , 0x10 , 0x3c , 0x3 , 0x10 , 0x23 , 0x3 , 0xf0 , 0x1 , 0x0 , 0xe0 , // Char 63 ?
0x0 , 0x7e , 0x0 , 0x80 , 0xff , 0x0 , 0xc0 , 0x80 , 0x1 , 0x60 , 0x10 , 0x1 , 0x20 , 0x3e , 0x2 , 0x10 , 0x27 , 0x2 , 0x10 , 0x1 , 0x2 , 0x90 , 0x0 , 0x2 , 0x90 , 0x3c , 0x2 , 0x90 , 0x3f , 0x2 , 0x90 , 0x21 , 0x0 , 0x20 , 0x0 , 0x0 , 0x40 , 0x18 , 0x0 , 0x80 , 0xf , // Char 64 @
0x0 , 0x0 , 0x2 , 0x0 , 0x80 , 0x3 , 0x0 , 0xf0 , 0x2 , 0x0 , 0x1c , 0x2 , 0x80 , 0x13 , 0x0 , 0x70 , 0x10 , 0x0 , 0xf0 , 0x11 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0x3f , 0x2 , 0x0 , 0xf8 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x2 , // Char 65 A
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x4 , 0x2 , 0x10 , 0x4 , 0x2 , 0x10 , 0x4 , 0x2 , 0x30 , 0xe , 0x2 , 0xe0 , 0x9b , 0x3 , 0xe0 , 0xf9 , 0x1 , 0x0 , 0xf0 , // Char 66 B
0x0 , 0x3f , 0x0 , 0xc0 , 0xff , 0x0 , 0xe0 , 0xe1 , 0x1 , 0x60 , 0x80 , 0x1 , 0x30 , 0x0 , 0x3 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x30 , 0x0 , 0x3 , 0xe0 , 0xc0 , 0x1 , // Char 67 C
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x30 , 0x0 , 0x1 , 0x60 , 0x80 , 0x1 , 0xe0 , 0xff , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0xc , // Char 68 D
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x4 , 0x2 , 0x10 , 0x4 , 0x2 , 0x10 , 0x4 , 0x2 , 0x10 , 0x4 , 0x2 , 0x10 , 0x1e , 0x2 , 0x70 , 0x0 , 0x3 , 0x0 , 0x80 , // Char 69 E
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x8 , 0x2 , 0x10 , 0x8 , 0x0 , 0x10 , 0x8 , 0x0 , 0x10 , 0x8 , 0x0 , 0x10 , 0x1e , 0x0 , 0x70 , // Char 70 F
0x0 , 0x3f , 0x0 , 0xc0 , 0xff , 0x0 , 0xe0 , 0xe1 , 0x1 , 0x60 , 0x80 , 0x1 , 0x30 , 0x0 , 0x3 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x8 , 0x2 , 0x10 , 0x8 , 0x2 , 0x30 , 0xf8 , 0x3 , 0xe0 , 0xf8 , 0x1 , 0x0 , 0x8 , // Char 71 G
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x4 , 0x2 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x10 , 0x4 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x0 , 0x2 , // Char 72 H
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x0 , 0x2 , // Char 73 I
0x0 , 0x0 , 0x8 , 0x10 , 0x0 , 0x8 , 0x10 , 0x0 , 0xf , 0xf0 , 0xff , 0x7 , 0xf0 , 0xff , 0x1 , 0x10 , // Char 74 J
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0xe , 0x2 , 0x0 , 0x3f , 0x0 , 0x80 , 0x71 , 0x0 , 0xc0 , 0xe0 , 0x0 , 0x70 , 0xc0 , 0x1 , 0x30 , 0x80 , 0x3 , 0x10 , 0x0 , 0x3 , 0x10 , 0x0 , 0x2 , // Char 75 K
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x80 , 0x3 , // Char 76 L
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0x70 , 0x80 , 0x3 , 0xf0 , 0x1 , 0x2 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x70 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x3 , 0x0 , 0xe0 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , // Char 77 M
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0x70 , 0xc0 , 0x3 , 0x70 , 0x0 , 0x2 , 0xe0 , 0x1 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x78 , 0x0 , 0x10 , 0xf0 , 0x0 , 0x10 , 0xc0 , 0x1 , 0xf0 , 0xff , 0x3 , 0x30 , 0x0 , 0x0 , 0x10 , // Char 78 N
0x0 , 0x3f , 0x0 , 0xc0 , 0xff , 0x0 , 0xe0 , 0xe1 , 0x1 , 0x20 , 0x0 , 0x1 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x30 , 0x0 , 0x3 , 0xe0 , 0xc0 , 0x1 , 0xc0 , 0xff , 0x0 , 0x80 , 0x7f , // Char 79 O
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x8 , 0x2 , 0x10 , 0x8 , 0x0 , 0x10 , 0x8 , 0x0 , 0x30 , 0xc , 0x0 , 0xe0 , 0x7 , 0x0 , 0xe0 , 0x3 , // Char 80 P
0x0 , 0x3f , 0x0 , 0xc0 , 0xff , 0x0 , 0xe0 , 0xe1 , 0x1 , 0x20 , 0x0 , 0x3 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x6 , 0x10 , 0x0 , 0xe , 0x10 , 0x0 , 0x1e , 0x30 , 0x0 , 0x33 , 0xe0 , 0xc0 , 0x31 , 0xc0 , 0xff , 0x20 , 0x80 , 0x7f , // Char 81 Q
0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x8 , 0x2 , 0x10 , 0x8 , 0x0 , 0x10 , 0x8 , 0x0 , 0x30 , 0x7c , 0x0 , 0xe0 , 0xf7 , 0x1 , 0xe0 , 0xc3 , 0x3 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 82 R
0xc0 , 0xc1 , 0x1 , 0xe0 , 0x3 , 0x3 , 0x30 , 0x7 , 0x2 , 0x10 , 0x6 , 0x2 , 0x10 , 0xc , 0x2 , 0x10 , 0xc , 0x2 , 0x10 , 0x1c , 0x3 , 0x70 , 0xf8 , 0x1 , 0x0 , 0xf0 , // Char 83 S
0x70 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x70 , // Char 84 T
0x10 , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xf0 , 0xff , 0x0 , 0x10 , 0xe0 , 0x1 , 0x10 , 0x0 , 0x3 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x10 , 0x0 , 0x3 , 0xf0 , 0xff , 0x1 , 0xf0 , 0xff , 0x0 , 0xf0 , 0x1f , 0x0 , 0x10 , // Char 85 U
0x10 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xd0 , 0xf , 0x0 , 0x10 , 0x7e , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x70 , 0x0 , 0x10 , 0xe , 0x0 , 0xd0 , 0x1 , 0x0 , 0x70 , 0x0 , 0x0 , 0x10 , // Char 86 V
0x10 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xd0 , 0x3f , 0x0 , 0x10 , 0xfc , 0x1 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x3c , 0x0 , 0xc0 , 0x3 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x10 , 0x3c , 0x0 , 0xd0 , 0x3 , 0x0 , 0x70 , 0x0 , 0x0 , 0x10 , // Char 87 W
0x10 , 0x0 , 0x2 , 0x10 , 0x0 , 0x2 , 0x70 , 0x80 , 0x3 , 0xf0 , 0xc0 , 0x2 , 0xd0 , 0x33 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x79 , 0x0 , 0xd0 , 0xf0 , 0x2 , 0x70 , 0xc0 , 0x3 , 0x10 , 0x0 , 0x3 , 0x10 , 0x0 , 0x2 , // Char 88 X
0x10 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x2 , 0x90 , 0x7 , 0x2 , 0x0 , 0xfe , 0x3 , 0x0 , 0xf8 , 0x3 , 0x0 , 0xc , 0x2 , 0x90 , 0x3 , 0x2 , 0xf0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x10 , // Char 89 Y
0x0 , 0x0 , 0x2 , 0x70 , 0x0 , 0x3 , 0x30 , 0xc0 , 0x3 , 0x10 , 0xe0 , 0x2 , 0x10 , 0x78 , 0x2 , 0x10 , 0x1c , 0x2 , 0x10 , 0xf , 0x2 , 0x90 , 0x7 , 0x2 , 0xd0 , 0x1 , 0x2 , 0xf0 , 0x0 , 0x2 , 0x30 , 0x0 , 0x3 , 0x10 , 0x80 , 0x3 , // Char 90 Z
0xf0 , 0xff , 0x1f , 0x10 , 0x0 , 0x10 , 0x10 , 0x0 , 0x10 , // Char 91 [
0x70 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x80 , 0x3 , // Char 92 Backslash
0x10 , 0x0 , 0x10 , 0x10 , 0x0 , 0x10 , 0xf0 , 0xff , 0x1f , // Char 93 ]
0x0 , 0x10 , 0x0 , 0x0 , 0x1c , 0x0 , 0x80 , 0x7 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x30 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x18 , // Char 94 ^
0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , // Char 95 _
0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x40 , // Char 96 `
0x0 , 0xc4 , 0x1 , 0x0 , 0xe6 , 0x3 , 0x0 , 0x23 , 0x3 , 0x0 , 0x11 , 0x2 , 0x0 , 0x11 , 0x2 , 0x0 , 0x1b , 0x1 , 0x0 , 0xff , 0x3 , 0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0x2 , // Char 97 a
0x10 , 0x0 , 0x0 , 0xf8 , 0xff , 0x3 , 0xf8 , 0xff , 0x3 , 0x0 , 0x2 , 0x2 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x0 , 0x3 , 0x2 , 0x0 , 0x87 , 0x1 , 0x0 , 0xfe , 0x1 , 0x0 , 0x7c , // Char 98 b
0x0 , 0xf8 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x87 , 0x3 , 0x0 , 0x1 , 0x3 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x0 , 0x3 , 0x3 , 0x0 , 0x86 , 0x1 , // Char 99 c
0x0 , 0xf8 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x86 , 0x3 , 0x0 , 0x1 , 0x3 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x1 , 0xf8 , 0xff , 0x3 , 0xf8 , 0xff , 0x3 , 0x0 , 0x0 , 0x2 , // Char 100 d
0x0 , 0xfc , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x93 , 0x3 , 0x0 , 0x11 , 0x3 , 0x0 , 0x11 , 0x2 , 0x0 , 0x11 , 0x2 , 0x0 , 0x1f , 0x3 , 0x0 , 0x9e , 0x1 , 0x0 , 0x8 , // Char 101 e
0x0 , 0x1 , 0x2 , 0xc0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , 0x10 , 0x1 , 0x2 , 0x10 , 0x1 , 0x2 , // Char 102 f
0x0 , 0x1c , 0x39 , 0x0 , 0xbe , 0x3f , 0x0 , 0x63 , 0x47 , 0x0 , 0x41 , 0x43 , 0x0 , 0x41 , 0x43 , 0x0 , 0x61 , 0x43 , 0x0 , 0x3f , 0x42 , 0x0 , 0x1f , 0x3e , 0x0 , 0x1 , 0x1c , // Char 103 g
0x10 , 0x0 , 0x2 , 0xf8 , 0xff , 0x3 , 0xf8 , 0xff , 0x3 , 0x0 , 0x2 , 0x2 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x2 , 0x0 , 0xff , 0x3 , 0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 104 h
0x0 , 0x0 , 0x2 , 0x30 , 0xff , 0x3 , 0x30 , 0xff , 0x3 , 0x0 , 0x0 , 0x2 , // Char 105 i
0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x60 , 0x30 , 0xff , 0x3f , 0x30 , 0xff , 0x1f , // Char 106 j
0x8 , 0x0 , 0x2 , 0xf8 , 0xff , 0x3 , 0xf8 , 0xff , 0x3 , 0x0 , 0x30 , 0x2 , 0x0 , 0x7c , 0x0 , 0x0 , 0xe6 , 0x0 , 0x0 , 0x83 , 0x1 , 0x0 , 0x1 , 0x3 , 0x0 , 0x1 , 0x2 , // Char 107 k
0x10 , 0x0 , 0x2 , 0xf8 , 0xff , 0x3 , 0xf8 , 0xff , 0x3 , 0x0 , 0x0 , 0x2 , // Char 108 l
0x0 , 0x1 , 0x2 , 0x0 , 0xff , 0x3 , 0x0 , 0xff , 0x3 , 0x0 , 0x2 , 0x2 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x2 , 0x0 , 0xff , 0x3 , 0x0 , 0xfe , 0x3 , 0x0 , 0x6 , 0x2 , 0x0 , 0x2 , 0x2 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x2 , 0x0 , 0x3 , 0x2 , 0x0 , 0xfe , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0x0 , 0x2 , // Char 109 m
0x0 , 0x1 , 0x2 , 0x0 , 0xff , 0x3 , 0x0 , 0xff , 0x3 , 0x0 , 0x2 , 0x2 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x2 , 0x0 , 0x7 , 0x2 , 0x0 , 0xfe , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0x0 , 0x2 , // Char 110 n
0x0 , 0xfc , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x87 , 0x3 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x0 , 0x3 , 0x3 , 0x0 , 0xfe , 0x1 , 0x0 , 0xfe , 0x1 , 0x0 , 0x30 , // Char 111 o
0x0 , 0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x2 , 0x43 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x0 , 0x3 , 0x3 , 0x0 , 0xfe , 0x1 , 0x0 , 0xfc , // Char 112 p
0x0 , 0xf8 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x86 , 0x3 , 0x0 , 0x1 , 0x3 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x41 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , // Char 113 q
0x0 , 0x1 , 0x2 , 0x0 , 0xff , 0x3 , 0x0 , 0xff , 0x3 , 0x0 , 0x2 , 0x2 , 0x0 , 0x3 , 0x2 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 114 r
0x0 , 0x8e , 0x1 , 0x0 , 0x1f , 0x3 , 0x0 , 0x19 , 0x2 , 0x0 , 0x31 , 0x2 , 0x0 , 0x31 , 0x2 , 0x0 , 0xe3 , 0x3 , 0x0 , 0xc0 , 0x1 , // Char 115 s
0x0 , 0x1 , 0x0 , 0x80 , 0xff , 0x1 , 0xc0 , 0xff , 0x3 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , // Char 116 t
0x0 , 0x1 , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0xff , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x1 , 0x1 , 0x0 , 0xff , 0x3 , 0x0 , 0xff , 0x3 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 117 u
0x0 , 0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7d , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x39 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 118 v
0x0 , 0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xfd , 0x1 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0x38 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0xf1 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x1 , // Char 119 w
0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x0 , 0x7 , 0x3 , 0x0 , 0xcf , 0x2 , 0x0 , 0x3c , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xc5 , 0x3 , 0x0 , 0x83 , 0x3 , 0x0 , 0x1 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 120 x
0x0 , 0x1 , 0x0 , 0x0 , 0x3 , 0x60 , 0x0 , 0x1f , 0x60 , 0x0 , 0x7d , 0x60 , 0x0 , 0xf0 , 0x3b , 0x0 , 0x80 , 0xf , 0x0 , 0xc0 , 0x1 , 0x0 , 0x39 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 121 y
0x0 , 0x0 , 0x2 , 0x0 , 0x7 , 0x3 , 0x0 , 0x81 , 0x3 , 0x0 , 0xe1 , 0x2 , 0x0 , 0x71 , 0x2 , 0x0 , 0x3d , 0x2 , 0x0 , 0xf , 0x2 , 0x0 , 0x7 , 0x2 , 0x0 , 0x81 , 0x3 , // Char 122 z
0x0 , 0x10 , 0x0 , 0xe0 , 0xef , 0xf , 0xb0 , 0xc7 , 0x1b , 0x10 , 0x0 , 0x10 , // Char 123 {
0xf0 , 0xff , 0x7f , // Char 124 |
0x10 , 0x0 , 0x10 , 0xf0 , 0xef , 0x1f , 0xe0 , 0xff , 0xf , 0x0 , 0x10 , // Char 125 }
0x0 , 0x20 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x10 , // Char 126 ~
};
