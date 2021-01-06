#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_D050000L_20[] PROGMEM = {
15 , // Width 
26 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 15, // Char 32   - Nodata
 0x0, 0x0, 0x43, 0x13, // Char 33 ! 
 0x0, 0x43, 0x43, 0x13, // Char 34 " 
 0x0, 0x86, 0x42, 0x13, // Char 35 # 
 0x0, 0xc8, 0x47, 0x14, // Char 36 $ 
 0x1, 0xf, 0x2e, 0xe, // Char 37 % 
 0x1, 0x3d, 0x37, 0x10, // Char 38 & 
 0x1, 0x74, 0x37, 0x10, // Char 39 ' 
 0x1, 0xab, 0x36, 0x10, // Char 40 ( 
 0x1, 0xe1, 0x2f, 0xe, // Char 41 ) 
 0x2, 0x10, 0x42, 0x13, // Char 42 * 
 0x2, 0x52, 0x42, 0x13, // Char 43 + 
 0x2, 0x94, 0x23, 0xb, // Char 44 , 
 0x2, 0xb7, 0x3b, 0x11, // Char 45 - 
 0x2, 0xf2, 0x43, 0x13, // Char 46 . 
 0x3, 0x35, 0x42, 0x13, // Char 47 / 
 0x3, 0x77, 0x3e, 0x12, // Char 48 0 
 0x3, 0xb5, 0x42, 0x13, // Char 49 1 
 0x3, 0xf7, 0x42, 0x13, // Char 50 2 
 0x4, 0x39, 0x32, 0xf, // Char 51 3 
 0x4, 0x6b, 0x3a, 0x11, // Char 52 4 
 0x4, 0xa5, 0x33, 0xf, // Char 53 5 
 0x4, 0xd8, 0x33, 0xf, // Char 54 6 
 0x5, 0xb, 0x2a, 0xd, // Char 55 7 
 0x5, 0x35, 0x2e, 0xe, // Char 56 8 
 0x5, 0x63, 0x37, 0x10, // Char 57 9 
 0x5, 0x9a, 0x37, 0x10, // Char 58 : 
 0x5, 0xd1, 0x36, 0x10, // Char 59 ; 
 0x6, 0x7, 0x33, 0xf, // Char 60 < 
 0x6, 0x3a, 0x1e, 0xa, // Char 61 = 
 0x6, 0x58, 0x22, 0xb, // Char 62 > 
 0x6, 0x7a, 0x22, 0xb, // Char 63 ? 
 0x6, 0x9c, 0x27, 0xc, // Char 64 @ 
 0x6, 0xc3, 0x2f, 0xe, // Char 65 A 
 0x6, 0xf2, 0x36, 0x10, // Char 66 B 
 0x7, 0x28, 0x36, 0x10, // Char 67 C 
 0x7, 0x5e, 0x37, 0x10, // Char 68 D 
 0x7, 0x95, 0x36, 0x10, // Char 69 E 
 0x7, 0xcb, 0x2e, 0xe, // Char 70 F 
 0x7, 0xf9, 0x36, 0x10, // Char 71 G 
 0x8, 0x2f, 0x36, 0x10, // Char 72 H 
 0x8, 0x65, 0x36, 0x10, // Char 73 I 
 0x8, 0x9b, 0x37, 0x10, // Char 74 J 
 0x8, 0xd2, 0x32, 0xf, // Char 75 K 
 0x9, 0x4, 0x36, 0x10, // Char 76 L 
 0x9, 0x3a, 0x36, 0x10, // Char 77 M 
 0x9, 0x70, 0x36, 0x10, // Char 78 N 
 0x9, 0xa6, 0x36, 0x10, // Char 79 O 
 0x9, 0xdc, 0x3e, 0x12, // Char 80 P 
 0xa, 0x1a, 0x33, 0xf, // Char 81 Q 
 0xa, 0x4d, 0x32, 0xf, // Char 82 R 
 0xa, 0x7f, 0x32, 0xf, // Char 83 S 
 0xa, 0xb1, 0x2a, 0xd, // Char 84 T 
 0xa, 0xdb, 0x32, 0xf, // Char 85 U 
 0xb, 0xd, 0x2b, 0xd, // Char 86 V 
 0xb, 0x38, 0x33, 0xf, // Char 87 W 
 0xb, 0x6b, 0x33, 0xf, // Char 88 X 
 0xb, 0x9e, 0x2e, 0xe, // Char 89 Y 
 0xb, 0xcc, 0x33, 0xf, // Char 90 Z 
 0xb, 0xff, 0x2f, 0xe, // Char 91 [ 
 0xc, 0x2e, 0x2f, 0xe, // Char 92 Backslash 
 0xc, 0x5d, 0x2f, 0xe, // Char 93 ] 
 0xc, 0x8c, 0x2f, 0xe, // Char 94 ^ 
 0xc, 0xbb, 0x3a, 0x11, // Char 95 _ 
 0xc, 0xf5, 0x3a, 0x11, // Char 96 ` 
 0xd, 0x2f, 0x37, 0x10, // Char 97 a 
 0xd, 0x66, 0x37, 0x10, // Char 98 b 
 0xd, 0x9d, 0x2f, 0xe, // Char 99 c 
 0xd, 0xcc, 0x2f, 0xe, // Char 100 d 
 0xd, 0xfb, 0x2f, 0xe, // Char 101 e 
 0xe, 0x2a, 0x2f, 0xe, // Char 102 f 
 0xe, 0x59, 0x36, 0x10, // Char 103 g 
 0xe, 0x8f, 0x36, 0x10, // Char 104 h 
 0xe, 0xc5, 0x33, 0xf, // Char 105 i 
 0xe, 0xf8, 0x36, 0x10, // Char 106 j 
 0xf, 0x2e, 0x36, 0x10, // Char 107 k 
 0xf, 0x64, 0x37, 0x10, // Char 108 l 
 0xf, 0x9b, 0x3f, 0x12, // Char 109 m 
 0xf, 0xda, 0x37, 0x10, // Char 110 n 
 0x10, 0x11, 0x37, 0x10, // Char 111 o 
 0x10, 0x48, 0x37, 0x10, // Char 112 p 
 0x10, 0x7f, 0x37, 0x10, // Char 113 q 
 0x10, 0xb6, 0x37, 0x10, // Char 114 r 
 0x10, 0xed, 0x3f, 0x12, // Char 115 s 
 0x11, 0x2c, 0x3e, 0x12, // Char 116 t 
 0x11, 0x6a, 0x36, 0x10, // Char 117 u 
 0x11, 0xa0, 0x36, 0x10, // Char 118 v 
 0x11, 0xd6, 0x1b, 0x9, // Char 119 w 
 0x11, 0xf1, 0x3, 0x3, // Char 120 x 
 0x11, 0xf4, 0xf, 0x6, // Char 121 y 
 0x12, 0x3, 0x1b, 0x9, // Char 122 z 
 0x12, 0x1e, 0x16, 0x8, // Char 123 { 
 0x12, 0x34, 0x16, 0x8, // Char 124 | 
 0x12, 0x4a, 0x2e, 0xe, // Char 125 } 
 0x12, 0x78, 0x2e, 0xe, // Char 126 ~ 

