#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Helvetica_Narrow_Bold_30[] PROGMEM = {
13 , // Width 
30 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 13, // Char 32   - Nodata
 0x0, 0x0, 0xf, 0x6, // Char 33 ! 
 0x0, 0xf, 0x19, 0x9, // Char 34 " 
 0x0, 0x28, 0x2e, 0xe, // Char 35 # 
 0x0, 0x56, 0x2f, 0xe, // Char 36 $ 
 0x0, 0x85, 0x4f, 0x16, // Char 37 % 
 0x0, 0xd4, 0x3f, 0x12, // Char 38 & 
 0x1, 0x13, 0x5, 0x4, // Char 39 ' 
 0x1, 0x18, 0x1c, 0x9, // Char 40 ( 
 0x1, 0x34, 0x17, 0x8, // Char 41 ) 
 0x1, 0x4b, 0x1d, 0xa, // Char 42 * 
 0x1, 0x68, 0x2e, 0xe, // Char 43 + 
 0x1, 0x96, 0xc, 0x5, // Char 44 , 
 0x1, 0xa2, 0x1a, 0x9, // Char 45 - 
 0x1, 0xbc, 0xb, 0x5, // Char 46 . 
 0x1, 0xc7, 0x1d, 0xa, // Char 47 / 
 0x1, 0xe4, 0x2e, 0xe, // Char 48 0 
 0x2, 0x12, 0x1b, 0x9, // Char 49 1 
 0x2, 0x2d, 0x2f, 0xe, // Char 50 2 
 0x2, 0x5c, 0x2f, 0xe, // Char 51 3 
 0x2, 0x8b, 0x2f, 0xe, // Char 52 4 
 0x2, 0xba, 0x2e, 0xe, // Char 53 5 
 0x2, 0xe8, 0x2f, 0xe, // Char 54 6 
 0x3, 0x17, 0x2d, 0xe, // Char 55 7 
 0x3, 0x44, 0x2f, 0xe, // Char 56 8 
 0x3, 0x73, 0x2e, 0xe, // Char 57 9 
 0x3, 0xa1, 0xf, 0x6, // Char 58 : 
 0x3, 0xb0, 0xf, 0x6, // Char 59 ; 
 0x3, 0xbf, 0x2f, 0xe, // Char 60 < 
 0x3, 0xee, 0x2f, 0xe, // Char 61 = 
 0x4, 0x1d, 0x2e, 0xe, // Char 62 > 
 0x4, 0x4b, 0x2d, 0xe, // Char 63 ? 
 0x4, 0x78, 0x46, 0x14, // Char 64 @ 
 0x4, 0xbe, 0x3f, 0x12, // Char 65 A 
 0x4, 0xfd, 0x37, 0x10, // Char 66 B 
 0x5, 0x34, 0x3e, 0x12, // Char 67 C 
 0x5, 0x72, 0x3a, 0x11, // Char 68 D 
 0x5, 0xac, 0x33, 0xf, // Char 69 E 
 0x5, 0xdf, 0x2d, 0xe, // Char 70 F 
 0x6, 0xc, 0x43, 0x13, // Char 71 G 
 0x6, 0x4f, 0x37, 0x10, // Char 72 H 
 0x6, 0x86, 0xb, 0x5, // Char 73 I 
 0x6, 0x91, 0x2b, 0xd, // Char 74 J 
 0x6, 0xbc, 0x3f, 0x12, // Char 75 K 
 0x6, 0xfb, 0x2f, 0xe, // Char 76 L 
 0x7, 0x2a, 0x43, 0x13, // Char 77 M 
 0x7, 0x6d, 0x37, 0x10, // Char 78 N 
 0x7, 0xa4, 0x42, 0x13, // Char 79 O 
 0x7, 0xe6, 0x32, 0xf, // Char 80 P 
 0x8, 0x18, 0x43, 0x13, // Char 81 Q 
 0x8, 0x5b, 0x3b, 0x11, // Char 82 R 
 0x8, 0x96, 0x37, 0x10, // Char 83 S 
 0x8, 0xcd, 0x39, 0x11, // Char 84 T 
 0x9, 0x6, 0x37, 0x10, // Char 85 U 
 0x9, 0x3d, 0x39, 0x11, // Char 86 V 
 0x9, 0x76, 0x59, 0x19, // Char 87 W 
 0x9, 0xcf, 0x3b, 0x11, // Char 88 X 
 0xa, 0xa, 0x39, 0x11, // Char 89 Y 
 0xa, 0x43, 0x33, 0xf, // Char 90 Z 
 0xa, 0x76, 0x18, 0x8, // Char 91 [ 
 0xa, 0x8e, 0x23, 0xb, // Char 92 Backslash 
 0xa, 0xb1, 0x18, 0x8, // Char 93 ] 
 0xa, 0xc9, 0x2a, 0xd, // Char 94 ^ 
 0xa, 0xf3, 0x38, 0x10, // Char 95 _ 
 0xb, 0x2b, 0xd, 0x6, // Char 96 ` 
 0xb, 0x38, 0x2f, 0xe, // Char 97 a 
 0xb, 0x67, 0x33, 0xf, // Char 98 b 
 0xb, 0x9a, 0x2f, 0xe, // Char 99 c 
 0xb, 0xc9, 0x33, 0xf, // Char 100 d 
 0xb, 0xfc, 0x2f, 0xe, // Char 101 e 
 0xc, 0x2b, 0x1d, 0xa, // Char 102 f 
 0xc, 0x48, 0x33, 0xf, // Char 103 g 
 0xc, 0x7b, 0x2b, 0xd, // Char 104 h 
 0xc, 0xa6, 0xb, 0x5, // Char 105 i 
 0xc, 0xb1, 0x14, 0x7, // Char 106 j 
 0xc, 0xc5, 0x2f, 0xe, // Char 107 k 
 0xc, 0xf4, 0xb, 0x5, // Char 108 l 
 0xc, 0xff, 0x47, 0x14, // Char 109 m 
 0xd, 0x46, 0x2b, 0xd, // Char 110 n 
 0xd, 0x71, 0x33, 0xf, // Char 111 o 
 0xd, 0xa4, 0x2f, 0xe, // Char 112 p 
 0xd, 0xd3, 0x34, 0xf, // Char 113 q 
 0xe, 0x7, 0x1a, 0x9, // Char 114 r 
 0xe, 0x21, 0x2f, 0xe, // Char 115 s 
 0xe, 0x50, 0x1f, 0xa, // Char 116 t 
 0xe, 0x6f, 0x2b, 0xd, // Char 117 u 
 0xe, 0x9a, 0x31, 0xf, // Char 118 v 
 0xe, 0xcb, 0x49, 0x15, // Char 119 w 
 0xf, 0x14, 0x2f, 0xe, // Char 120 x 
 0xf, 0x43, 0x31, 0xf, // Char 121 y 
 0xf, 0x74, 0x2f, 0xe, // Char 122 z 
 0xf, 0xa3, 0x20, 0xa, // Char 123 { 
 0xf, 0xc3, 0xb, 0x5, // Char 124 | 
 0xf, 0xce, 0x1a, 0x9, // Char 125 } 
 0xf, 0xe8, 0x2a, 0xd, // Char 126 ~ 

