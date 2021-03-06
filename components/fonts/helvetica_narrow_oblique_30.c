#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Helvetica_Narrow_Oblique_30[] PROGMEM = {
14 , // Width 
30 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 14, // Char 32   - Nodata
 0x0, 0x0, 0x15, 0x8, // Char 33 ! 
 0x0, 0x15, 0x19, 0x9, // Char 34 " 
 0x0, 0x2e, 0x32, 0xf, // Char 35 # 
 0x0, 0x60, 0x31, 0xf, // Char 36 $ 
 0x0, 0x91, 0x46, 0x14, // Char 37 % 
 0x0, 0xd7, 0x37, 0x10, // Char 38 & 
 0x1, 0xe, 0x9, 0x5, // Char 39 ' 
 0x1, 0x17, 0x1d, 0xa, // Char 40 ( 
 0x1, 0x34, 0x1e, 0xa, // Char 41 ) 
 0x1, 0x52, 0x1d, 0xa, // Char 42 * 
 0x1, 0x6f, 0x32, 0xf, // Char 43 + 
 0x1, 0xa1, 0xf, 0x6, // Char 44 , 
 0x1, 0xb0, 0x1a, 0x9, // Char 45 - 
 0x1, 0xca, 0xb, 0x5, // Char 46 . 
 0x1, 0xd5, 0x29, 0xd, // Char 47 / 
 0x1, 0xfe, 0x32, 0xf, // Char 48 0 
 0x2, 0x30, 0x19, 0x9, // Char 49 1 
 0x2, 0x49, 0x35, 0x10, // Char 50 2 
 0x2, 0x7e, 0x31, 0xf, // Char 51 3 
 0x2, 0xaf, 0x2e, 0xe, // Char 52 4 
 0x2, 0xdd, 0x31, 0xf, // Char 53 5 
 0x3, 0xe, 0x31, 0xf, // Char 54 6 
 0x3, 0x3f, 0x31, 0xf, // Char 55 7 
 0x3, 0x70, 0x31, 0xf, // Char 56 8 
 0x3, 0xa1, 0x32, 0xf, // Char 57 9 
 0x3, 0xd3, 0x11, 0x7, // Char 58 : 
 0x3, 0xe4, 0x15, 0x8, // Char 59 ; 
 0x3, 0xf9, 0x35, 0x10, // Char 60 < 
 0x4, 0x2e, 0x32, 0xf, // Char 61 = 
 0x4, 0x60, 0x36, 0x10, // Char 62 > 
 0x4, 0x96, 0x29, 0xd, // Char 63 ? 
 0x4, 0xbf, 0x4a, 0x15, // Char 64 @ 
 0x5, 0x9, 0x3b, 0x11, // Char 65 A 
 0x5, 0x44, 0x3a, 0x11, // Char 66 B 
 0x5, 0x7e, 0x3d, 0x12, // Char 67 C 
 0x5, 0xbb, 0x42, 0x13, // Char 68 D 
 0x5, 0xfd, 0x41, 0x13, // Char 69 E 
 0x6, 0x3e, 0x3d, 0x12, // Char 70 F 
 0x6, 0x7b, 0x41, 0x13, // Char 71 G 
 0x6, 0xbc, 0x45, 0x14, // Char 72 H 
 0x7, 0x1, 0x15, 0x8, // Char 73 I 
 0x7, 0x16, 0x31, 0xf, // Char 74 J 
 0x7, 0x47, 0x41, 0x13, // Char 75 K 
 0x7, 0x88, 0x2f, 0xe, // Char 76 L 
 0x7, 0xb7, 0x4d, 0x16, // Char 77 M 
 0x8, 0x4, 0x45, 0x14, // Char 78 N 
 0x8, 0x49, 0x42, 0x13, // Char 79 O 
 0x8, 0x8b, 0x3d, 0x12, // Char 80 P 
 0x8, 0xc8, 0x42, 0x13, // Char 81 Q 
 0x9, 0xa, 0x41, 0x13, // Char 82 R 
 0x9, 0x4b, 0x3d, 0x12, // Char 83 S 
 0x9, 0x88, 0x35, 0x10, // Char 84 T 
 0x9, 0xbd, 0x41, 0x13, // Char 85 U 
 0x9, 0xfe, 0x39, 0x11, // Char 86 V 
 0xa, 0x37, 0x55, 0x18, // Char 87 W 
 0xa, 0x8c, 0x45, 0x14, // Char 88 X 
 0xa, 0xd1, 0x3d, 0x12, // Char 89 Y 
 0xb, 0xe, 0x41, 0x13, // Char 90 Z 
 0xb, 0x4f, 0x21, 0xb, // Char 91 [ 
 0xb, 0x70, 0xf, 0x6, // Char 92 Backslash 
 0xb, 0x7f, 0x21, 0xb, // Char 93 ] 
 0xb, 0xa0, 0x2e, 0xe, // Char 94 ^ 
 0xb, 0xce, 0x37, 0x10, // Char 95 _ 
 0xc, 0x5, 0x9, 0x5, // Char 96 ` 
 0xc, 0xe, 0x32, 0xf, // Char 97 a 
 0xc, 0x40, 0x32, 0xf, // Char 98 b 
 0xc, 0x72, 0x2e, 0xe, // Char 99 c 
 0xc, 0xa0, 0x35, 0x10, // Char 100 d 
 0xc, 0xd5, 0x2e, 0xe, // Char 101 e 
 0xd, 0x3, 0x1d, 0xa, // Char 102 f 
 0xd, 0x20, 0x35, 0x10, // Char 103 g 
 0xd, 0x55, 0x2e, 0xe, // Char 104 h 
 0xd, 0x83, 0x15, 0x8, // Char 105 i 
 0xd, 0x98, 0x21, 0xb, // Char 106 j 
 0xd, 0xb9, 0x2d, 0xe, // Char 107 k 
 0xd, 0xe6, 0x15, 0x8, // Char 108 l 
 0xd, 0xfb, 0x4a, 0x15, // Char 109 m 
 0xe, 0x45, 0x2e, 0xe, // Char 110 n 
 0xe, 0x73, 0x2e, 0xe, // Char 111 o 
 0xe, 0xa1, 0x36, 0x10, // Char 112 p 
 0xe, 0xd7, 0x31, 0xf, // Char 113 q 
 0xf, 0x8, 0x21, 0xb, // Char 114 r 
 0xf, 0x29, 0x2a, 0xd, // Char 115 s 
 0xf, 0x53, 0x15, 0x8, // Char 116 t 
 0xf, 0x68, 0x31, 0xf, // Char 117 u 
 0xf, 0x99, 0x2d, 0xe, // Char 118 v 
 0xf, 0xc6, 0x41, 0x13, // Char 119 w 
 0x10, 0x7, 0x31, 0xf, // Char 120 x 
 0x10, 0x38, 0x39, 0x11, // Char 121 y 
 0x10, 0x71, 0x31, 0xf, // Char 122 z 
 0x10, 0xa2, 0x21, 0xb, // Char 123 { 
 0x10, 0xc3, 0x15, 0x8, // Char 124 | 
 0x10, 0xd8, 0x22, 0xb, // Char 125 } 
 0x10, 0xfa, 0x2a, 0xd, // Char 126 ~ 