// Data Table:
0x0 , 0x8 , 0xa , 0x0 , 0x0 , 0x14 , 0x12 , 0x0 , 0x0 , 0x24 , 0x12 , 0x0 , 0x0 , 0x3c , 0xe , 0x0 , 0x0 , 0x20 , 0x2 , 0x0 , 0x0 , 0x40 , 0x2 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x80 , 0x9 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 33 !
0x0 , 0x1c , 0xe , 0x0 , 0x0 , 0x24 , 0x1 , 0x0 , 0x0 , 0x24 , 0x9 , 0x0 , 0x0 , 0x38 , 0xf , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0x60 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x60 , 0x3 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x10 , 0x6 , 0x0 , 0x0 , 0x18 , 0x6 , 0x0 , 0x0 , 0x18 , 0x6 , // Char 34 "
0x0 , 0x1c , 0xc , 0x0 , 0x0 , 0x24 , 0x12 , 0x0 , 0x0 , 0x14 , 0x12 , 0x0 , 0x0 , 0x1c , 0xb , 0x0 , 0x0 , 0x10 , 0x1 , 0x0 , 0x0 , 0xb0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x68 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x40 , // Char 35 #
0x0 , 0x1e , 0x1e , 0x0 , 0x0 , 0x3f , 0x3d , 0x0 , 0x0 , 0x33 , 0x33 , 0x0 , 0x0 , 0x3f , 0x37 , 0x0 , 0x0 , 0x7e , 0x3f , 0x0 , 0x0 , 0xdc , 0xe , 0x0 , 0x0 , 0x50 , 0x2 , 0x0 , 0x0 , 0xf0 , 0x2 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x90 , 0x3 , 0x0 , 0x0 , 0x98 , 0x4 , 0x0 , 0x0 , 0xc8 , 0x4 , 0x0 , 0x0 , 0x4c , 0x9 , 0x0 , 0x0 , 0x24 , 0x9 , 0x0 , 0x0 , 0x24 , 0x12 , 0x0 , 0x0 , 0x14 , 0x14 , 0x0 , 0x0 , 0xc , 0xc , 0x0 , 0x0 , 0x8 , 0x8 , // Char 36 $
0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0xd8 , 0x7 , 0x0 , 0x0 , 0x78 , 0x6 , 0x0 , 0x0 , 0x38 , 0x4 , 0x0 , 0x0 , 0x28 , 0x4 , 0x0 , 0x0 , 0x78 , 0x6 , 0x0 , 0x0 , 0xd8 , 0x7 , 0x0 , 0x0 , 0x98 , 0x7 , 0x0 , 0x0 , 0x38 , 0x4 , 0x0 , 0x0 , 0x70 , // Char 37 %
0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xc , 0x4 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x2 , 0x1f , 0x0 , 0x0 , 0xe1 , 0x27 , 0x0 , 0x0 , 0xf1 , 0x2f , 0x0 , 0x0 , 0x3d , 0x24 , 0x0 , 0x0 , 0x1d , 0x20 , 0x0 , 0x0 , 0x1d , 0x20 , 0x0 , 0x0 , 0x1d , 0x20 , 0x0 , 0x0 , 0x2 , 0x10 , 0x0 , 0x0 , 0x4 , 0x18 , 0x0 , 0x0 , 0x8 , 0xc , 0x0 , 0x0 , 0xf0 , 0x3 , // Char 38 &
0x0 , 0x30 , 0x6 , 0x0 , 0x0 , 0xc , 0xa , 0x0 , 0x0 , 0x2 , 0x17 , 0x0 , 0x0 , 0x82 , 0x3 , 0x0 , 0x0 , 0x81 , 0x23 , 0x0 , 0x0 , 0xc1 , 0x1 , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x0 , 0xc1 , 0x23 , 0x0 , 0x0 , 0x81 , 0x23 , 0x0 , 0x0 , 0x2 , 0x17 , 0x0 , 0x0 , 0x0 , 0x16 , 0x0 , 0x0 , 0x8 , 0xc , 0x0 , 0x0 , 0xf0 , 0x3 , // Char 39 '
0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc1 , 0x0 , 0x0 , 0x0 , 0xc7 , 0x38 , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x80 , // Char 40 (
0x0 , 0x8 , 0x4 , 0x0 , 0x0 , 0x10 , 0x2 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x0 , 0x8 , 0x4 , // Char 41 )
0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 42 *
0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0x10 , 0x2 , 0x0 , 0x0 , 0x80 , 0x2 , 0x0 , 0x0 , 0x88 , 0x4 , 0x0 , 0x0 , 0xa8 , 0x4 , 0x0 , 0x0 , 0x48 , 0x7 , 0x0 , 0x0 , 0x58 , 0x7 , 0x0 , 0x0 , 0x78 , 0x2 , 0x0 , 0x0 , 0xe8 , 0x2 , 0x0 , 0x0 , 0xe8 , 0x7 , 0x0 , 0x0 , 0x28 , 0x0 , 0x0 , 0x0 , 0x28 , 0x0 , 0x0 , 0x0 , 0x28 , 0x0 , 0x0 , 0x0 , 0x10 , // Char 43 +
0x0 , 0x0 , 0xd , 0x0 , 0x0 , 0xc2 , 0x19 , 0x0 , 0x0 , 0x79 , 0x2e , 0x0 , 0x0 , 0xe7 , 0x2d , 0x0 , 0x0 , 0xb8 , 0x2f , 0x0 , 0x0 , 0x30 , 0x23 , 0x0 , 0x0 , 0x4c , 0x21 , 0x0 , 0x0 , 0x71 , 0x10 , 0x0 , 0x0 , 0xcf , 0xf , // Char 44 ,
0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x20 , 0x6 , 0x0 , 0x0 , 0x10 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x5 , 0x0 , 0x0 , 0xe8 , 0x1 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x26 , 0x8 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x40 , 0x4 , 0x0 , 0x0 , 0xc0 , 0xb , 0x0 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x0 , 0x1 , // Char 45 -
0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x94 , 0x0 , 0x0 , 0x0 , 0x1a , 0x1 , 0x0 , 0x0 , 0x42 , 0x0 , 0x0 , 0x0 , 0xbe , 0x2 , 0x0 , 0x0 , 0x94 , 0x4 , 0x0 , 0x0 , 0x24 , 0x5 , 0x0 , 0x0 , 0x28 , 0xa , 0x0 , 0x0 , 0x40 , 0x2 , 0x0 , 0x0 , 0x50 , 0x14 , 0x0 , 0x0 , 0xa0 , 0x18 , 0x0 , 0x0 , 0x20 , 0x19 , 0x0 , 0x0 , 0x40 , 0x17 , 0x0 , 0x0 , 0x80 , 0x11 , 0x0 , 0x0 , 0x0 , 0x12 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x10 , // Char 46 .
0x0 , 0x30 , 0x2 , 0x0 , 0x0 , 0xc8 , 0x5 , 0x0 , 0x0 , 0xd8 , 0x4 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0x28 , 0x5 , 0x0 , 0x0 , 0x28 , 0x5 , 0x0 , 0x0 , 0x28 , 0x5 , 0x0 , 0x0 , 0x28 , 0x5 , 0x0 , 0x0 , 0x28 , 0x5 , 0x0 , 0x0 , 0x28 , 0x5 , 0x0 , 0x0 , 0x28 , 0x5 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0x10 , 0x2 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , // Char 47 /
0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0x40 , 0x12 , 0x0 , 0x0 , 0xa0 , 0x16 , 0x0 , 0x0 , 0xa0 , 0x14 , 0x0 , 0x0 , 0x50 , 0x1b , 0x0 , 0x0 , 0x40 , 0x2 , 0x0 , 0x0 , 0x28 , 0xa , 0x0 , 0x0 , 0x24 , 0x5 , 0x0 , 0x0 , 0x94 , 0x4 , 0x0 , 0x0 , 0x8a , 0x2 , 0x0 , 0x0 , 0x4e , 0x0 , 0x0 , 0x0 , 0x4e , 0x1 , 0x0 , 0x0 , 0xb2 , 0x0 , 0x0 , 0x0 , 0x42 , 0x0 , 0x0 , 0x0 , 0x32 , 0x0 , 0x0 , 0x0 , 0xe , // Char 48 0
0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x10 , 0x2 , 0x0 , 0x0 , 0x10 , 0x2 , 0x0 , 0x0 , 0x10 , 0x2 , 0x0 , 0x0 , 0x10 , 0x2 , 0x0 , 0x0 , 0x30 , 0x2 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0x10 , 0x6 , 0x0 , 0x0 , 0xc8 , 0x4 , 0x0 , 0x0 , 0xe8 , 0x5 , 0x0 , 0x0 , 0xc8 , 0x4 , 0x0 , 0x0 , 0x90 , 0x2 , 0x0 , 0x0 , 0xb0 , 0x2 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , // Char 49 1
0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0x3c , 0xf , 0x0 , 0x0 , 0x3c , 0xf , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x80 , // Char 50 2
0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 51 3
0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x7 , // Char 52 4
0x0 , 0x2 , 0x30 , 0x0 , 0x0 , 0x6 , 0x18 , 0x0 , 0x0 , 0xc , 0xc , 0x0 , 0x0 , 0x18 , 0x6 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x18 , 0x6 , 0x0 , 0x0 , 0xc , 0xc , 0x0 , 0x0 , 0x6 , 0x18 , 0x0 , 0x0 , 0x3 , 0x30 , // Char 53 5
0x0 , 0x8 , 0x4 , 0x0 , 0x0 , 0x1c , 0xe , 0x0 , 0x0 , 0x3e , 0x1f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0x7e , 0x3f , 0x0 , 0x0 , 0x3c , 0x1e , 0x0 , 0x0 , 0x18 , 0xc , // Char 54 6
0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0xc , 0xf , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0x1c , 0x1e , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0x6 , // Char 55 7
0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0xe , 0x3e , 0x0 , 0x0 , 0x3e , 0x1f , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0x0 , 0x3e , 0x1e , 0x0 , 0x0 , 0x1f , 0xc , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x2 , // Char 56 8
0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xff , 0x3e , 0x0 , 0x0 , 0xc1 , 0x20 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xfd , 0x2f , 0x0 , 0x0 , 0xdf , 0x3e , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , // Char 57 9
0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , // Char 58 :
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x3f , 0x3f , 0x0 , 0x0 , 0x3f , 0x3f , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , // Char 59 ;
0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x3e , 0x3e , 0x0 , 0x0 , 0x1f , 0x3e , 0x0 , 0x0 , 0x1f , 0x3e , 0x0 , 0x0 , 0x1f , 0x3e , 0x0 , 0x0 , 0x1e , 0x3e , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , // Char 60 <
0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , // Char 61 =
0x0 , 0x28 , 0x0 , 0x0 , 0x0 , 0x68 , 0x0 , 0x0 , 0x0 , 0x68 , 0x0 , 0x0 , 0x0 , 0x1 , 0x10 , 0x0 , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0xee , 0x3f , 0x0 , 0x0 , 0xec , 0x3f , 0x0 , 0x0 , 0x68 , 0x0 , 0x0 , 0x0 , 0x70 , // Char 62 >
0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xbf , 0x3f , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x78 , // Char 63 ?
0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xc4 , 0x8 , 0x0 , 0x0 , 0xc4 , 0x8 , 0x0 , 0x0 , 0x8c , 0xc , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xdc , 0xe , 0x0 , 0x0 , 0xc4 , 0x8 , 0x0 , 0x0 , 0xc4 , 0x8 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x7 , // Char 64 @
0x0 , 0x18 , 0x6 , 0x0 , 0x0 , 0xf8 , 0x5 , 0x0 , 0x0 , 0xc8 , 0x5 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0xc , 0xc , 0x0 , 0x0 , 0xb , 0x34 , 0x0 , 0x0 , 0xe , 0x14 , 0x0 , 0x0 , 0x1c , 0xc , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0xc8 , 0x4 , 0x0 , 0x0 , 0x78 , 0x7 , 0x0 , 0x0 , 0x18 , 0x6 , // Char 65 A
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x86 , 0x18 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3e , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , // Char 66 B
0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x86 , 0x38 , 0x0 , 0x0 , 0xdf , 0x3d , 0x0 , 0x0 , 0xcf , 0x3c , 0x0 , 0x0 , 0x6 , 0x18 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , // Char 67 C
0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc4 , 0x19 , 0x0 , 0x0 , 0xdf , 0x3e , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xde , 0x3c , 0x0 , 0x0 , 0xe0 , 0x9 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x1 , // Char 68 D
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xc , 0xc , 0x0 , 0x0 , 0xcf , 0x3c , 0x0 , 0x0 , 0xf , 0x3c , 0x0 , 0x0 , 0xc , 0xc , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , // Char 69 E
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , // Char 70 F
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x1c , 0xe , 0x0 , 0x0 , 0x7 , 0x30 , 0x0 , 0x0 , 0xe , 0x1c , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x60 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , // Char 71 G
0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x38 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0xfc , 0x7 , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x1c , 0x0 , 0x0 , 0xe0 , 0x20 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 72 H
0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x90 , 0x3c , 0x0 , 0x0 , 0x30 , 0x13 , 0x0 , 0x0 , 0x38 , 0x8 , 0x0 , 0x0 , 0xe , 0xc , 0x0 , 0x0 , 0x3 , 0x4 , 0x0 , 0x0 , 0x1c , 0x8 , 0x0 , 0x0 , 0x30 , 0x19 , 0x0 , 0x0 , 0xb0 , 0x17 , 0x0 , 0x0 , 0x90 , 0x38 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 73 I
0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xdc , 0xf , 0x0 , 0x0 , 0xde , 0x1f , 0x0 , 0x0 , 0x9e , 0x13 , 0x0 , 0x0 , 0x1f , 0x38 , 0x0 , 0x0 , 0xf , 0x38 , 0x0 , 0x0 , 0x3 , 0x3c , 0x0 , 0x0 , 0x3 , 0x3c , 0x0 , 0x0 , 0x1f , 0x38 , 0x0 , 0x0 , 0x1f , 0x31 , 0x0 , 0x0 , 0x9e , 0x1f , 0x0 , 0x0 , 0xdc , 0x1f , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0xf0 , 0x3 , // Char 74 J
0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x30 , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x60 , 0xe , 0x0 , 0x0 , 0x3c , 0x4 , 0x0 , 0x0 , 0x3e , 0x4 , 0x0 , 0x0 , 0x30 , 0xe , 0x0 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0xc0 , 0x1c , 0x0 , 0x0 , 0xc0 , 0x20 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x60 , // Char 75 K
0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xa0 , 0x0 , 0x0 , 0x0 , 0xa0 , 0x3d , 0x0 , 0x0 , 0x20 , 0x13 , 0x0 , 0x0 , 0xf0 , 0x19 , 0x0 , 0x0 , 0xec , 0xb , 0x0 , 0x0 , 0xe3 , 0xf , 0x0 , 0x0 , 0xf8 , 0xb , 0x0 , 0x0 , 0xa0 , 0x11 , 0x0 , 0x0 , 0x20 , 0x7 , 0x0 , 0x0 , 0xa0 , 0x30 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 76 L
0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xa0 , 0x0 , 0x0 , 0x0 , 0x20 , 0x3d , 0x0 , 0x0 , 0xe0 , 0x16 , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0xec , 0xb , 0x0 , 0x0 , 0xf3 , 0x7 , 0x0 , 0x0 , 0xd8 , 0xf , 0x0 , 0x0 , 0xe0 , 0x16 , 0x0 , 0x0 , 0xe0 , 0x17 , 0x0 , 0x0 , 0xa0 , 0x30 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x60 , // Char 77 M
0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x20 , 0x0 , 0x0 , 0xa0 , 0x3f , 0x0 , 0x0 , 0x20 , 0x13 , 0x0 , 0x0 , 0xf8 , 0xa , 0x0 , 0x0 , 0xce , 0xf , 0x0 , 0x0 , 0xe7 , 0xd , 0x0 , 0x0 , 0xd8 , 0xb , 0x0 , 0x0 , 0x60 , 0x10 , 0x0 , 0x0 , 0xa0 , 0x3f , 0x0 , 0x0 , 0xa0 , 0x30 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x60 , // Char 78 N
0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x38 , 0x0 , 0x0 , 0x60 , 0x1f , 0x0 , 0x0 , 0x60 , 0x3 , 0x0 , 0x0 , 0xcc , 0x1 , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0xb8 , 0xe , 0x0 , 0x0 , 0xa0 , 0xd , 0x0 , 0x0 , 0x80 , 0x13 , 0x0 , 0x0 , 0xc0 , 0x38 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x60 , // Char 79 O
0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x80 , 0x30 , 0x0 , 0x0 , 0x0 , 0x31 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x3 , 0x1c , 0x0 , 0x0 , 0xf , 0x8 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0xe0 , 0x38 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 80 P
0x0 , 0x10 , 0x6 , 0x0 , 0x0 , 0x3c , 0xf , 0x0 , 0x0 , 0x78 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x38 , 0xf , 0x0 , 0x0 , 0x10 , 0x6 , // Char 81 Q
0x0 , 0x18 , 0x6 , 0x0 , 0x0 , 0x38 , 0x6 , 0x0 , 0x0 , 0x30 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0x1f , 0x3e , 0x0 , 0x0 , 0x1f , 0x3e , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0x70 , 0x3 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x18 , 0x6 , 0x0 , 0x0 , 0x10 , // Char 82 R
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x84 , 0x0 , 0x0 , 0x0 , 0x8c , 0xc , 0x0 , 0x0 , 0x90 , 0x4 , 0x0 , 0x0 , 0xa0 , 0x2 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xb0 , 0x2 , 0x0 , 0x0 , 0x98 , 0x4 , 0x0 , 0x0 , 0x8c , 0xc , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0xc0 , // Char 83 S
0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x84 , 0x8 , 0x0 , 0x0 , 0x98 , 0x4 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xd0 , 0x2 , 0x0 , 0x0 , 0x88 , 0x4 , 0x0 , 0x0 , 0x84 , // Char 84 T
0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0xc4 , 0x8 , 0x0 , 0x0 , 0x48 , 0x6 , 0x0 , 0x0 , 0x58 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xb8 , 0x7 , 0x0 , 0x0 , 0x98 , 0x6 , 0x0 , 0x0 , 0x84 , 0x8 , 0x0 , 0x0 , 0x80 , // Char 85 U
0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x10 , 0x2 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x10 , 0x2 , // Char 86 V
0x0 , 0x10 , 0x2 , 0x0 , 0x0 , 0x30 , 0x2 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xe0 , 0x21 , 0x0 , 0x0 , 0x60 , 0x3 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x10 , 0x2 , // Char 87 W
0x0 , 0x10 , 0x2 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xf2 , 0x13 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x10 , 0x2 , // Char 88 X
0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0xd0 , 0x2 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xd0 , 0x2 , 0x0 , 0x0 , 0x40 , // Char 89 Y
0x0 , 0x90 , 0x2 , 0x0 , 0x0 , 0x90 , 0x2 , 0x0 , 0x0 , 0xac , 0x9 , 0x0 , 0x0 , 0xb8 , 0x5 , 0x0 , 0x0 , 0xf6 , 0x1b , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xfe , 0x1b , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xac , 0xd , 0x0 , 0x0 , 0xa4 , 0xa , 0x0 , 0x0 , 0x90 , 0x2 , // Char 90 Z
0x0 , 0x18 , 0x6 , 0x0 , 0x0 , 0x38 , 0x6 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xef , 0x3d , 0x0 , 0x0 , 0xef , 0x3d , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x38 , 0x6 , 0x0 , 0x0 , 0x18 , 0x6 , // Char 91 [
0x0 , 0x18 , 0x6 , 0x0 , 0x0 , 0x38 , 0x6 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x3f , 0x3f , 0x0 , 0x0 , 0x3f , 0x3f , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x60 , 0x1 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x38 , 0x6 , 0x0 , 0x0 , 0x18 , 0x6 , // Char 92 Backslash
0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x30 , 0x7 , 0x0 , 0x0 , 0x60 , 0x3 , 0x0 , 0x0 , 0xc6 , 0x18 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xdf , 0x3e , 0x0 , 0x0 , 0x60 , 0x1 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x18 , 0x6 , // Char 93 ]
0x0 , 0x38 , 0x1 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x6e , 0x1c , 0x0 , 0x0 , 0xc1 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x6e , 0x1c , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x38 , 0x1 , // Char 94 ^
0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf8 , 0x9 , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0xf4 , 0x3f , 0x0 , 0x0 , 0x3f , 0x3e , 0x0 , 0x0 , 0x1f , 0x1c , 0x0 , 0x0 , 0x1f , 0xc , 0x0 , 0x0 , 0x3f , 0x3e , 0x0 , 0x0 , 0x7e , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x1d , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0x60 , // Char 95 _
0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0x10 , 0x1 , 0x0 , 0x0 , 0x8 , 0x3d , 0x0 , 0x0 , 0x50 , 0x23 , 0x0 , 0x0 , 0xd0 , 0x21 , 0x0 , 0x0 , 0xf3 , 0x27 , 0x0 , 0x0 , 0xe1 , 0x1f , 0x0 , 0x0 , 0xf1 , 0xf , 0x0 , 0x0 , 0xe3 , 0x23 , 0x0 , 0x0 , 0xde , 0x25 , 0x0 , 0x0 , 0x50 , 0x21 , 0x0 , 0x0 , 0x0 , 0x35 , 0x0 , 0x0 , 0x18 , 0x19 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0x60 , // Char 96 `
0x0 , 0x60 , 0x1 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xe8 , 0x15 , 0x0 , 0x0 , 0xfa , 0x1f , 0x0 , 0x0 , 0xfc , 0x17 , 0x0 , 0x0 , 0x3d , 0x2f , 0x0 , 0x0 , 0x3f , 0x1e , 0x0 , 0x0 , 0x3f , 0x3e , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xf8 , 0x17 , 0x0 , 0x0 , 0xfa , 0x1f , 0x0 , 0x0 , 0xe4 , 0x13 , 0x0 , 0x0 , 0xe8 , 0x5 , 0x0 , 0x0 , 0xc0 , 0x1 , // Char 97 a
0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0x7c , 0xf , 0x0 , 0x0 , 0x3e , 0x17 , 0x0 , 0x0 , 0xe6 , 0x19 , 0x0 , 0x0 , 0x17 , 0x3a , 0x0 , 0x0 , 0xf , 0x3c , 0x0 , 0x0 , 0x9 , 0x24 , 0x0 , 0x0 , 0xb , 0x34 , 0x0 , 0x0 , 0xf , 0x3c , 0x0 , 0x0 , 0x17 , 0x3a , 0x0 , 0x0 , 0xe6 , 0x19 , 0x0 , 0x0 , 0x3c , 0x1f , 0x0 , 0x0 , 0x78 , 0xf , 0x0 , 0x0 , 0xf0 , 0x3 , // Char 98 b
0x0 , 0x28 , 0x7 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0x98 , 0x5 , 0x0 , 0x0 , 0x90 , 0x0 , 0x0 , 0x0 , 0xe2 , 0x18 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xc6 , 0x11 , 0x0 , 0x0 , 0x60 , 0x3 , 0x0 , 0x0 , 0xa0 , 0x6 , 0x0 , 0x0 , 0x34 , 0x6 , 0x0 , 0x0 , 0x38 , 0x4 , // Char 99 c
0x0 , 0x58 , 0x5 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x38 , 0xf , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0xc4 , 0x18 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xc4 , 0x8 , 0x0 , 0x0 , 0x44 , 0x11 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0x3c , 0xf , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x48 , 0x5 , // Char 100 d
0x0 , 0x98 , 0x6 , 0x0 , 0x0 , 0x50 , 0x2 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x24 , 0x9 , 0x0 , 0x0 , 0xc0 , 0x9 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xcf , 0x3c , 0x0 , 0x0 , 0xc0 , 0x9 , 0x0 , 0x0 , 0x3c , 0xf , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0xd0 , 0x2 , 0x0 , 0x0 , 0x98 , 0x4 , // Char 101 e
0x0 , 0x70 , 0x5 , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x38 , 0xf , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0x46 , 0x18 , 0x0 , 0x0 , 0xce , 0x3c , 0x0 , 0x0 , 0xcc , 0x1c , 0x0 , 0x0 , 0x46 , 0x18 , 0x0 , 0x0 , 0x20 , 0x3 , 0x0 , 0x0 , 0x38 , 0xf , 0x0 , 0x0 , 0x30 , 0x3 , 0x0 , 0x0 , 0x60 , 0x5 , // Char 102 f
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc6 , 0x10 , 0x0 , 0x0 , 0xc4 , 0x8 , 0x0 , 0x0 , 0xc8 , 0x4 , 0x0 , 0x0 , 0x90 , 0x2 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xdf , 0x3e , 0x0 , 0x0 , 0xcf , 0x3c , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xd0 , 0x2 , 0x0 , 0x0 , 0xc8 , 0x4 , 0x0 , 0x0 , 0xc4 , 0x8 , 0x0 , 0x0 , 0xc2 , 0x10 , 0x0 , 0x0 , 0xc0 , // Char 103 g
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe2 , 0x11 , 0x0 , 0x0 , 0xc4 , 0x9 , 0x0 , 0x0 , 0xc8 , 0x4 , 0x0 , 0x0 , 0x90 , 0x2 , 0x0 , 0x0 , 0xc6 , 0x18 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xcf , 0x3d , 0x0 , 0x0 , 0x80 , 0x10 , 0x0 , 0x0 , 0x90 , 0x2 , 0x0 , 0x0 , 0xc8 , 0x4 , 0x0 , 0x0 , 0xe4 , 0x9 , 0x0 , 0x0 , 0xc2 , 0x11 , 0x0 , 0x0 , 0xc0 , // Char 104 h
0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0x42 , 0x10 , 0x0 , 0x0 , 0xc7 , 0x38 , 0x0 , 0x0 , 0xcf , 0x3c , 0x0 , 0x0 , 0xc6 , 0x30 , 0x0 , 0x0 , 0x20 , 0x1 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x38 , 0x7 , 0x0 , 0x0 , 0x10 , 0x2 , // Char 105 i
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xcc , 0xc , 0x0 , 0x0 , 0xc , 0xc , 0x0 , 0x0 , 0x10 , 0x2 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xef , 0x3d , 0x0 , 0x0 , 0xe7 , 0x39 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x10 , 0x6 , 0x0 , 0x0 , 0x8c , 0xc , 0x0 , 0x0 , 0xcc , 0xc , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , // Char 106 j
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xcc , 0x1c , 0x0 , 0x0 , 0xdc , 0xe , 0x0 , 0x0 , 0xb0 , 0x6 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xef , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xd8 , 0x6 , 0x0 , 0x0 , 0xdc , 0xe , 0x0 , 0x0 , 0xcc , 0xc , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , // Char 107 k
0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0xf0 , 0x3 , // Char 108 l
0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xc , 0xc , 0x0 , 0x0 , 0x2 , 0x10 , 0x0 , 0x0 , 0x2 , 0x10 , 0x0 , 0x0 , 0x1 , 0x20 , 0x0 , 0x0 , 0x1 , 0x20 , 0x0 , 0x0 , 0x1 , 0x20 , 0x0 , 0x0 , 0x1 , 0x20 , 0x0 , 0x0 , 0x1 , 0x20 , 0x0 , 0x0 , 0x1 , 0x20 , 0x0 , 0x0 , 0x3 , 0x30 , 0x0 , 0x0 , 0x6 , 0x38 , 0x0 , 0x0 , 0xe , 0x1c , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x1 , // Char 109 m
0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , // Char 110 n
0x0 , 0x1 , 0x8 , 0x0 , 0x0 , 0x1 , 0x8 , 0x0 , 0x0 , 0x1 , 0x38 , 0x0 , 0x0 , 0x1 , 0x38 , 0x0 , 0x0 , 0x1 , 0x38 , 0x0 , 0x0 , 0x1 , 0x38 , 0x0 , 0x0 , 0x1 , 0x38 , 0x0 , 0x0 , 0x1 , 0x38 , 0x0 , 0x0 , 0x1 , 0x38 , 0x0 , 0x0 , 0x1 , 0x38 , 0x0 , 0x0 , 0x1 , 0x38 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3f , // Char 111 o
0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0xfe , 0xf , // Char 112 p
0x0 , 0x1 , 0x8 , 0x0 , 0x0 , 0x1 , 0x10 , 0x0 , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3f , // Char 113 q
0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x6 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0x0 , 0xfe , 0x7 , // Char 114 r
0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 115 s
0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 116 t
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , // Char 117 u
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xcc , 0xc , 0x0 , 0x0 , 0x1e , 0x1e , 0x0 , 0x0 , 0x3f , 0x3f , 0x0 , 0x0 , 0x1e , 0x3e , 0x0 , 0x0 , 0xcc , 0x1c , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0x80 , // Char 118 v
0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x3 , // Char 119 w
0x0 , 0xff , 0x3f , // Char 120 x
0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , // Char 121 y
0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , // Char 122 z
0x0 , 0xfc , 0x0 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0xf9 , 0x1 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0xf0 , // Char 123 {
0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0xbf , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0x3e , // Char 124 |
0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x0 , 0xfa , 0x1 , 0x0 , 0x0 , 0xf9 , 0x1 , 0x0 , 0x0 , 0xf9 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x0 , 0xf9 , 0x1 , 0x0 , 0x0 , 0xf9 , 0x1 , 0x0 , 0x0 , 0xf9 , 0x0 , 0x0 , 0x0 , 0x60 , // Char 125 }
0x0 , 0x1e , 0x1 , 0x0 , 0x0 , 0x3f , 0x1 , 0x0 , 0x0 , 0xbf , 0x0 , 0x0 , 0x0 , 0xbf , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x1e , 0x1 , 0x0 , 0x0 , 0x3f , 0x1 , 0x0 , 0x0 , 0xbf , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0xc , // Char 126 ~
};
