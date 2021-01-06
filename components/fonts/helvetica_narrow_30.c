#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Helvetica_Narrow_30[] PROGMEM = {
12 , // Width 
30 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 12, // Char 32   - Nodata
 0x0, 0x0, 0xb, 0x5, // Char 33 ! 
 0x0, 0xb, 0x11, 0x7, // Char 34 " 
 0x0, 0x1c, 0x2e, 0xe, // Char 35 # 
 0x0, 0x4a, 0x2f, 0xe, // Char 36 $ 
 0x0, 0x79, 0x4f, 0x16, // Char 37 % 
 0x0, 0xc8, 0x3b, 0x11, // Char 38 & 
 0x1, 0x3, 0x5, 0x4, // Char 39 ' 
 0x1, 0x8, 0x14, 0x7, // Char 40 ( 
 0x1, 0x1c, 0x16, 0x8, // Char 41 ) 
 0x1, 0x32, 0x19, 0x9, // Char 42 * 
 0x1, 0x4b, 0x2e, 0xe, // Char 43 + 
 0x1, 0x79, 0xb, 0x5, // Char 44 , 
 0x1, 0x84, 0x16, 0x8, // Char 45 - 
 0x1, 0x9a, 0xb, 0x5, // Char 46 . 
 0x1, 0xa5, 0x19, 0x9, // Char 47 / 
 0x1, 0xbe, 0x2e, 0xe, // Char 48 0 
 0x1, 0xec, 0x1b, 0x9, // Char 49 1 
 0x2, 0x7, 0x2f, 0xe, // Char 50 2 
 0x2, 0x36, 0x2f, 0xe, // Char 51 3 
 0x2, 0x65, 0x2e, 0xe, // Char 52 4 
 0x2, 0x93, 0x2e, 0xe, // Char 53 5 
 0x2, 0xc1, 0x2e, 0xe, // Char 54 6 
 0x2, 0xef, 0x2d, 0xe, // Char 55 7 
 0x3, 0x1c, 0x2f, 0xe, // Char 56 8 
 0x3, 0x4b, 0x2e, 0xe, // Char 57 9 
 0x3, 0x79, 0xb, 0x5, // Char 58 : 
 0x3, 0x84, 0xb, 0x5, // Char 59 ; 
 0x3, 0x8f, 0x2f, 0xe, // Char 60 < 
 0x3, 0xbe, 0x2f, 0xe, // Char 61 = 
 0x3, 0xed, 0x2e, 0xe, // Char 62 > 
 0x4, 0x1b, 0x29, 0xd, // Char 63 ? 
 0x4, 0x44, 0x42, 0x13, // Char 64 @ 
 0x4, 0x86, 0x3f, 0x12, // Char 65 A 
 0x4, 0xc5, 0x33, 0xf, // Char 66 B 
 0x4, 0xf8, 0x3b, 0x11, // Char 67 C 
 0x5, 0x33, 0x3a, 0x11, // Char 68 D 
 0x5, 0x6d, 0x33, 0xf, // Char 69 E 
 0x5, 0xa0, 0x2d, 0xe, // Char 70 F 
 0x5, 0xcd, 0x3f, 0x12, // Char 71 G 
 0x6, 0xc, 0x37, 0x10, // Char 72 H 
 0x6, 0x43, 0xb, 0x5, // Char 73 I 
 0x6, 0x4e, 0x2a, 0xd, // Char 74 J 
 0x6, 0x78, 0x37, 0x10, // Char 75 K 
 0x6, 0xaf, 0x2b, 0xd, // Char 76 L 
 0x6, 0xda, 0x43, 0x13, // Char 77 M 
 0x7, 0x1d, 0x37, 0x10, // Char 78 N 
 0x7, 0x54, 0x42, 0x13, // Char 79 O 
 0x7, 0x96, 0x32, 0xf, // Char 80 P 
 0x7, 0xc8, 0x43, 0x13, // Char 81 Q 
 0x8, 0xb, 0x3b, 0x11, // Char 82 R 
 0x8, 0x46, 0x37, 0x10, // Char 83 S 
 0x8, 0x7d, 0x39, 0x11, // Char 84 T 
 0x8, 0xb6, 0x36, 0x10, // Char 85 U 
 0x8, 0xec, 0x39, 0x11, // Char 86 V 
 0x9, 0x25, 0x59, 0x19, // Char 87 W 
 0x9, 0x7e, 0x3b, 0x11, // Char 88 X 
 0x9, 0xb9, 0x39, 0x11, // Char 89 Y 
 0x9, 0xf2, 0x37, 0x10, // Char 90 Z 
 0xa, 0x29, 0x14, 0x7, // Char 91 [ 
 0xa, 0x3d, 0x1b, 0x9, // Char 92 Backslash 
 0xa, 0x58, 0x10, 0x6, // Char 93 ] 
 0xa, 0x68, 0x2e, 0xe, // Char 94 ^ 
 0xa, 0x96, 0x37, 0x10, // Char 95 _ 
 0xa, 0xcd, 0xd, 0x6, // Char 96 ` 
 0xa, 0xda, 0x2f, 0xe, // Char 97 a 
 0xb, 0x9, 0x2e, 0xe, // Char 98 b 
 0xb, 0x37, 0x2a, 0xd, // Char 99 c 
 0xb, 0x61, 0x2b, 0xd, // Char 100 d 
 0xb, 0x8c, 0x2e, 0xe, // Char 101 e 
 0xb, 0xba, 0x15, 0x8, // Char 102 f 
 0xb, 0xcf, 0x2b, 0xd, // Char 103 g 
 0xb, 0xfa, 0x27, 0xc, // Char 104 h 
 0xc, 0x21, 0x7, 0x4, // Char 105 i 
 0xc, 0x28, 0x10, 0x6, // Char 106 j 
 0xc, 0x38, 0x27, 0xc, // Char 107 k 
 0xc, 0x5f, 0x7, 0x4, // Char 108 l 
 0xc, 0x66, 0x43, 0x13, // Char 109 m 
 0xc, 0xa9, 0x27, 0xc, // Char 110 n 
 0xc, 0xd0, 0x2e, 0xe, // Char 111 o 
 0xc, 0xfe, 0x2e, 0xe, // Char 112 p 
 0xd, 0x2c, 0x2c, 0xd, // Char 113 q 
 0xd, 0x58, 0x15, 0x8, // Char 114 r 
 0xd, 0x6d, 0x27, 0xc, // Char 115 s 
 0xd, 0x94, 0x17, 0x8, // Char 116 t 
 0xd, 0xab, 0x27, 0xc, // Char 117 u 
 0xd, 0xd2, 0x2d, 0xe, // Char 118 v 
 0xd, 0xff, 0x42, 0x13, // Char 119 w 
 0xe, 0x41, 0x2f, 0xe, // Char 120 x 
 0xe, 0x70, 0x2d, 0xe, // Char 121 y 
 0xe, 0x9d, 0x2b, 0xd, // Char 122 z 
 0xe, 0xc8, 0x18, 0x8, // Char 123 { 
 0xe, 0xe0, 0x7, 0x4, // Char 124 | 
 0xe, 0xe7, 0x16, 0x8, // Char 125 } 
 0xe, 0xfd, 0x2a, 0xd, // Char 126 ~ 