// Data Table:
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0xff , 0x1c , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0x0 , 0x1f , // Char 33 !
0xe0 , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0x3 , // Char 34 "
0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x60 , 0x1e , 0x0 , 0x80 , 0xe1 , 0xf , 0x0 , 0x80 , 0xf9 , 0x1 , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0xf0 , 0x63 , 0x10 , 0x0 , 0xbe , 0x61 , 0x1f , 0x0 , 0x87 , 0xe1 , 0x7 , 0x0 , 0x80 , 0xfd , 0x0 , 0x0 , 0xc0 , 0x6f , 0x0 , 0x0 , 0xf8 , 0x61 , 0x0 , 0x0 , 0x9f , 0x21 , 0x0 , 0x0 , 0x82 , 0x1 , // Char 35 #
0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0xf0 , 0x3 , 0x1c , 0x0 , 0xfc , 0x7 , 0x38 , 0x0 , 0xe , 0x7 , 0xf8 , 0x1 , 0x6 , 0xcf , 0x3f , 0x0 , 0x3 , 0x7f , 0x38 , 0x0 , 0xff , 0xf , 0x18 , 0x0 , 0xf , 0x1c , 0x1c , 0x0 , 0x3 , 0xfc , 0xf , 0x0 , 0x7 , 0xf8 , 0x7 , 0x0 , 0x3e , 0xf0 , 0x1 , 0x0 , 0x3c , // Char 36 $
0xf8 , 0x3 , 0x0 , 0x0 , 0x3e , 0x7 , 0x0 , 0x0 , 0x6 , 0x6 , 0x18 , 0x0 , 0x3 , 0x6 , 0xc , 0x0 , 0x3 , 0x3 , 0x7 , 0x0 , 0xe7 , 0x83 , 0x1 , 0x0 , 0xfe , 0x60 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x80 , 0xc1 , 0xf , 0x0 , 0x60 , 0xf8 , 0x1f , 0x0 , 0x30 , 0x3c , 0x18 , 0x0 , 0xc , 0xc , 0x18 , 0x0 , 0x7 , 0x6 , 0x18 , 0x0 , 0x1 , 0x6 , 0xe , 0x0 , 0x0 , 0xfc , 0x7 , 0x0 , 0x0 , 0xf8 , // Char 37 %
0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0x38 , 0x1e , 0x0 , 0x0 , 0x1c , 0x1c , 0x0 , 0xf8 , 0xc , 0x18 , 0x0 , 0xfc , 0x7 , 0x18 , 0x0 , 0xce , 0xf , 0x1c , 0x0 , 0x7 , 0x3f , 0xc , 0x0 , 0x83 , 0xff , 0x6 , 0x0 , 0xc7 , 0xf1 , 0x7 , 0x0 , 0xff , 0xc0 , 0xf , 0x0 , 0x3e , 0xf0 , 0x1f , 0x0 , 0x0 , 0x78 , 0x1c , 0x0 , 0x0 , 0x8 , 0x10 , // Char 38 &
0xf0 , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0x7 , // Char 39 '
0x0 , 0xf0 , 0x7f , 0x0 , 0x0 , 0xff , 0xff , 0x3 , 0xc0 , 0x1f , 0x80 , 0x7 , 0xf0 , 0x1 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 40 (
0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0xf , 0xc0 , 0xf , 0x0 , 0xfe , 0xff , 0x3 , 0x0 , 0xf0 , 0x7f , // Char 41 )
0x8 , 0x0 , 0x0 , 0x0 , 0xcc , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xd8 , 0x0 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x0 , 0x8 , // Char 42 *
0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x10 , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x40 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , // Char 43 +
0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x9c , 0x1 , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0x0 , 0x3c , // Char 44 ,
0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x18 , // Char 45 -
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , // Char 46 .
0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 47 /
0x0 , 0xf0 , 0x1 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xf8 , 0x1 , 0x1c , 0x0 , 0x3c , 0x0 , 0x18 , 0x0 , 0xe , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x3 , 0x0 , 0xf , 0x0 , 0x7 , 0xc0 , 0x7 , 0x0 , 0x1f , 0xfe , 0x1 , 0x0 , 0xfe , 0x7f , 0x0 , 0x0 , 0xf8 , 0x7 , // Char 48 0
0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x80 , 0x1f , 0x0 , 0x38 , 0xfe , 0x1f , 0x0 , 0xfc , 0xff , 0x1 , 0x0 , 0xfe , 0xf , 0x0 , 0x0 , 0x3f , // Char 49 1
0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0xf0 , 0xc0 , 0x1d , 0x0 , 0x7c , 0xe0 , 0x1c , 0x0 , 0x1e , 0x70 , 0x1c , 0x0 , 0x6 , 0x30 , 0x1c , 0x0 , 0x7 , 0x38 , 0x1c , 0x0 , 0x3 , 0x1c , 0x1c , 0x0 , 0x3 , 0xc , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x8f , 0x7 , 0x18 , 0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0xfc , // Char 50 2
0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x70 , 0x0 , 0x1c , 0x0 , 0x7c , 0x0 , 0x18 , 0x0 , 0x1e , 0x0 , 0x38 , 0x0 , 0x6 , 0x6 , 0x18 , 0x0 , 0x7 , 0x6 , 0x18 , 0x0 , 0x3 , 0x6 , 0x1c , 0x0 , 0x3 , 0xe , 0xe , 0x0 , 0x7 , 0x9f , 0xf , 0x0 , 0xcf , 0xfd , 0x3 , 0x0 , 0xfe , 0xf9 , 0x0 , 0x0 , 0x7c , // Char 51 3
0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0xdc , 0x0 , 0x0 , 0x0 , 0xce , 0x0 , 0x0 , 0x80 , 0xc3 , 0x0 , 0x0 , 0xc0 , 0xc1 , 0x0 , 0x0 , 0xe0 , 0xc0 , 0x18 , 0x0 , 0x38 , 0xe0 , 0x1f , 0x0 , 0x9c , 0xff , 0xf , 0x0 , 0xfe , 0xff , 0x0 , 0x0 , 0xff , 0xc1 , 0x0 , 0x0 , 0x7 , 0xc0 , // Char 52 4
0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xc , 0x1f , 0x0 , 0x80 , 0xf , 0x1c , 0x0 , 0xf8 , 0x7 , 0x18 , 0x0 , 0x3e , 0x7 , 0x38 , 0x0 , 0x7 , 0x3 , 0x18 , 0x0 , 0x7 , 0x3 , 0x18 , 0x0 , 0x7 , 0x3 , 0x1c , 0x0 , 0x7 , 0x7 , 0xe , 0x0 , 0x7 , 0xff , 0x7 , 0x0 , 0x7 , 0xfe , 0x3 , 0x0 , 0x7 , 0xfc , 0x0 , 0x0 , 0x7 , // Char 53 5
0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xff , 0xf , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xf8 , 0xf , 0x1c , 0x0 , 0x3c , 0x6 , 0x18 , 0x0 , 0xe , 0x3 , 0x18 , 0x0 , 0x6 , 0x3 , 0x18 , 0x0 , 0x7 , 0x3 , 0x1c , 0x0 , 0x3 , 0x7 , 0xe , 0x0 , 0x7 , 0xcf , 0x7 , 0x0 , 0xf , 0xfe , 0x3 , 0x0 , 0x3e , 0xfc , 0x0 , 0x0 , 0x3c , // Char 54 6
0x0 , 0x0 , 0x10 , 0x0 , 0x6 , 0x0 , 0x1c , 0x0 , 0x7 , 0x80 , 0x1f , 0x0 , 0x7 , 0xe0 , 0x7 , 0x0 , 0x7 , 0xf0 , 0x1 , 0x0 , 0x7 , 0x3c , 0x0 , 0x0 , 0x7 , 0xf , 0x0 , 0x0 , 0x87 , 0x3 , 0x0 , 0x0 , 0xc7 , 0x1 , 0x0 , 0x0 , 0x77 , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xf , // Char 55 7
0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0xf0 , 0x79 , 0x1e , 0x0 , 0xf8 , 0x1f , 0x18 , 0x0 , 0xbe , 0xf , 0x18 , 0x0 , 0x6 , 0x7 , 0x18 , 0x0 , 0x7 , 0x6 , 0x18 , 0x0 , 0x3 , 0x6 , 0x1c , 0x0 , 0x3 , 0xf , 0xe , 0x0 , 0x87 , 0xff , 0xf , 0x0 , 0xef , 0xfd , 0x3 , 0x0 , 0xfe , 0xf8 , 0x0 , 0x0 , 0x7c , // Char 56 8
0x0 , 0x0 , 0x7 , 0x0 , 0x80 , 0x7 , 0x1f , 0x0 , 0xf0 , 0x1f , 0x1c , 0x0 , 0xfc , 0x1f , 0x18 , 0x0 , 0x1e , 0x38 , 0x18 , 0x0 , 0xe , 0x38 , 0x18 , 0x0 , 0x7 , 0x30 , 0x18 , 0x0 , 0x7 , 0x38 , 0xc , 0x0 , 0x7 , 0x18 , 0x7 , 0x0 , 0x7 , 0xfc , 0x3 , 0x0 , 0xde , 0xff , 0x1 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3 , // Char 57 9
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x80 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , // Char 58 :
0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x98 , 0x1 , 0x0 , 0x0 , 0xfc , 0x0 , 0x80 , 0x0 , 0x3c , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , // Char 59 ;
0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xd8 , 0x0 , 0x0 , 0x0 , 0xd8 , 0x1 , 0x0 , 0x0 , 0x8c , 0x3 , 0x0 , 0x0 , 0x8c , 0x3 , 0x0 , 0x0 , 0x6 , 0x7 , 0x0 , 0x0 , 0x6 , 0x7 , 0x0 , 0x0 , 0x3 , 0xe , 0x0 , 0x0 , 0x3 , 0xc , 0x0 , 0x80 , 0x3 , 0x4 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , // Char 60 <
0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0xc , // Char 61 =
0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x0 , 0xc , 0x0 , 0x80 , 0x1 , 0xe , 0x0 , 0x80 , 0x1 , 0x6 , 0x0 , 0x80 , 0x3 , 0x7 , 0x0 , 0x0 , 0x3 , 0x3 , 0x0 , 0x0 , 0x7 , 0x3 , 0x0 , 0x0 , 0x8e , 0x1 , 0x0 , 0x0 , 0x8e , 0x1 , 0x0 , 0x0 , 0xdc , 0x0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x30 , // Char 62 >
0x60 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x10 , 0x0 , 0x3c , 0x0 , 0x1c , 0x0 , 0xe , 0xf0 , 0x1c , 0x0 , 0x7 , 0xf8 , 0x0 , 0x0 , 0x3 , 0x1c , 0x0 , 0x0 , 0x3 , 0xe , 0x0 , 0x0 , 0x7 , 0x7 , 0x0 , 0x0 , 0xef , 0x3 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x0 , 0x7c , // Char 63 ?
0x0 , 0x7c , 0x0 , 0x0 , 0x80 , 0xff , 0x3 , 0x0 , 0xc0 , 0x83 , 0x7 , 0x0 , 0x70 , 0x0 , 0xe , 0x0 , 0x38 , 0xfc , 0x1c , 0x0 , 0x1c , 0xff , 0x19 , 0x0 , 0xcc , 0x83 , 0x19 , 0x0 , 0xe6 , 0x80 , 0x31 , 0x0 , 0x66 , 0x80 , 0x10 , 0x0 , 0x33 , 0x40 , 0x18 , 0x0 , 0x33 , 0xe0 , 0x19 , 0x0 , 0x73 , 0xf8 , 0x19 , 0x0 , 0xf3 , 0x9f , 0xd , 0x0 , 0xe3 , 0x83 , 0x4 , 0x0 , 0xf7 , 0xc0 , 0x6 , 0x0 , 0x1e , 0x70 , 0x3 , 0x0 , 0x1c , 0x1c , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0xe0 , 0x1 , // Char 64 @
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0xc0 , 0x77 , 0x0 , 0x0 , 0xf0 , 0x71 , 0x0 , 0x0 , 0x7c , 0x70 , 0x0 , 0x0 , 0x1f , 0x70 , 0x0 , 0x0 , 0xf , 0x70 , 0x0 , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , // Char 65 A
0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0xff , 0x3f , 0x1c , 0x0 , 0xff , 0x7 , 0x1c , 0x0 , 0x7 , 0x6 , 0x1c , 0x0 , 0x7 , 0x6 , 0x1c , 0x0 , 0x7 , 0x6 , 0x1c , 0x0 , 0x7 , 0x6 , 0x1c , 0x0 , 0x7 , 0x7 , 0x1c , 0x0 , 0x7 , 0x7 , 0xe , 0x0 , 0x7 , 0xf , 0xf , 0x0 , 0x87 , 0xff , 0x7 , 0x0 , 0xff , 0xfd , 0x3 , 0x0 , 0x7e , 0x70 , // Char 66 B
0x0 , 0xff , 0x3 , 0x0 , 0xc0 , 0xff , 0xf , 0x0 , 0xf0 , 0x7 , 0x1f , 0x0 , 0x78 , 0x0 , 0x1c , 0x0 , 0x3c , 0x0 , 0x1c , 0x0 , 0xe , 0x0 , 0x38 , 0x0 , 0xe , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0xe , 0x0 , 0x7 , 0x0 , 0x7 , 0x0 , 0xf , 0xc0 , 0x3 , 0x0 , 0x1e , 0xe0 , 0x1 , 0x0 , 0x7c , 0x60 , 0x0 , 0x0 , 0x78 , // Char 67 C
0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0x80 , 0xff , 0x1f , 0x0 , 0xfe , 0x7f , 0x1c , 0x0 , 0xff , 0x1 , 0x1c , 0x0 , 0xf , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0xe , 0x0 , 0x7 , 0x0 , 0xf , 0x0 , 0x7 , 0x80 , 0x7 , 0x0 , 0xe , 0xf0 , 0x3 , 0x0 , 0xfe , 0xff , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xe0 , 0x3 , // Char 68 D
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x80 , 0xff , 0x1f , 0x0 , 0xfc , 0xff , 0x1c , 0x0 , 0xff , 0xf , 0x1c , 0x0 , 0x1f , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0x8 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x3 , // Char 69 E
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x80 , 0xff , 0x1f , 0x0 , 0xfc , 0xff , 0x0 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0x1f , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x3 , // Char 70 F
0x0 , 0xfe , 0x3 , 0x0 , 0xc0 , 0xff , 0x7 , 0x0 , 0xe0 , 0x87 , 0xf , 0x0 , 0xf8 , 0x0 , 0x1c , 0x0 , 0x3c , 0x0 , 0x1c , 0x0 , 0x1c , 0x0 , 0x18 , 0x0 , 0xe , 0x0 , 0x38 , 0x0 , 0x6 , 0x0 , 0x18 , 0x0 , 0x7 , 0xc , 0x18 , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0xe , 0xc , 0x0 , 0x7 , 0xe , 0x6 , 0x0 , 0x7 , 0x8e , 0x7 , 0x0 , 0xe , 0xfe , 0x1f , 0x0 , 0x3e , 0xfe , 0xf , 0x0 , 0x7c , 0x3e , 0x0 , 0x0 , 0x20 , // Char 71 G
0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0xc0 , 0xff , 0xf , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0x7 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x87 , 0x1f , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0xf0 , 0xff , 0x3 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0x1 , // Char 72 H
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0xf8 , 0xff , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0x1f , // Char 73 I
0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x80 , 0xff , 0x3 , 0x0 , 0xfc , 0xff , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0x0 , 0x1f , // Char 74 J
0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0xc0 , 0xff , 0xf , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0xe0 , 0xfc , 0x1 , 0x0 , 0x70 , 0xf0 , 0x7 , 0x0 , 0x38 , 0xc0 , 0x1f , 0x0 , 0x1c , 0x0 , 0x1e , 0x0 , 0xe , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 75 K
0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0xff , 0x3f , 0x1c , 0x0 , 0xff , 0x1 , 0x1c , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x8 , // Char 76 L
0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0xc0 , 0xff , 0x7 , 0x0 , 0xff , 0x1f , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0xff , 0xff , 0x0 , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xe0 , 0x3 , 0x10 , 0x0 , 0xf8 , 0x80 , 0x1f , 0x0 , 0x3e , 0xfe , 0x1f , 0x0 , 0xff , 0xff , 0x1 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0x3f , // Char 77 M
0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0xc0 , 0xff , 0x7 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0xe0 , 0xff , 0x3 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0x1 , // Char 78 N
0x0 , 0xff , 0x3 , 0x0 , 0xc0 , 0xff , 0xf , 0x0 , 0xf0 , 0x3 , 0xf , 0x0 , 0x78 , 0x0 , 0x1e , 0x0 , 0x3c , 0x0 , 0x1c , 0x0 , 0x1e , 0x0 , 0x18 , 0x0 , 0xe , 0x0 , 0x38 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0x1c , 0x0 , 0x7 , 0x0 , 0xe , 0x0 , 0x7 , 0x0 , 0x7 , 0x0 , 0xe , 0xc0 , 0x3 , 0x0 , 0x3e , 0xf8 , 0x1 , 0x0 , 0xfc , 0x7f , 0x0 , 0x0 , 0xf0 , 0x1f , // Char 79 O
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x80 , 0xff , 0x1f , 0x0 , 0xfc , 0xff , 0x0 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0xf , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0x7 , 0x0 , 0x0 , 0xef , 0x7 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x0 , 0xfc , // Char 80 P
0x0 , 0xff , 0x3 , 0x0 , 0xc0 , 0xff , 0xf , 0x0 , 0xf0 , 0x3 , 0xf , 0x0 , 0x78 , 0x0 , 0x1e , 0x0 , 0x3c , 0x0 , 0x1c , 0x0 , 0x1e , 0x0 , 0x18 , 0x0 , 0xe , 0x0 , 0x38 , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x7 , 0x0 , 0x19 , 0x0 , 0x7 , 0x80 , 0x1f , 0x0 , 0x7 , 0x0 , 0xf , 0x0 , 0x7 , 0x0 , 0xe , 0x0 , 0x7 , 0x0 , 0x1f , 0x0 , 0xe , 0xc0 , 0x3b , 0x0 , 0x3e , 0xf8 , 0x31 , 0x0 , 0xfc , 0x7f , 0x0 , 0x0 , 0xf0 , 0x1f , // Char 81 Q
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0xfc , 0xff , 0x0 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0x1f , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xe , 0x0 , 0x0 , 0x7 , 0xbe , 0x1f , 0x0 , 0x7 , 0xff , 0x1f , 0x0 , 0xff , 0xfb , 0x13 , 0x0 , 0xfe , 0x1 , 0x0 , 0x0 , 0x7c , // Char 82 R
0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xc0 , 0xf , 0x0 , 0x80 , 0x80 , 0x1f , 0x0 , 0xf0 , 0x3 , 0x1c , 0x0 , 0xfc , 0x7 , 0x18 , 0x0 , 0x1e , 0x7 , 0x18 , 0x0 , 0x6 , 0x6 , 0x38 , 0x0 , 0x7 , 0xe , 0x18 , 0x0 , 0x7 , 0xe , 0x18 , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x7 , 0x1c , 0x1c , 0x0 , 0x7 , 0x1c , 0xe , 0x0 , 0xf , 0xfc , 0x7 , 0x0 , 0x7e , 0xf8 , 0x3 , 0x0 , 0x7c , 0x0 , 0x0 , 0x0 , 0x20 , // Char 83 S
0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x10 , 0x0 , 0x7 , 0xc0 , 0x1f , 0x0 , 0x7 , 0xfe , 0x1f , 0x0 , 0xff , 0xff , 0x1 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , // Char 84 T
0x0 , 0xf0 , 0x3 , 0x0 , 0xc0 , 0xff , 0xf , 0x0 , 0xfe , 0xff , 0x1f , 0x0 , 0xff , 0x1 , 0x1c , 0x0 , 0x7 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xfe , 0x3 , 0x0 , 0xf0 , 0xff , 0x0 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x1 , // Char 85 U
0x3 , 0x0 , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0x0 , 0xff , 0xff , 0x3 , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x7 , // Char 86 V
0xff , 0x3 , 0x0 , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xff , 0xff , 0x7 , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x7 , // Char 87 W
0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x3 , 0xc0 , 0x3 , 0x0 , 0x1f , 0xe0 , 0x1 , 0x0 , 0x7f , 0x70 , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0x80 , 0xff , 0x1 , 0x0 , 0xe0 , 0xf1 , 0xf , 0x0 , 0xf0 , 0x80 , 0x1f , 0x0 , 0x78 , 0x0 , 0x1e , 0x0 , 0x1e , 0x0 , 0x10 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 88 X
0x1 , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0xfc , 0x3 , 0x1c , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 89 Y
0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x7 , 0xe0 , 0x1d , 0x0 , 0x7 , 0xf0 , 0x1c , 0x0 , 0x7 , 0x38 , 0x1c , 0x0 , 0x7 , 0x1c , 0x1c , 0x0 , 0x7 , 0xe , 0x1c , 0x0 , 0x87 , 0x7 , 0x1c , 0x0 , 0xc7 , 0x3 , 0x1c , 0x0 , 0xe7 , 0x1 , 0x1c , 0x0 , 0x77 , 0x0 , 0x1c , 0x0 , 0x3f , 0x0 , 0x1c , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x7 , // Char 90 Z
0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0xfc , 0x1f , 0x6 , 0xf0 , 0xff , 0x0 , 0x6 , 0xff , 0x3 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , // Char 91 [
0x1 , 0x0 , 0x0 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0xf8 , 0xff , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , // Char 92 Backslash
0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x3 , 0xc0 , 0xff , 0x3 , 0x3 , 0xfe , 0xf , 0x0 , 0xfb , 0x7f , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x0 , 0x7 , // Char 93 ]
0x0 , 0x10 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1c , // Char 94 ^
0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , // Char 95 _
0x1 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x6 , // Char 96 `
0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x80 , 0x63 , 0x1c , 0x0 , 0xc0 , 0x33 , 0x18 , 0x0 , 0xc0 , 0x30 , 0x18 , 0x0 , 0x60 , 0x30 , 0xc , 0x0 , 0x60 , 0x30 , 0xc , 0x0 , 0x60 , 0x18 , 0x6 , 0x0 , 0xe0 , 0xd8 , 0x1f , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xc0 , 0xff , 0x18 , 0x0 , 0x80 , 0x3 , // Char 97 a
0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0xf0 , 0xff , 0xf , 0x0 , 0xff , 0x7 , 0x1c , 0x0 , 0x9f , 0x1 , 0x1c , 0x0 , 0xc0 , 0x0 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0x60 , 0x0 , 0xc , 0x0 , 0xe0 , 0x0 , 0xe , 0x0 , 0xe0 , 0xc0 , 0x7 , 0x0 , 0xc0 , 0xff , 0x1 , 0x0 , 0x80 , 0x7f , // Char 98 b
0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x0 , 0x1f , 0x1e , 0x0 , 0x80 , 0x3 , 0x1c , 0x0 , 0xc0 , 0x1 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x18 , 0x0 , 0x60 , 0x0 , 0x1c , 0x0 , 0x60 , 0x0 , 0xe , 0x0 , 0xe0 , 0x80 , 0x7 , 0x0 , 0xe0 , 0x83 , 0x3 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x3 , // Char 99 c
0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x80 , 0x3f , 0x1f , 0x0 , 0xc0 , 0x3 , 0x1c , 0x0 , 0xc0 , 0x0 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0x60 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0xe , 0x0 , 0xe0 , 0x0 , 0x1f , 0x0 , 0xc0 , 0xfb , 0x1f , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x0 , 0x7 , // Char 100 d
0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x0 , 0x3f , 0xe , 0x0 , 0x80 , 0x33 , 0x1c , 0x0 , 0xc0 , 0x31 , 0x18 , 0x0 , 0xe0 , 0x30 , 0x18 , 0x0 , 0xe0 , 0x30 , 0x1c , 0x0 , 0x60 , 0x30 , 0xc , 0x0 , 0xe0 , 0x30 , 0xe , 0x0 , 0xe0 , 0x31 , 0x7 , 0x0 , 0xc0 , 0x3f , 0x3 , 0x0 , 0x80 , 0x3f , // Char 101 e
0x0 , 0x0 , 0x18 , 0x0 , 0x60 , 0xe0 , 0x1f , 0x0 , 0xe0 , 0xff , 0xf , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x0 , 0x67 , 0x0 , 0x0 , 0x0 , 0x67 , 0x0 , 0x0 , 0x0 , 0x3 , // Char 102 f
0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0xf0 , 0xc3 , 0x3 , 0x0 , 0xfe , 0xf , 0x7 , 0x0 , 0x7f , 0x1f , 0x6 , 0xc0 , 0x3 , 0x1c , 0x6 , 0xc0 , 0x1 , 0x18 , 0x6 , 0xe0 , 0x0 , 0x18 , 0x7 , 0x60 , 0x0 , 0x1c , 0x3 , 0x60 , 0x0 , 0xce , 0x3 , 0xe0 , 0x0 , 0xff , 0x1 , 0xc0 , 0xf1 , 0x7f , 0x0 , 0x80 , 0xff , 0x7 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0xe0 , // Char 103 g
0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0xf0 , 0xff , 0x1 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0xbf , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x1e , 0x0 , 0xe0 , 0xf0 , 0x1f , 0x0 , 0xc0 , 0xff , 0x7 , 0x0 , 0x80 , 0x1f , // Char 104 h
0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0xe0 , 0xff , 0x1 , 0x0 , 0xe7 , 0x7 , 0x0 , 0x0 , 0x27 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 105 i
0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0xfc , 0x7f , 0x0 , 0xe0 , 0xff , 0x1 , 0x0 , 0xe7 , 0x7 , 0x0 , 0x0 , 0x27 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 106 j
0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0xe0 , 0xff , 0x1 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0x3f , 0x18 , 0x0 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0x80 , 0xe3 , 0x1f , 0x0 , 0xc0 , 0x1 , 0x1f , 0x0 , 0xe0 , 0x0 , 0x18 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 107 k
0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0xe0 , 0xff , 0x1 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x1 , // Char 108 l
0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0xe0 , 0xff , 0x1 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x18 , 0x0 , 0xe0 , 0xe0 , 0x1f , 0x0 , 0xe0 , 0xff , 0xf , 0x0 , 0xc0 , 0x7f , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x1e , 0x0 , 0xe0 , 0xf9 , 0x1f , 0x0 , 0xc0 , 0xff , 0x3 , 0x0 , 0x80 , 0xf , // Char 109 m
0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0xe0 , 0xff , 0x1 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0xe0 , 0xf1 , 0x1f , 0x0 , 0xc0 , 0xff , 0x7 , 0x0 , 0x80 , 0x1f , // Char 110 n
0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x0 , 0x3f , 0xf , 0x0 , 0x80 , 0x3 , 0x1c , 0x0 , 0xc0 , 0x1 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x18 , 0x0 , 0x60 , 0x0 , 0x1c , 0x0 , 0x60 , 0x0 , 0xc , 0x0 , 0xe0 , 0x0 , 0xe , 0x0 , 0xe0 , 0xc1 , 0x7 , 0x0 , 0xc0 , 0xff , 0x1 , 0x0 , 0x80 , 0x7f , // Char 111 o
0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0xc0 , 0xff , 0x7 , 0x0 , 0xff , 0x1f , 0x0 , 0xe0 , 0xff , 0xf , 0x0 , 0xe0 , 0x7 , 0x1c , 0x0 , 0x80 , 0x1 , 0x1c , 0x0 , 0xc0 , 0x0 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x1c , 0x0 , 0x60 , 0x0 , 0xc , 0x0 , 0xe0 , 0x0 , 0xe , 0x0 , 0xe0 , 0xc0 , 0x7 , 0x0 , 0xc0 , 0xff , 0x1 , 0x0 , 0x80 , 0x7f , // Char 112 p
0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x80 , 0x3f , 0x1f , 0x0 , 0xc0 , 0x3 , 0x1c , 0x0 , 0xc0 , 0x0 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x18 , 0x0 , 0x60 , 0x0 , 0x1c , 0x0 , 0xe0 , 0x0 , 0x8e , 0x7 , 0xe0 , 0x0 , 0xff , 0x7 , 0xc0 , 0xfb , 0xff , 0x1 , 0x80 , 0xff , 0x7 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0x60 , // Char 113 q
0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0xe0 , 0xff , 0x7 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xa0 , 0x3 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , // Char 114 r
0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xe , 0xf , 0x0 , 0x80 , 0x1f , 0x1c , 0x0 , 0xc0 , 0x3d , 0x18 , 0x0 , 0xc0 , 0x38 , 0x18 , 0x0 , 0x60 , 0x38 , 0x18 , 0x0 , 0x60 , 0x70 , 0x1c , 0x0 , 0x60 , 0x70 , 0xe , 0x0 , 0xe0 , 0xf0 , 0x7 , 0x0 , 0xc0 , 0xe3 , 0x3 , 0x0 , 0x80 , 0x3 , // Char 115 s
0x60 , 0xf0 , 0x1f , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xfe , 0x3f , 0x18 , 0x0 , 0xfe , 0x0 , 0x8 , 0x0 , 0x66 , 0x0 , 0x0 , 0x0 , 0x60 , // Char 116 t
0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xe0 , 0x7 , 0x1c , 0x0 , 0x20 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0xe0 , 0xff , 0x7 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0x60 , // Char 117 u
0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0xff , 0x3 , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 118 v
0xe0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x60 , // Char 119 w
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x20 , 0x0 , 0xf , 0x0 , 0xe0 , 0x80 , 0x7 , 0x0 , 0xe0 , 0xc7 , 0x1 , 0x0 , 0xc0 , 0xff , 0x0 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x0 , 0xfc , 0x7 , 0x0 , 0x0 , 0xcf , 0x1f , 0x0 , 0x80 , 0x7 , 0x1e , 0x0 , 0xc0 , 0x1 , 0x18 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , // Char 120 x
0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x7 , 0xe0 , 0x3 , 0x0 , 0x7 , 0xe0 , 0xff , 0xc3 , 0x3 , 0xe0 , 0xff , 0xff , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 121 y
0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x60 , 0x80 , 0x1f , 0x0 , 0x60 , 0xc0 , 0x19 , 0x0 , 0x60 , 0xf0 , 0x18 , 0x0 , 0x60 , 0x78 , 0x18 , 0x0 , 0x60 , 0x1c , 0x18 , 0x0 , 0x60 , 0xe , 0x18 , 0x0 , 0xe0 , 0x7 , 0x18 , 0x0 , 0xe0 , 0x3 , 0x18 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x60 , // Char 122 z
0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0xf0 , 0xfc , 0x7 , 0x0 , 0xf8 , 0xff , 0x7 , 0x80 , 0xf , 0x3 , 0x6 , 0xfc , 0x7 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , // Char 123 {
0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0x3 , // Char 124 |
0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0xff , 0x1 , 0x3 , 0xcf , 0xf , 0x0 , 0xff , 0xff , 0x0 , 0x0 , 0xff , 0x79 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 125 }
0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 126 ~
};