// Data Table:
0xff , 0x1 , 0x3c , 0x0 , 0xff , 0xff , 0x3c , 0x0 , 0xff , 0xff , 0x3c , 0x0 , 0xff , 0x7 , 0x3c , // Char 33 !
0xff , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xff , // Char 34 "
0xc0 , 0xe1 , 0x0 , 0x0 , 0xc0 , 0xe1 , 0x3c , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0xfe , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x0 , 0x0 , 0xce , 0xe1 , 0x0 , 0x0 , 0xc0 , 0xe1 , 0x3f , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0xfe , 0xff , 0x7 , 0x0 , 0xff , 0xe3 , 0x0 , 0x0 , 0xc0 , 0xe1 , 0x0 , 0x0 , 0xc0 , 0x1 , // Char 35 #
0xf0 , 0x1 , 0xf , 0x0 , 0xfc , 0x7 , 0x1f , 0x0 , 0xfe , 0xf , 0x3f , 0x0 , 0x9e , 0xf , 0x7c , 0x0 , 0xf , 0x1e , 0x78 , 0x0 , 0xff , 0xff , 0xff , 0x3 , 0xf , 0x3e , 0x78 , 0x0 , 0xe , 0x3c , 0x78 , 0x0 , 0x7e , 0xfc , 0x3e , 0x0 , 0x7c , 0xf8 , 0x3f , 0x0 , 0x78 , 0xf0 , 0x1f , 0x0 , 0x0 , 0xc0 , 0x7 , // Char 36 $
0xfc , 0x3 , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0x0 , 0x7 , 0x7 , 0x0 , 0x0 , 0x3 , 0x6 , 0x0 , 0x0 , 0x7 , 0x7 , 0x20 , 0x0 , 0xfe , 0x7 , 0x78 , 0x0 , 0xfc , 0x1 , 0x1e , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x1e , 0xf0 , 0x1f , 0x0 , 0x7 , 0xf8 , 0x3f , 0x0 , 0x1 , 0x38 , 0x38 , 0x0 , 0x0 , 0x18 , 0x30 , 0x0 , 0x0 , 0x78 , 0x3c , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0xe0 , 0xf , // Char 37 %
0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0xfc , 0xfc , 0x3f , 0x0 , 0xfe , 0x3f , 0x3c , 0x0 , 0xff , 0x1f , 0x38 , 0x0 , 0x8f , 0x1f , 0x38 , 0x0 , 0x87 , 0x7f , 0x3c , 0x0 , 0xff , 0xff , 0x3c , 0x0 , 0xfe , 0xf1 , 0x1f , 0x0 , 0xfc , 0xe0 , 0xf , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xfc , 0x3c , 0x0 , 0x0 , 0x3c , 0x38 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 38 &
0xff , 0x0 , 0x0 , 0x0 , 0xff , // Char 39 '
0x0 , 0xff , 0x7 , 0x0 , 0xf0 , 0xff , 0x3f , 0x0 , 0xfc , 0xff , 0xff , 0x1 , 0xff , 0x8f , 0xff , 0x7 , 0x1f , 0x0 , 0xc0 , 0xf , 0x3 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0x8 , // Char 40 (
0x1 , 0x0 , 0x0 , 0xe , 0xf , 0x0 , 0xc0 , 0xf , 0xff , 0x1 , 0xfc , 0x7 , 0xfc , 0xff , 0xff , 0x1 , 0xf0 , 0xff , 0x7f , 0x0 , 0x80 , 0xff , 0xf , // Char 41 )
0x18 , 0x0 , 0x0 , 0x0 , 0xb8 , 0x3 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0x38 , 0x1 , 0x0 , 0x0 , 0x18 , // Char 42 *
0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0x80 , 0xff , 0x3f , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf0 , // Char 43 +
0x0 , 0x0 , 0x3e , 0x6 , 0x0 , 0x0 , 0xbe , 0x3 , 0x0 , 0x0 , 0xfe , 0x1 , // Char 44 ,
0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x78 , // Char 45 -
0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x3e , // Char 46 .
0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0xe0 , 0x7f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0xe0 , 0xff , 0x1 , 0x0 , 0xff , 0x1f , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x0 , 0x1f , // Char 47 /
0xe0 , 0xff , 0x3 , 0x0 , 0xfc , 0xff , 0xf , 0x0 , 0xfe , 0xff , 0x1f , 0x0 , 0x7e , 0x80 , 0x3f , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x38 , 0x0 , 0xf , 0x0 , 0x38 , 0x0 , 0x1f , 0x0 , 0x3c , 0x0 , 0xfe , 0xff , 0x3f , 0x0 , 0xfe , 0xff , 0x1f , 0x0 , 0xf8 , 0xff , 0xf , 0x0 , 0xc0 , 0xff , // Char 48 0
0x70 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , // Char 49 1
0xf0 , 0x0 , 0x3c , 0x0 , 0xfc , 0x0 , 0x3f , 0x0 , 0xfe , 0x80 , 0x3f , 0x0 , 0x1f , 0xc0 , 0x3f , 0x0 , 0xf , 0xe0 , 0x3d , 0x0 , 0xf , 0xf0 , 0x3c , 0x0 , 0xf , 0x78 , 0x3c , 0x0 , 0x1f , 0x3e , 0x3c , 0x0 , 0xfe , 0x3f , 0x3c , 0x0 , 0xfc , 0x1f , 0x3c , 0x0 , 0xf8 , 0x7 , 0x3c , 0x0 , 0xc0 , 0x0 , 0x38 , // Char 50 2
0x70 , 0x80 , 0x7 , 0x0 , 0x7c , 0x80 , 0x1f , 0x0 , 0x7e , 0x80 , 0x3f , 0x0 , 0x1f , 0x0 , 0x3e , 0x0 , 0xf , 0xe , 0x38 , 0x0 , 0xf , 0xe , 0x78 , 0x0 , 0xf , 0x1e , 0x38 , 0x0 , 0x9f , 0x1f , 0x3c , 0x0 , 0xfe , 0xff , 0x3f , 0x0 , 0xfc , 0xff , 0x1f , 0x0 , 0xf8 , 0xf9 , 0xf , 0x0 , 0x0 , 0xe0 , 0x1 , // Char 51 3
0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x80 , 0xff , 0x1 , 0x0 , 0xe0 , 0xc7 , 0x1 , 0x0 , 0xf8 , 0xc1 , 0x1 , 0x0 , 0x7e , 0xc0 , 0x1 , 0x0 , 0x1f , 0xe0 , 0x1 , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x1 , // Char 52 4
0x0 , 0xe , 0x7 , 0x0 , 0xfe , 0x1f , 0x1f , 0x0 , 0xff , 0x1f , 0x3f , 0x0 , 0x7f , 0xf , 0x3c , 0x0 , 0xf , 0x7 , 0x38 , 0x0 , 0xf , 0x7 , 0x78 , 0x0 , 0xf , 0x7 , 0x38 , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xff , 0x3f , 0x0 , 0xf , 0xfe , 0x1f , 0x0 , 0xf , 0xfc , 0x7 , 0x0 , 0x0 , 0xe0 , // Char 53 5
0xe0 , 0xff , 0x3 , 0x0 , 0xf8 , 0xff , 0xf , 0x0 , 0xfe , 0xff , 0x1f , 0x0 , 0x7e , 0x1e , 0x3e , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0x7 , 0x38 , 0x0 , 0xf , 0x7 , 0x38 , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0x1e , 0xff , 0x3f , 0x0 , 0x1e , 0xfe , 0x1f , 0x0 , 0x1c , 0xfc , 0xf , 0x0 , 0x0 , 0xf0 , 0x1 , // Char 54 6
0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0xc0 , 0x3f , 0x0 , 0xf , 0xf8 , 0x3f , 0x0 , 0xf , 0xfe , 0x3f , 0x0 , 0x8f , 0xff , 0x0 , 0x0 , 0xef , 0xf , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0xf , // Char 55 7
0xe0 , 0xf0 , 0x7 , 0x0 , 0xfc , 0xf9 , 0x1f , 0x0 , 0xfe , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x3e , 0x0 , 0xf , 0x1f , 0x3c , 0x0 , 0xf , 0xe , 0x38 , 0x0 , 0xf , 0xe , 0x38 , 0x0 , 0xf , 0x1f , 0x3c , 0x0 , 0xfe , 0xff , 0x3f , 0x0 , 0xfe , 0xff , 0x1f , 0x0 , 0xf8 , 0xf9 , 0xf , 0x0 , 0x0 , 0xe0 , 0x3 , // Char 56 8
0xf0 , 0x7 , 0x6 , 0x0 , 0xfc , 0x1f , 0x1e , 0x0 , 0xfe , 0x3f , 0x3e , 0x0 , 0x1f , 0x3e , 0x3e , 0x0 , 0xf , 0x38 , 0x38 , 0x0 , 0xf , 0x38 , 0x78 , 0x0 , 0xf , 0x38 , 0x38 , 0x0 , 0x1f , 0x3c , 0x3e , 0x0 , 0xfe , 0xff , 0x1f , 0x0 , 0xfc , 0xff , 0x1f , 0x0 , 0xf8 , 0xff , 0x7 , 0x0 , 0xc0 , 0x7f , // Char 57 9
0xc0 , 0x3 , 0x3c , 0x0 , 0xc0 , 0x7 , 0x3e , 0x0 , 0xc0 , 0x7 , 0x3e , 0x0 , 0xc0 , 0x7 , 0x3e , // Char 58 :
0xc0 , 0x7 , 0x3e , 0x6 , 0xc0 , 0x7 , 0x3e , 0x6 , 0xc0 , 0x7 , 0xfe , 0x3 , 0xc0 , 0x7 , 0xfe , // Char 59 ;
0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0xfc , 0x3 , 0x0 , 0x0 , 0x9e , 0x7 , 0x0 , 0x0 , 0x9e , 0x7 , 0x0 , 0x0 , 0xf , 0xf , 0x0 , 0x0 , 0xf , 0xe , 0x0 , 0x80 , 0x7 , 0x1e , 0x0 , 0x80 , 0x7 , 0x1c , 0x0 , 0xc0 , 0x3 , 0x3c , // Char 60 <
0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , // Char 61 =
0xc0 , 0x3 , 0x3c , 0x0 , 0x80 , 0x3 , 0x3c , 0x0 , 0x80 , 0x7 , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0xf , 0x0 , 0x0 , 0x1e , 0xf , 0x0 , 0x0 , 0x9e , 0x7 , 0x0 , 0x0 , 0xbc , 0x3 , 0x0 , 0x0 , 0xfc , 0x3 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0xf0 , // Char 62 >
0x78 , 0x0 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xf , 0xf0 , 0x3c , 0x0 , 0xf , 0xfc , 0x3c , 0x0 , 0xf , 0xfe , 0x3c , 0x0 , 0x1f , 0x3f , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0x0 , 0xfc , 0x3 , 0x0 , 0x0 , 0xe0 , // Char 63 ?
0x80 , 0x7f , 0x0 , 0x0 , 0xe0 , 0xff , 0x3 , 0x0 , 0xf8 , 0xf3 , 0x7 , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x1c , 0x7e , 0x1c , 0x0 , 0x8e , 0xff , 0x39 , 0x0 , 0xc6 , 0xff , 0x39 , 0x0 , 0xe7 , 0xc1 , 0x33 , 0x0 , 0xe7 , 0x80 , 0x33 , 0x0 , 0xe7 , 0xc0 , 0x71 , 0x0 , 0xe7 , 0xe1 , 0x31 , 0x0 , 0xc7 , 0xff , 0x33 , 0x0 , 0xe6 , 0xff , 0x3b , 0x0 , 0xee , 0x87 , 0x19 , 0x0 , 0x3c , 0xc0 , 0x1d , 0x0 , 0x78 , 0xe0 , 0xc , 0x0 , 0xf0 , 0x7f , 0x0 , 0x0 , 0xc0 , 0x1f , // Char 64 @
0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0xf0 , 0xff , 0x3 , 0x0 , 0xfe , 0xff , 0x1 , 0x0 , 0xff , 0xe3 , 0x1 , 0x0 , 0x3f , 0xe0 , 0x1 , 0x0 , 0x7f , 0xe0 , 0x1 , 0x0 , 0xff , 0xe7 , 0x1 , 0x0 , 0xfc , 0xff , 0x1 , 0x0 , 0xe0 , 0xff , 0x7 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x38 , // Char 65 A
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xff , 0x3f , 0x3f , 0x0 , 0xfe , 0xff , 0x1f , 0x0 , 0xfc , 0xfd , 0xf , 0x0 , 0xf8 , 0xf8 , 0x7 , // Char 66 B
0x80 , 0x7f , 0x0 , 0x0 , 0xf0 , 0xff , 0x3 , 0x0 , 0xf8 , 0xff , 0xf , 0x0 , 0xfc , 0xff , 0x1f , 0x0 , 0x7e , 0x80 , 0x3f , 0x0 , 0x1e , 0x0 , 0x3e , 0x0 , 0x1f , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0x1f , 0x0 , 0x3c , 0x0 , 0x3e , 0x0 , 0x3f , 0x0 , 0xfe , 0x80 , 0x1f , 0x0 , 0xfc , 0x80 , 0xf , 0x0 , 0xf8 , 0x80 , 0x7 , 0x0 , 0xc0 , 0x80 , // Char 67 C
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0x1f , 0x0 , 0x3e , 0x0 , 0x7e , 0x80 , 0x1f , 0x0 , 0xfe , 0xff , 0x1f , 0x0 , 0xfc , 0xff , 0x7 , 0x0 , 0xf0 , 0xff , 0x3 , 0x0 , 0x80 , 0x3f , // Char 68 D
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0xf , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , // Char 69 E
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , // Char 70 F
0x80 , 0x7f , 0x0 , 0x0 , 0xe0 , 0xff , 0x3 , 0x0 , 0xf8 , 0xff , 0xf , 0x0 , 0xfc , 0xff , 0x1f , 0x0 , 0xfe , 0x80 , 0x1f , 0x0 , 0x3e , 0x0 , 0x3e , 0x0 , 0x1f , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x3c , 0x3c , 0x0 , 0xf , 0x3c , 0x3c , 0x0 , 0x1f , 0x3c , 0x3e , 0x0 , 0x3e , 0x3c , 0x1f , 0x0 , 0x7c , 0xfc , 0xf , 0x0 , 0x7c , 0xfc , 0x3f , 0x0 , 0x70 , 0xfc , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , // Char 71 G
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , // Char 72 H
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , // Char 73 I
0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x7 , // Char 74 J
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0xf0 , 0xff , 0x0 , 0x0 , 0xf8 , 0xfd , 0x3 , 0x0 , 0x7e , 0xf8 , 0x7 , 0x0 , 0x3f , 0xe0 , 0x1f , 0x0 , 0x1f , 0x80 , 0x3f , 0x0 , 0xf , 0x0 , 0x3f , 0x0 , 0x3 , 0x0 , 0x3c , 0x0 , 0x1 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 75 K
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x3c , // Char 76 L
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0xfc , 0xff , 0x1 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0xe0 , 0xff , 0xf , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , // Char 77 M
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , // Char 78 N
0x80 , 0x7f , 0x0 , 0x0 , 0xf0 , 0xff , 0x3 , 0x0 , 0xf8 , 0xff , 0xf , 0x0 , 0xfc , 0xff , 0x1f , 0x0 , 0x7e , 0x80 , 0x1f , 0x0 , 0x1e , 0x0 , 0x3e , 0x0 , 0x1f , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0x1f , 0x0 , 0x3c , 0x0 , 0x1e , 0x0 , 0x3e , 0x0 , 0x7e , 0x0 , 0x1f , 0x0 , 0xfc , 0xff , 0x1f , 0x0 , 0xf8 , 0xff , 0xf , 0x0 , 0xf0 , 0xff , 0x3 , 0x0 , 0x80 , 0xff , // Char 79 O
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xf , 0x3c , 0x0 , 0x0 , 0xf , 0x3c , 0x0 , 0x0 , 0xf , 0x3c , 0x0 , 0x0 , 0xf , 0x3c , 0x0 , 0x0 , 0xf , 0x3c , 0x0 , 0x0 , 0x3f , 0x3f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x0 , 0xf8 , 0x7 , // Char 80 P
0x80 , 0x7f , 0x0 , 0x0 , 0xf0 , 0xff , 0x3 , 0x0 , 0xf8 , 0xff , 0xf , 0x0 , 0xfc , 0xff , 0x1f , 0x0 , 0x7e , 0x80 , 0x1f , 0x0 , 0x1e , 0x0 , 0x3e , 0x0 , 0x1f , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xf , 0x80 , 0x3d , 0x0 , 0xf , 0xc0 , 0x3f , 0x0 , 0x1e , 0x80 , 0x3f , 0x0 , 0x7e , 0x80 , 0x1f , 0x0 , 0xfc , 0xff , 0x3f , 0x0 , 0xf8 , 0xff , 0x7f , 0x0 , 0xf0 , 0xff , 0x7b , 0x0 , 0x80 , 0xff , 0x30 , // Char 81 Q
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x1e , 0x0 , 0x0 , 0xf , 0x3e , 0x0 , 0x0 , 0xbf , 0xff , 0x3f , 0x0 , 0xfe , 0xff , 0x3f , 0x0 , 0xfe , 0xf3 , 0x3f , 0x0 , 0xf8 , 0xe1 , 0x3f , 0x0 , 0x0 , 0x0 , 0x20 , // Char 82 R
0xe0 , 0x81 , 0x3 , 0x0 , 0xfc , 0x87 , 0xf , 0x0 , 0xfe , 0x87 , 0x1f , 0x0 , 0xfe , 0xf , 0x3f , 0x0 , 0x1f , 0xf , 0x3c , 0x0 , 0xf , 0x1e , 0x3c , 0x0 , 0xf , 0x1e , 0x38 , 0x0 , 0xf , 0x1e , 0x78 , 0x0 , 0xf , 0x3e , 0x38 , 0x0 , 0x1f , 0x3c , 0x3c , 0x0 , 0x7e , 0x7c , 0x3e , 0x0 , 0x7e , 0xf8 , 0x1f , 0x0 , 0x78 , 0xf8 , 0x1f , 0x0 , 0x60 , 0xf0 , 0x7 , // Char 83 S
0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , // Char 84 T
0xff , 0xff , 0x7 , 0x0 , 0xff , 0xff , 0xf , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x1f , 0x0 , 0xff , 0xff , 0xf , 0x0 , 0xff , 0xff , 0x3 , // Char 85 U
0xf , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0xe0 , 0xff , 0x7 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xfc , 0xff , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x3 , // Char 86 V
0x1 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xfe , 0xff , 0x3 , 0x0 , 0x80 , 0xff , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x80 , 0xff , 0x3f , 0x0 , 0xfe , 0xff , 0x3 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0xff , 0xff , 0x1 , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0xf8 , 0xff , 0x7 , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3 , // Char 87 W
0x3 , 0x0 , 0x30 , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0x3f , 0x0 , 0x3f , 0x0 , 0xff , 0xc0 , 0x3f , 0x0 , 0xfe , 0xf3 , 0xf , 0x0 , 0xf8 , 0xff , 0x3 , 0x0 , 0xc0 , 0xff , 0x0 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x0 , 0xf0 , 0xff , 0x1 , 0x0 , 0xfc , 0xfb , 0xf , 0x0 , 0xff , 0xe0 , 0x3f , 0x0 , 0x3f , 0x80 , 0x3f , 0x0 , 0xf , 0x0 , 0x3e , 0x0 , 0x3 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 88 X
0x7 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x80 , 0xff , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0xf0 , 0x1f , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x1 , // Char 89 Y
0xf , 0x0 , 0x3e , 0x0 , 0xf , 0x80 , 0x3f , 0x0 , 0xf , 0xc0 , 0x3f , 0x0 , 0xf , 0xf0 , 0x3f , 0x0 , 0xf , 0xfc , 0x3d , 0x0 , 0xf , 0xfe , 0x3c , 0x0 , 0x8f , 0x3f , 0x3c , 0x0 , 0xcf , 0x1f , 0x3c , 0x0 , 0xff , 0x7 , 0x3c , 0x0 , 0xff , 0x3 , 0x3c , 0x0 , 0xff , 0x0 , 0x3c , 0x0 , 0x7f , 0x0 , 0x3c , 0x0 , 0x1f , 0x0 , 0x3c , // Char 90 Z
0xff , 0xff , 0xff , 0xf , 0xff , 0xff , 0xff , 0xf , 0xff , 0xff , 0xff , 0xf , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , // Char 91 [
0x1 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xe0 , 0xff , 0x3 , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x0 , 0x40 , // Char 92 Backslash
0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0xff , 0xff , 0xff , 0xf , 0xff , 0xff , 0xff , 0xf , 0xff , 0xff , 0xff , 0xf , // Char 93 ]
0x0 , 0xe , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x8 , // Char 94 ^
0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x2 , // Char 95 _
0x1 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x6 , // Char 96 `
0x0 , 0xc6 , 0xf , 0x0 , 0x80 , 0xe7 , 0x1f , 0x0 , 0xc0 , 0xe7 , 0x3f , 0x0 , 0xe0 , 0xf3 , 0x3c , 0x0 , 0xe0 , 0x71 , 0x38 , 0x0 , 0xe0 , 0x71 , 0x38 , 0x0 , 0xe0 , 0x31 , 0x1c , 0x0 , 0xe0 , 0x39 , 0xe , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0x80 , 0xff , 0x3f , 0x0 , 0x0 , 0x0 , 0x30 , // Char 97 a
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0x80 , 0x3 , 0x1e , 0x0 , 0xc0 , 0x1 , 0x1c , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x3 , 0x3c , 0x0 , 0xe0 , 0x8f , 0x3f , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0x0 , 0xfe , 0x3 , // Char 98 b
0x0 , 0xfe , 0x3 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0xc0 , 0x8f , 0x3f , 0x0 , 0xe0 , 0x3 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xc0 , 0x7 , 0x1f , 0x0 , 0xc0 , 0x7 , 0x1f , 0x0 , 0x80 , 0x7 , 0xf , 0x0 , 0x0 , 0x6 , 0x1 , // Char 99 c
0x0 , 0xfe , 0x3 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0xe0 , 0xdf , 0x3f , 0x0 , 0xe0 , 0x3 , 0x3e , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xc0 , 0x1 , 0x1c , 0x0 , 0x80 , 0x3 , 0x1e , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , // Char 100 d
0x0 , 0xff , 0x7 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0xe0 , 0x73 , 0x3e , 0x0 , 0xe0 , 0x71 , 0x3c , 0x0 , 0xe0 , 0x71 , 0x3c , 0x0 , 0xe0 , 0x71 , 0x3c , 0x0 , 0xe0 , 0x71 , 0x3c , 0x0 , 0xc0 , 0x7f , 0x1e , 0x0 , 0xc0 , 0x7f , 0x1e , 0x0 , 0x0 , 0x7f , 0xe , 0x0 , 0x0 , 0x7c , 0x2 , // Char 101 e
0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xfc , 0xff , 0x3f , 0x0 , 0xfe , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xef , 0x0 , 0x0 , 0x0 , 0xe7 , // Char 102 f
0x0 , 0xfc , 0x1 , 0x1 , 0x80 , 0xff , 0x8f , 0x3 , 0xc0 , 0xff , 0x9f , 0x7 , 0xe0 , 0xff , 0xbf , 0xf , 0xe0 , 0x3 , 0x3e , 0xf , 0xe0 , 0x1 , 0x3c , 0xe , 0xe0 , 0x1 , 0x3c , 0xe , 0xc0 , 0x1 , 0x3c , 0xf , 0xc0 , 0x7 , 0x1e , 0xf , 0xe0 , 0xff , 0xff , 0x7 , 0xe0 , 0xff , 0xff , 0x7 , 0xe0 , 0xff , 0xff , 0x3 , 0xe0 , 0xff , 0x3f , // Char 103 g
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0x80 , 0xff , 0x3f , // Char 104 h
0xef , 0xff , 0x3f , 0x0 , 0xef , 0xff , 0x3f , 0x0 , 0xef , 0xff , 0x3f , // Char 105 i
0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0xf , 0xef , 0xff , 0xff , 0xf , 0xef , 0xff , 0xff , 0x7 , 0xef , 0xff , 0xff , 0x3 , // Char 106 j
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0xc0 , 0xff , 0x7 , 0x0 , 0xe0 , 0xe7 , 0x3f , 0x0 , 0xe0 , 0x83 , 0x3f , 0x0 , 0xe0 , 0x0 , 0x3e , 0x0 , 0x60 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 107 k
0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , 0x0 , 0xff , 0xff , 0x3f , // Char 108 l
0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0x80 , 0xff , 0x3f , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0x80 , 0xff , 0x3f , // Char 109 m
0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0x80 , 0xff , 0x3f , // Char 110 n
0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0xc0 , 0xdf , 0x1f , 0x0 , 0xe0 , 0x3 , 0x3e , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x3 , 0x3e , 0x0 , 0xc0 , 0x8f , 0x1f , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0x0 , 0xfe , 0x3 , // Char 111 o
0xe0 , 0xff , 0xff , 0xf , 0xe0 , 0xff , 0xff , 0xf , 0xe0 , 0xff , 0xff , 0xf , 0x80 , 0x3 , 0xe , 0x0 , 0xc0 , 0x1 , 0x1c , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x3 , 0x3c , 0x0 , 0xe0 , 0x8f , 0x3f , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0x0 , 0xfe , 0x3 , // Char 112 p
0x0 , 0xfe , 0x3 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0xe0 , 0x9f , 0x3f , 0x0 , 0xe0 , 0x3 , 0x3e , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xc0 , 0x1 , 0x1c , 0x0 , 0xc0 , 0x3 , 0x1e , 0x0 , 0xe0 , 0xff , 0xff , 0xf , 0xe0 , 0xff , 0xff , 0xf , 0xe0 , 0xff , 0xff , 0xf , 0xe0 , 0xff , 0xff , 0xf , // Char 113 q
0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , // Char 114 r
0x0 , 0xf , 0x7 , 0x0 , 0x80 , 0x1f , 0x1f , 0x0 , 0xc0 , 0x3f , 0x1f , 0x0 , 0xe0 , 0x7f , 0x3e , 0x0 , 0xe0 , 0x79 , 0x3c , 0x0 , 0xe0 , 0x78 , 0x38 , 0x0 , 0xe0 , 0xf0 , 0x38 , 0x0 , 0xe0 , 0xf1 , 0x3c , 0x0 , 0xc0 , 0xf3 , 0x3f , 0x0 , 0xc0 , 0xe3 , 0x1f , 0x0 , 0x80 , 0xe3 , 0xf , 0x0 , 0x0 , 0x80 , 0x3 , // Char 115 s
0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xfe , 0xff , 0x1f , 0x0 , 0xfe , 0xff , 0x3f , 0x0 , 0xfe , 0xff , 0x3f , 0x0 , 0xe0 , 0x1 , 0x3e , 0x0 , 0xe0 , 0x0 , 0x38 , 0x0 , 0xe0 , 0x0 , 0x38 , // Char 116 t
0xe0 , 0xff , 0xf , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , // Char 117 u
0x20 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xe0 , 0xff , 0x1 , 0x0 , 0xc0 , 0xff , 0xf , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0xc0 , 0xff , 0x7 , 0x0 , 0xe0 , 0x7f , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0xe0 , // Char 118 v
0x20 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0xe0 , 0xff , 0x0 , 0x0 , 0xe0 , 0xff , 0xf , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x80 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x7f , 0x0 , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0xe0 , 0xff , 0x1f , 0x0 , 0xe0 , 0xff , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0x60 , // Char 119 w
0x60 , 0x0 , 0x30 , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x7 , 0x3f , 0x0 , 0xe0 , 0xdf , 0x3f , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0xe0 , 0x8f , 0x3f , 0x0 , 0xe0 , 0x3 , 0x3e , 0x0 , 0xe0 , 0x0 , 0x3c , 0x0 , 0x20 , 0x0 , 0x30 , // Char 120 x
0x20 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0xe , 0xe0 , 0xff , 0x1 , 0xf , 0x80 , 0xff , 0xf , 0xf , 0x0 , 0xf8 , 0xff , 0xf , 0x0 , 0x80 , 0xff , 0x7 , 0x0 , 0xc0 , 0xff , 0x1 , 0x0 , 0xfc , 0x3f , 0x0 , 0xe0 , 0xff , 0x7 , 0x0 , 0xe0 , 0x7f , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0xe0 , // Char 121 y
0x0 , 0x0 , 0x38 , 0x0 , 0xe0 , 0x1 , 0x3e , 0x0 , 0xe0 , 0x1 , 0x3f , 0x0 , 0xe0 , 0xc1 , 0x3f , 0x0 , 0xe0 , 0xe1 , 0x3f , 0x0 , 0xe0 , 0xf9 , 0x3f , 0x0 , 0xe0 , 0xfd , 0x3c , 0x0 , 0xe0 , 0x7f , 0x3c , 0x0 , 0xe0 , 0x1f , 0x3c , 0x0 , 0xe0 , 0xf , 0x3c , 0x0 , 0xe0 , 0x3 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x3c , // Char 122 z
0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf8 , 0xff , 0xff , 0x0 , 0xfe , 0xdf , 0xff , 0x7 , 0xff , 0x9f , 0xff , 0xf , 0xff , 0x3 , 0xfe , 0xf , 0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , // Char 123 {
0xff , 0xff , 0x7f , 0x0 , 0xff , 0xff , 0x7f , 0x0 , 0xff , 0xff , 0x7f , // Char 124 |
0x7 , 0x0 , 0x0 , 0xe , 0x7 , 0x0 , 0x0 , 0xe , 0xff , 0x8f , 0xff , 0xf , 0xfe , 0xdf , 0xff , 0x7 , 0xfc , 0xff , 0xff , 0x3 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x70 , // Char 125 }
0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x40 , // Char 126 ~
};