// Data Table:
0xff , 0x1f , 0x1c , 0x0 , 0xff , 0xff , 0x1c , 0x0 , 0xff , 0x3 , 0x1c , // Char 33 !
0xff , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xff , // Char 34 "
0x80 , 0x61 , 0x0 , 0x0 , 0x80 , 0x61 , 0x0 , 0x0 , 0x80 , 0xf1 , 0x1f , 0x0 , 0xf8 , 0xff , 0x3 , 0x0 , 0xff , 0x63 , 0x0 , 0x0 , 0x80 , 0x61 , 0x0 , 0x0 , 0x80 , 0x61 , 0x1c , 0x0 , 0x80 , 0xff , 0x1f , 0x0 , 0xfe , 0xff , 0x0 , 0x0 , 0xff , 0x61 , 0x0 , 0x0 , 0x80 , 0x61 , 0x0 , 0x0 , 0x80 , 0x1 , // Char 35 #
0xf8 , 0x80 , 0x7 , 0x0 , 0xfc , 0x83 , 0xf , 0x0 , 0xce , 0x3 , 0x1e , 0x0 , 0x7 , 0x7 , 0x18 , 0x0 , 0x3 , 0x6 , 0x18 , 0x0 , 0xff , 0xff , 0xff , 0x0 , 0x7 , 0xe , 0x38 , 0x0 , 0x7 , 0xc , 0x18 , 0x0 , 0x7 , 0x1c , 0x1c , 0x0 , 0x3e , 0x7c , 0x1f , 0x0 , 0x3c , 0xf8 , 0xf , 0x0 , 0x0 , 0xe0 , 0x3 , // Char 36 $
0xfc , 0x1 , 0x0 , 0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0x3 , 0x6 , 0x0 , 0x0 , 0x3 , 0x6 , 0x0 , 0x0 , 0x3 , 0x6 , 0x0 , 0x0 , 0x8e , 0x3 , 0x18 , 0x0 , 0xfc , 0x1 , 0xe , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0x78 , 0xc0 , 0x0 , 0x0 , 0xe , 0xf8 , 0xf , 0x0 , 0x3 , 0x1c , 0x1e , 0x0 , 0x0 , 0x4 , 0x18 , 0x0 , 0x0 , 0x6 , 0x18 , 0x0 , 0x0 , 0xc , 0x1c , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xf0 , 0x3 , // Char 37 %
0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x78 , 0x3c , 0xf , 0x0 , 0xfe , 0xc , 0x1c , 0x0 , 0xef , 0xf , 0x1c , 0x0 , 0x87 , 0x7 , 0x18 , 0x0 , 0x3 , 0x1f , 0x18 , 0x0 , 0x87 , 0x3f , 0x1c , 0x0 , 0xfe , 0x79 , 0xe , 0x0 , 0x7c , 0xe0 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0x38 , 0x1e , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x10 , // Char 38 &
0x7f , 0x0 , 0x0 , 0x0 , 0xff , // Char 39 '
0x80 , 0xff , 0xf , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xfc , 0x0 , 0xf8 , 0x0 , 0x1e , 0x0 , 0xc0 , 0x3 , 0x3 , 0x0 , 0x0 , 0x6 , // Char 40 (
0x3 , 0x0 , 0x0 , 0x6 , 0xf , 0x0 , 0x80 , 0x7 , 0x7c , 0x0 , 0xf0 , 0x1 , 0xf0 , 0xff , 0x7f , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0x0 , 0x70 , // Char 41 )
0xc , 0x0 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0xd8 , 0x0 , 0x0 , 0x0 , 0xc , // Char 42 *
0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , // Char 43 +
0x0 , 0x0 , 0x1c , 0x1 , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0x0 , 0x7c , // Char 44 ,
0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , // Char 45 -
0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , // Char 46 .
0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x7 , // Char 47 /
0xe0 , 0xff , 0x0 , 0x0 , 0xf8 , 0xff , 0x7 , 0x0 , 0x7e , 0xc0 , 0xf , 0x0 , 0xe , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x3 , 0x0 , 0x38 , 0x0 , 0x3 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x1e , 0x0 , 0x1e , 0x0 , 0xfc , 0xff , 0xf , 0x0 , 0xf8 , 0xff , 0x3 , 0x0 , 0x80 , 0x7f , // Char 48 0
0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0xfc , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , // Char 49 1
0xf0 , 0x0 , 0x1e , 0x0 , 0xfc , 0x80 , 0x1f , 0x0 , 0x3e , 0xc0 , 0x1d , 0x0 , 0x6 , 0xe0 , 0x1c , 0x0 , 0x7 , 0x70 , 0x1c , 0x0 , 0x3 , 0x38 , 0x1c , 0x0 , 0x3 , 0x38 , 0x1c , 0x0 , 0x7 , 0x1c , 0x1c , 0x0 , 0xe , 0xe , 0x1c , 0x0 , 0xfe , 0x7 , 0x1c , 0x0 , 0xf8 , 0x3 , 0x1c , 0x0 , 0x0 , 0x0 , 0x18 , // Char 50 2
0x70 , 0xc0 , 0x3 , 0x0 , 0x7c , 0xc0 , 0xf , 0x0 , 0x3e , 0x0 , 0x1e , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x6 , 0x18 , 0x0 , 0x3 , 0x6 , 0x38 , 0x0 , 0x7 , 0x6 , 0x18 , 0x0 , 0x7 , 0xf , 0x18 , 0x0 , 0x8e , 0xf , 0x1c , 0x0 , 0xfe , 0xfd , 0xf , 0x0 , 0xf8 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x1 , // Char 51 3
0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0x0 , 0xcf , 0x0 , 0x0 , 0x80 , 0xc3 , 0x0 , 0x0 , 0xe0 , 0xc1 , 0x0 , 0x0 , 0x78 , 0xc0 , 0x0 , 0x0 , 0x1c , 0xc0 , 0x0 , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , // Char 52 4
0x0 , 0x8 , 0x7 , 0x0 , 0xfc , 0xf , 0xf , 0x0 , 0xff , 0xf , 0x1e , 0x0 , 0x7 , 0x7 , 0x1c , 0x0 , 0x7 , 0x3 , 0x18 , 0x0 , 0x7 , 0x3 , 0x38 , 0x0 , 0x7 , 0x3 , 0x18 , 0x0 , 0x7 , 0x7 , 0x1c , 0x0 , 0x7 , 0xf , 0x1e , 0x0 , 0x7 , 0xfe , 0xf , 0x0 , 0x6 , 0xfc , 0x7 , 0x0 , 0x0 , 0xe0 , // Char 53 5
0xc0 , 0xff , 0x0 , 0x0 , 0xf8 , 0xff , 0x7 , 0x0 , 0x7c , 0xfe , 0xf , 0x0 , 0xe , 0x6 , 0x1c , 0x0 , 0x7 , 0x3 , 0x18 , 0x0 , 0x7 , 0x3 , 0x18 , 0x0 , 0x3 , 0x3 , 0x38 , 0x0 , 0x7 , 0x3 , 0x18 , 0x0 , 0xe , 0x7 , 0x1c , 0x0 , 0x3e , 0xfe , 0xf , 0x0 , 0x3c , 0xfc , 0x7 , 0x0 , 0x0 , 0xf0 , // Char 54 6
0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x10 , 0x0 , 0x7 , 0x80 , 0x1f , 0x0 , 0x7 , 0xf0 , 0x1f , 0x0 , 0x7 , 0xfc , 0x3 , 0x0 , 0x7 , 0x3f , 0x0 , 0x0 , 0xc7 , 0x7 , 0x0 , 0x0 , 0xf7 , 0x1 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x7 , // Char 55 7
0x0 , 0xf0 , 0x3 , 0x0 , 0xfc , 0xf9 , 0xf , 0x0 , 0xfe , 0x3f , 0xf , 0x0 , 0x7 , 0xf , 0x1c , 0x0 , 0x7 , 0x7 , 0x18 , 0x0 , 0x3 , 0x6 , 0x18 , 0x0 , 0x3 , 0x6 , 0x18 , 0x0 , 0x7 , 0x7 , 0x18 , 0x0 , 0x8e , 0xf , 0x1c , 0x0 , 0xfe , 0xfd , 0xf , 0x0 , 0xf8 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x1 , // Char 56 8
0xf0 , 0x3 , 0x3 , 0x0 , 0xfc , 0xf , 0xf , 0x0 , 0x3e , 0x1e , 0x1f , 0x0 , 0x7 , 0x38 , 0x18 , 0x0 , 0x7 , 0x38 , 0x18 , 0x0 , 0x3 , 0x30 , 0x38 , 0x0 , 0x7 , 0x38 , 0x18 , 0x0 , 0x7 , 0x38 , 0x1c , 0x0 , 0xe , 0x1c , 0xf , 0x0 , 0xfc , 0xff , 0x7 , 0x0 , 0xf8 , 0xff , 0x1 , 0x0 , 0x0 , 0x1f , // Char 57 9
0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , // Char 58 :
0xe0 , 0x0 , 0x1c , 0x1 , 0xe0 , 0x0 , 0xfc , 0x1 , 0xe0 , 0x0 , 0x7c , // Char 59 ;
0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0xd8 , 0x0 , 0x0 , 0x0 , 0xdc , 0x1 , 0x0 , 0x0 , 0x8c , 0x1 , 0x0 , 0x0 , 0x8e , 0x3 , 0x0 , 0x0 , 0x6 , 0x3 , 0x0 , 0x0 , 0x7 , 0x7 , 0x0 , 0x0 , 0x3 , 0x6 , 0x0 , 0x80 , 0x3 , 0xe , 0x0 , 0x80 , 0x1 , 0xc , // Char 60 <
0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , // Char 61 =
0x80 , 0x1 , 0xc , 0x0 , 0x80 , 0x1 , 0xc , 0x0 , 0x80 , 0x3 , 0xe , 0x0 , 0x0 , 0x3 , 0x6 , 0x0 , 0x0 , 0x7 , 0x7 , 0x0 , 0x0 , 0x6 , 0x3 , 0x0 , 0x0 , 0x8e , 0x3 , 0x0 , 0x0 , 0x8c , 0x1 , 0x0 , 0x0 , 0xdc , 0x0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x70 , // Char 62 >
0x60 , 0x0 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x7 , 0x40 , 0x1c , 0x0 , 0x3 , 0xf8 , 0x1c , 0x0 , 0x3 , 0x7c , 0x1c , 0x0 , 0x7 , 0xf , 0x0 , 0x0 , 0x8e , 0x7 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x0 , 0xf8 , // Char 63 ?
0xc0 , 0x7f , 0x0 , 0x0 , 0xf0 , 0xff , 0x1 , 0x0 , 0x38 , 0x80 , 0x7 , 0x0 , 0x1c , 0x3c , 0xe , 0x0 , 0x8e , 0xff , 0xc , 0x0 , 0xc6 , 0xe7 , 0x19 , 0x0 , 0xe3 , 0x80 , 0x19 , 0x0 , 0x73 , 0x80 , 0x19 , 0x0 , 0x33 , 0x80 , 0x30 , 0x0 , 0x33 , 0xe0 , 0x30 , 0x0 , 0x73 , 0xf8 , 0x19 , 0x0 , 0xe3 , 0xff , 0x19 , 0x0 , 0xf6 , 0x87 , 0x19 , 0x0 , 0x7e , 0xc0 , 0xc , 0x0 , 0x1c , 0x60 , 0x6 , 0x0 , 0x78 , 0x3c , 0x3 , 0x0 , 0xe0 , 0x1f , // Char 64 @
0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0xf0 , 0x7f , 0x0 , 0x0 , 0xfe , 0x71 , 0x0 , 0x0 , 0x1f , 0x70 , 0x0 , 0x0 , 0xf , 0x70 , 0x0 , 0x0 , 0xff , 0x70 , 0x0 , 0x0 , 0xf8 , 0x77 , 0x0 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x0 , 0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x18 , // Char 65 A
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x7 , 0x6 , 0x1c , 0x0 , 0x3 , 0x6 , 0x18 , 0x0 , 0x3 , 0x6 , 0x18 , 0x0 , 0x3 , 0x6 , 0x18 , 0x0 , 0x3 , 0x6 , 0x18 , 0x0 , 0x7 , 0x6 , 0x1c , 0x0 , 0x7 , 0x7 , 0x1c , 0x0 , 0xf , 0xf , 0x1c , 0x0 , 0xfe , 0x1f , 0xe , 0x0 , 0xfc , 0xfc , 0x7 , 0x0 , 0x20 , 0xf8 , 0x3 , // Char 66 B
0x80 , 0x7f , 0x0 , 0x0 , 0xf0 , 0xff , 0x1 , 0x0 , 0xf8 , 0xff , 0x7 , 0x0 , 0x3c , 0x80 , 0xf , 0x0 , 0xe , 0x0 , 0x1e , 0x0 , 0xf , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x38 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0xe , 0x0 , 0x1c , 0x0 , 0x1e , 0x0 , 0xf , 0x0 , 0x7c , 0xc0 , 0x7 , 0x0 , 0x78 , 0xe0 , 0x3 , // Char 67 C
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x3 , 0x0 , 0x18 , 0x0 , 0x3 , 0x0 , 0x18 , 0x0 , 0x3 , 0x0 , 0x18 , 0x0 , 0x3 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0xe , 0x0 , 0xe , 0x0 , 0x3c , 0xc0 , 0x7 , 0x0 , 0xf8 , 0xff , 0x3 , 0x0 , 0xf0 , 0xff , 0x0 , 0x0 , 0x0 , 0xf , // Char 68 D
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0x0 , 0x1c , // Char 69 E
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , // Char 70 F
0x0 , 0x3f , 0x0 , 0x0 , 0xe0 , 0xff , 0x1 , 0x0 , 0xf8 , 0xff , 0x7 , 0x0 , 0x7c , 0x0 , 0xf , 0x0 , 0x1e , 0x0 , 0x1e , 0x0 , 0xe , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0xe , 0x18 , 0x0 , 0x7 , 0xe , 0x18 , 0x0 , 0x6 , 0xe , 0x1c , 0x0 , 0xe , 0xe , 0xe , 0x0 , 0x3c , 0x8e , 0x7 , 0x0 , 0x78 , 0xfe , 0xf , 0x0 , 0x70 , 0xfe , 0x1f , // Char 71 G
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , // Char 72 H
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , // Char 73 I
0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0xff , 0xff , 0xf , 0x0 , 0xff , 0xff , 0x7 , 0x0 , 0xff , 0xff , // Char 74 J
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xf0 , 0x7c , 0x0 , 0x0 , 0x78 , 0xf8 , 0x0 , 0x0 , 0x1c , 0xe0 , 0x3 , 0x0 , 0xf , 0x80 , 0xf , 0x0 , 0x7 , 0x0 , 0x1f , 0x0 , 0x3 , 0x0 , 0x1c , 0x0 , 0x1 , 0x0 , 0x10 , // Char 75 K
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , // Char 76 L
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , // Char 77 M
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , // Char 78 N
0x80 , 0x7f , 0x0 , 0x0 , 0xf0 , 0xff , 0x1 , 0x0 , 0xf8 , 0xff , 0x7 , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0xe , 0x0 , 0xe , 0x0 , 0xe , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x38 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x6 , 0x0 , 0x1c , 0x0 , 0xe , 0x0 , 0x1e , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0xf8 , 0xf1 , 0x7 , 0x0 , 0xf0 , 0xff , 0x3 , 0x0 , 0xc0 , 0x7f , // Char 79 O
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0x0 , 0xf8 , 0x1 , // Char 80 P
0x80 , 0x7f , 0x0 , 0x0 , 0xf0 , 0xff , 0x1 , 0x0 , 0xf8 , 0xff , 0x7 , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0xe , 0x0 , 0xe , 0x0 , 0xe , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x38 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x80 , 0x1b , 0x0 , 0xf , 0x0 , 0x1f , 0x0 , 0xe , 0x0 , 0xe , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0xf8 , 0xe1 , 0x1f , 0x0 , 0xf0 , 0xff , 0x39 , 0x0 , 0xc0 , 0x7f , 0x30 , // Char 81 Q
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0x1e , 0x0 , 0x0 , 0x9e , 0xff , 0x0 , 0x0 , 0xfe , 0xfb , 0x1f , 0x0 , 0xf8 , 0xe1 , 0x1f , 0x0 , 0x0 , 0x0 , 0x10 , // Char 82 R
0x0 , 0xc0 , 0x1 , 0x0 , 0xf8 , 0xc1 , 0x7 , 0x0 , 0xfc , 0x83 , 0xf , 0x0 , 0x8e , 0x7 , 0x1e , 0x0 , 0x7 , 0x7 , 0x1c , 0x0 , 0x7 , 0x6 , 0x18 , 0x0 , 0x7 , 0xe , 0x18 , 0x0 , 0x7 , 0xe , 0x38 , 0x0 , 0x7 , 0xe , 0x18 , 0x0 , 0x7 , 0x1c , 0x18 , 0x0 , 0xe , 0x1c , 0x1c , 0x0 , 0x3e , 0x3c , 0xe , 0x0 , 0x7c , 0xf8 , 0xf , 0x0 , 0x30 , 0xf0 , 0x7 , // Char 83 S
0x3 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x3 , // Char 84 T
0xff , 0xff , 0x1 , 0x0 , 0xff , 0xff , 0x7 , 0x0 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0xff , 0xff , 0xf , 0x0 , 0xff , 0xff , 0x7 , 0x0 , 0xff , 0xff , // Char 85 U
0x7 , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x3 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x0 , 0xfc , 0x7 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x3 , // Char 86 V
0x1 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0x80 , 0xff , 0x0 , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0xf8 , 0x7f , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3 , // Char 87 W
0x1 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x1e , 0x0 , 0x1f , 0x0 , 0x1f , 0x0 , 0x3e , 0xc0 , 0x7 , 0x0 , 0xf8 , 0xf0 , 0x1 , 0x0 , 0xe0 , 0xfb , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x0 , 0xf0 , 0xf9 , 0x1 , 0x0 , 0x7c , 0xe0 , 0x3 , 0x0 , 0x3f , 0x80 , 0xf , 0x0 , 0xf , 0x0 , 0x1e , 0x0 , 0x3 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x10 , // Char 88 X
0x3 , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 89 Y
0x3 , 0x0 , 0x1e , 0x0 , 0x7 , 0x0 , 0x1f , 0x0 , 0x7 , 0xc0 , 0x1f , 0x0 , 0x7 , 0xe0 , 0x1d , 0x0 , 0x7 , 0xf8 , 0x1c , 0x0 , 0x7 , 0x3c , 0x1c , 0x0 , 0x7 , 0x1f , 0x1c , 0x0 , 0x87 , 0x7 , 0x1c , 0x0 , 0xe7 , 0x3 , 0x1c , 0x0 , 0xf7 , 0x0 , 0x1c , 0x0 , 0x7f , 0x0 , 0x1c , 0x0 , 0x1f , 0x0 , 0x1c , 0x0 , 0xf , 0x0 , 0x1c , 0x0 , 0x3 , 0x0 , 0x18 , // Char 90 Z
0xff , 0xff , 0xff , 0x7 , 0xff , 0xff , 0xff , 0x7 , 0xff , 0xff , 0xff , 0x7 , 0x3 , 0x0 , 0x0 , 0x6 , 0x3 , 0x0 , 0x0 , 0x6 , // Char 91 [
0x7 , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0x0 , 0x38 , // Char 92 Backslash
0x3 , 0x0 , 0x0 , 0x6 , 0x3 , 0x0 , 0x0 , 0x6 , 0xff , 0xff , 0xff , 0x7 , 0xff , 0xff , 0xff , 0x7 , // Char 93 ]
0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x10 , // Char 94 ^
0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , // Char 95 _
0x1 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x4 , // Char 96 `
0x0 , 0xc0 , 0x7 , 0x0 , 0x80 , 0xe3 , 0xf , 0x0 , 0xc0 , 0x73 , 0x1c , 0x0 , 0xe0 , 0x30 , 0x1c , 0x0 , 0x60 , 0x30 , 0x18 , 0x0 , 0x60 , 0x30 , 0x18 , 0x0 , 0x60 , 0x38 , 0xc , 0x0 , 0xe0 , 0x18 , 0xe , 0x0 , 0xc0 , 0xff , 0x7 , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0x0 , 0x0 , 0x18 , // Char 97 a
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xc0 , 0x1 , 0xe , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x1 , 0xe , 0x0 , 0xc0 , 0xff , 0xf , 0x0 , 0x80 , 0xff , 0x3 , 0x0 , 0x0 , 0x7c , // Char 98 b
0x0 , 0xfe , 0x1 , 0x0 , 0x80 , 0xff , 0x7 , 0x0 , 0xc0 , 0x3 , 0xf , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0x60 , 0x0 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xc0 , 0x3 , 0xf , 0x0 , 0x80 , 0x87 , 0x7 , 0x0 , 0x0 , 0x82 , // Char 99 c
0x0 , 0xfe , 0x1 , 0x0 , 0x80 , 0xff , 0x7 , 0x0 , 0xc0 , 0x3 , 0xf , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0x60 , 0x0 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xc0 , 0x0 , 0xc , 0x0 , 0x80 , 0x3 , 0xf , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , // Char 100 d
0x0 , 0xfe , 0x1 , 0x0 , 0x80 , 0xff , 0x7 , 0x0 , 0xc0 , 0xb7 , 0xf , 0x0 , 0xc0 , 0x31 , 0x1c , 0x0 , 0xe0 , 0x30 , 0x1c , 0x0 , 0x60 , 0x30 , 0x18 , 0x0 , 0x60 , 0x30 , 0x18 , 0x0 , 0xe0 , 0x30 , 0x1c , 0x0 , 0xc0 , 0x31 , 0xc , 0x0 , 0xc0 , 0x3f , 0xf , 0x0 , 0x0 , 0x3f , 0x7 , 0x0 , 0x0 , 0x38 , // Char 101 e
0x60 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xfe , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x67 , 0x0 , 0x0 , 0x0 , 0x63 , // Char 102 f
0x0 , 0xfe , 0x0 , 0x0 , 0x80 , 0xff , 0xc7 , 0x1 , 0xc0 , 0x83 , 0x8f , 0x3 , 0xe0 , 0x0 , 0x1e , 0x7 , 0xe0 , 0x0 , 0x1c , 0x6 , 0x60 , 0x0 , 0x18 , 0x6 , 0xe0 , 0x0 , 0x1c , 0x6 , 0xc0 , 0x0 , 0x1c , 0x7 , 0x80 , 0x3 , 0x8e , 0x3 , 0xe0 , 0xff , 0xff , 0x1 , 0xe0 , 0xff , 0xff , // Char 103 g
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0x80 , 0xff , 0x1f , // Char 104 h
0xe7 , 0xff , 0x1f , 0x0 , 0xe7 , 0xff , 0x1f , // Char 105 i
0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x80 , 0x7 , 0xe7 , 0xff , 0xff , 0x3 , 0xe7 , 0xff , 0xff , 0x1 , // Char 106 j
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x80 , 0xf7 , 0x1 , 0x0 , 0xc0 , 0xc1 , 0x7 , 0x0 , 0xe0 , 0x80 , 0x1f , 0x0 , 0x60 , 0x0 , 0x1e , 0x0 , 0x20 , 0x0 , 0x18 , // Char 107 k
0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , // Char 108 l
0xe0 , 0xff , 0x1f , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0x80 , 0xff , 0x1f , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0x0 , 0xff , 0x1f , // Char 109 m
0xe0 , 0xff , 0x1f , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0x80 , 0xff , 0x1f , // Char 110 n
0x0 , 0xfe , 0x1 , 0x0 , 0x80 , 0xff , 0x7 , 0x0 , 0xc0 , 0x87 , 0xf , 0x0 , 0xc0 , 0x1 , 0xe , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0x60 , 0x0 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xc0 , 0x1 , 0xe , 0x0 , 0xc0 , 0xff , 0xf , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0x0 , 0xfc , // Char 111 o
0xe0 , 0xff , 0xff , 0x7 , 0xe0 , 0xff , 0xff , 0x7 , 0xe0 , 0xff , 0xff , 0x7 , 0xc0 , 0x1 , 0xe , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x1 , 0xe , 0x0 , 0xc0 , 0xff , 0xf , 0x0 , 0x80 , 0xff , 0x3 , 0x0 , 0x0 , 0x7c , // Char 112 p
0x0 , 0xfe , 0x1 , 0x0 , 0x80 , 0xff , 0x7 , 0x0 , 0xc0 , 0x3 , 0xf , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0x60 , 0x0 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xc0 , 0x0 , 0xc , 0x0 , 0x80 , 0x3 , 0xf , 0x0 , 0xe0 , 0xff , 0xff , 0x7 , 0xe0 , 0xff , 0xff , 0x7 , // Char 113 q
0xe0 , 0xff , 0x1f , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , // Char 114 r
0x0 , 0x7 , 0x7 , 0x0 , 0xc0 , 0x1f , 0xf , 0x0 , 0xc0 , 0x1d , 0x1e , 0x0 , 0xe0 , 0x38 , 0x1c , 0x0 , 0x60 , 0x38 , 0x18 , 0x0 , 0x60 , 0x30 , 0x18 , 0x0 , 0xe0 , 0x70 , 0x1c , 0x0 , 0xc0 , 0x71 , 0x1c , 0x0 , 0xc0 , 0xe3 , 0xf , 0x0 , 0x0 , 0xe3 , 0x7 , // Char 115 s
0x60 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xfe , 0xff , 0xf , 0x0 , 0xfe , 0xff , 0x1f , 0x0 , 0x60 , 0x0 , 0x1c , 0x0 , 0x60 , 0x0 , 0x18 , // Char 116 t
0xe0 , 0xff , 0x7 , 0x0 , 0xe0 , 0xff , 0xf , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xe0 , 0xff , 0x1f , // Char 117 u
0x20 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x60 , // Char 118 v
0x20 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x7f , 0x0 , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0xc0 , 0x7f , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0x80 , 0xff , 0x1 , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x1 , // Char 119 w
0x0 , 0x0 , 0x10 , 0x0 , 0x60 , 0x0 , 0x18 , 0x0 , 0xe0 , 0x1 , 0x1e , 0x0 , 0xe0 , 0x87 , 0xf , 0x0 , 0x80 , 0xef , 0x3 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0xc0 , 0xc7 , 0xf , 0x0 , 0xe0 , 0x1 , 0x1f , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0x20 , 0x0 , 0x10 , // Char 120 x
0x20 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x6 , 0xe0 , 0x1f , 0x0 , 0x6 , 0x0 , 0xff , 0x0 , 0x7 , 0x0 , 0xf8 , 0xc7 , 0x7 , 0x0 , 0x80 , 0xff , 0x1 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x60 , // Char 121 y
0x60 , 0x0 , 0x1c , 0x0 , 0x60 , 0x0 , 0x1f , 0x0 , 0x60 , 0x80 , 0x1f , 0x0 , 0x60 , 0xe0 , 0x1b , 0x0 , 0x60 , 0xf0 , 0x18 , 0x0 , 0x60 , 0x7c , 0x18 , 0x0 , 0x60 , 0x1e , 0x18 , 0x0 , 0xe0 , 0x7 , 0x18 , 0x0 , 0xe0 , 0x3 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x18 , // Char 122 z
0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xfe , 0xdf , 0xff , 0x1 , 0xff , 0x87 , 0xff , 0x7 , 0x3 , 0x0 , 0x0 , 0x6 , 0x3 , 0x0 , 0x0 , 0x6 , // Char 123 {
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , // Char 124 |
0x3 , 0x0 , 0x0 , 0x6 , 0x3 , 0x0 , 0x0 , 0x6 , 0xff , 0x7 , 0xff , 0x7 , 0xfe , 0xcf , 0xff , 0x3 , 0x0 , 0xfc , 0x0 , 0x0 , 0x0 , 0x30 , // Char 125 }
0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 126 ~
};
