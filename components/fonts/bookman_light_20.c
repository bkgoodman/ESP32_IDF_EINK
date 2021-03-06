#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Bookman_Light_20[] PROGMEM = {
12 , // Width 
20 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 12, // Char 32   - Nodata
 0x0, 0x0, 0x5, 0x4, // Char 33 ! 
 0x0, 0x5, 0x10, 0x8, // Char 34 " 
 0x0, 0x15, 0x1d, 0xc, // Char 35 # 
 0x0, 0x32, 0x20, 0xd, // Char 36 $ 
 0x0, 0x52, 0x35, 0x14, // Char 37 % 
 0x0, 0x87, 0x2c, 0x11, // Char 38 & 
 0x0, 0xb3, 0x4, 0x4, // Char 39 ' 
 0x0, 0xb7, 0xf, 0x7, // Char 40 ( 
 0x0, 0xc6, 0xb, 0x6, // Char 41 ) 
 0x0, 0xd1, 0x13, 0x9, // Char 42 * 
 0x0, 0xe4, 0x1c, 0xc, // Char 43 + 
 0x1, 0x0, 0x5, 0x4, // Char 44 , 
 0x1, 0x5, 0x11, 0x8, // Char 45 - 
 0x1, 0x16, 0x5, 0x4, // Char 46 . 
 0x1, 0x1b, 0x16, 0xa, // Char 47 / 
 0x1, 0x31, 0x20, 0xd, // Char 48 0 
 0x1, 0x51, 0x14, 0x9, // Char 49 1 
 0x1, 0x65, 0x1d, 0xc, // Char 50 2 
 0x1, 0x82, 0x1d, 0xc, // Char 51 3 
 0x1, 0x9f, 0x20, 0xd, // Char 52 4 
 0x1, 0xbf, 0x20, 0xd, // Char 53 5 
 0x1, 0xdf, 0x20, 0xd, // Char 54 6 
 0x1, 0xff, 0x1f, 0xd, // Char 55 7 
 0x2, 0x1e, 0x20, 0xd, // Char 56 8 
 0x2, 0x3e, 0x1f, 0xd, // Char 57 9 
 0x2, 0x5d, 0x5, 0x4, // Char 58 : 
 0x2, 0x62, 0x5, 0x4, // Char 59 ; 
 0x2, 0x67, 0x1d, 0xc, // Char 60 < 
 0x2, 0x84, 0x1d, 0xc, // Char 61 = 
 0x2, 0xa1, 0x1d, 0xc, // Char 62 > 
 0x2, 0xbe, 0x19, 0xb, // Char 63 ? 
 0x2, 0xd7, 0x29, 0x10, // Char 64 @ 
 0x3, 0x0, 0x2c, 0x11, // Char 65 A 
 0x3, 0x2c, 0x26, 0xf, // Char 66 B 
 0x3, 0x52, 0x26, 0xf, // Char 67 C 
 0x3, 0x78, 0x29, 0x10, // Char 68 D 
 0x3, 0xa1, 0x26, 0xf, // Char 69 E 
 0x3, 0xc7, 0x22, 0xe, // Char 70 F 
 0x3, 0xe9, 0x28, 0x10, // Char 71 G 
 0x4, 0x11, 0x29, 0x10, // Char 72 H 
 0x4, 0x3a, 0xe, 0x7, // Char 73 I 
 0x4, 0x48, 0x1f, 0xd, // Char 74 J 
 0x4, 0x67, 0x29, 0x10, // Char 75 K 
 0x4, 0x90, 0x20, 0xd, // Char 76 L 
 0x4, 0xb0, 0x32, 0x13, // Char 77 M 
 0x4, 0xe2, 0x25, 0xf, // Char 78 N 
 0x5, 0x7, 0x29, 0x10, // Char 79 O 
 0x5, 0x30, 0x1f, 0xd, // Char 80 P 
 0x5, 0x4f, 0x29, 0x10, // Char 81 Q 
 0x5, 0x78, 0x29, 0x10, // Char 82 R 
 0x5, 0xa1, 0x23, 0xe, // Char 83 S 
 0x5, 0xc4, 0x28, 0x10, // Char 84 T 
 0x5, 0xec, 0x28, 0x10, // Char 85 U 
 0x6, 0x14, 0x2b, 0x11, // Char 86 V 
 0x6, 0x3f, 0x3d, 0x17, // Char 87 W 
 0x6, 0x7c, 0x2f, 0x12, // Char 88 X 
 0x6, 0xab, 0x28, 0x10, // Char 89 Y 
 0x6, 0xd3, 0x26, 0xf, // Char 90 Z 
 0x6, 0xf9, 0x9, 0x5, // Char 91 [ 
 0x7, 0x2, 0x17, 0xa, // Char 92 Backslash 
 0x7, 0x19, 0x9, 0x5, // Char 93 ] 
 0x7, 0x22, 0x1c, 0xc, // Char 94 ^ 
 0x7, 0x3e, 0x1e, 0xc, // Char 95 _ 
 0x7, 0x5c, 0xa, 0x6, // Char 96 ` 
 0x7, 0x66, 0x1d, 0xc, // Char 97 a 
 0x7, 0x83, 0x23, 0xe, // Char 98 b 
 0x7, 0xa6, 0x1a, 0xb, // Char 99 c 
 0x7, 0xc0, 0x20, 0xd, // Char 100 d 
 0x7, 0xe0, 0x1a, 0xb, // Char 101 e 
 0x7, 0xfa, 0x13, 0x9, // Char 102 f 
 0x8, 0xd, 0x21, 0xd, // Char 103 g 
 0x8, 0x2e, 0x23, 0xe, // Char 104 h 
 0x8, 0x51, 0xe, 0x7, // Char 105 i 
 0x8, 0x5f, 0xf, 0x7, // Char 106 j 
 0x8, 0x6e, 0x20, 0xd, // Char 107 k 
 0x8, 0x8e, 0xb, 0x6, // Char 108 l 
 0x8, 0x99, 0x32, 0x13, // Char 109 m 
 0x8, 0xcb, 0x23, 0xe, // Char 110 n 
 0x8, 0xee, 0x1d, 0xc, // Char 111 o 
 0x9, 0xb, 0x20, 0xd, // Char 112 p 
 0x9, 0x2b, 0x21, 0xd, // Char 113 q 
 0x9, 0x4c, 0x16, 0xa, // Char 114 r 
 0x9, 0x62, 0x1a, 0xb, // Char 115 s 
 0x9, 0x7c, 0x11, 0x8, // Char 116 t 
 0x9, 0x8d, 0x23, 0xe, // Char 117 u 
 0x9, 0xb0, 0x1f, 0xd, // Char 118 v 
 0x9, 0xcf, 0x2e, 0x12, // Char 119 w 
 0x9, 0xfd, 0x20, 0xd, // Char 120 x 
 0xa, 0x1d, 0x1f, 0xd, // Char 121 y 
 0xa, 0x3c, 0x1a, 0xb, // Char 122 z 
 0xa, 0x56, 0xb, 0x6, // Char 123 { 
 0xa, 0x61, 0x6, 0x4, // Char 124 | 
 0xa, 0x67, 0xa, 0x6, // Char 125 } 
 0xa, 0x71, 0x1c, 0xc, // Char 126 ~ 

// Data Table:
0xff , 0x3b , 0x0 , 0x7f , 0x30 , // Char 33 !
0xf , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x2 , // Char 34 "
0x0 , 0x1 , 0x0 , 0x10 , 0x1 , 0x0 , 0x10 , 0x3f , 0x0 , 0xfe , 0x7 , 0x0 , 0x17 , 0x1 , 0x0 , 0x10 , 0x1 , 0x0 , 0x90 , 0x3f , 0x0 , 0xff , 0x3 , 0x0 , 0x13 , 0x1 , 0x0 , 0x10 , 0x1 , // Char 35 #
0x3c , 0xe , 0x0 , 0x3e , 0xf , 0x0 , 0x73 , 0x18 , 0x0 , 0x61 , 0x10 , 0x0 , 0x61 , 0x10 , 0x0 , 0xff , 0xff , 0x0 , 0xc1 , 0x10 , 0x0 , 0xc3 , 0x10 , 0x0 , 0xce , 0x9 , 0x0 , 0xcc , 0xf , 0x0 , 0x80 , 0x7 , // Char 36 $
0x38 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x83 , 0x1 , 0x0 , 0x1 , 0x1 , 0x0 , 0x1 , 0x21 , 0x0 , 0xc3 , 0x18 , 0x0 , 0xfe , 0xc , 0x0 , 0x0 , 0x3 , 0x0 , 0x80 , 0x1 , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x2 , 0x0 , 0xcc , 0x1f , 0x0 , 0x66 , 0x30 , 0x0 , 0x21 , 0x20 , 0x0 , 0x20 , 0x20 , 0x0 , 0x60 , 0x30 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x2 , // Char 37 %
0x0 , 0xf , 0x0 , 0x80 , 0x1f , 0x0 , 0xcc , 0x18 , 0x0 , 0x7e , 0x20 , 0x0 , 0x73 , 0x20 , 0x0 , 0x61 , 0x20 , 0x0 , 0xf1 , 0x20 , 0x0 , 0x9f , 0x23 , 0x0 , 0xe , 0x17 , 0x0 , 0x0 , 0x1e , 0x0 , 0x20 , 0x3e , 0x0 , 0xe0 , 0x33 , 0x0 , 0x60 , 0x20 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , // Char 38 &
0x7 , 0x0 , 0x0 , 0x1f , // Char 39 '
0x80 , 0x3 , 0x0 , 0xfe , 0x7f , 0x0 , 0x7f , 0xfc , 0x0 , 0x1 , 0x80 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 40 (
0x0 , 0x0 , 0x1 , 0x1 , 0x80 , 0x1 , 0xff , 0xff , 0x0 , 0xfc , 0x7f , // Char 41 )
0x36 , 0x0 , 0x0 , 0x36 , 0x0 , 0x0 , 0x5c , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x36 , 0x0 , 0x0 , 0x34 , // Char 42 *
0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0xfc , 0xf , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , // Char 43 +
0x0 , 0xb0 , 0x0 , 0x0 , 0x70 , // Char 44 ,
0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 45 -
0x0 , 0x30 , 0x0 , 0x0 , 0x30 , // Char 46 .
0x0 , 0xc0 , 0x1 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x80 , 0xf , 0x0 , 0xe0 , 0x1 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x3 , // Char 47 /
0xf8 , 0x7 , 0x0 , 0xfc , 0xf , 0x0 , 0xe , 0x18 , 0x0 , 0x3 , 0x30 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x2 , 0x10 , 0x0 , 0xfe , 0x1f , 0x0 , 0xfc , 0xf , 0x0 , 0xe0 , 0x1 , // Char 48 0
0x0 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x3 , 0x30 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , // Char 49 1
0x1c , 0x30 , 0x0 , 0x1e , 0x38 , 0x0 , 0x3 , 0x38 , 0x0 , 0x1 , 0x34 , 0x0 , 0x1 , 0x36 , 0x0 , 0x1 , 0x33 , 0x0 , 0xc3 , 0x31 , 0x0 , 0xfe , 0x30 , 0x0 , 0x7e , 0x30 , 0x0 , 0x18 , 0x3c , // Char 50 2
0x0 , 0x1c , 0x0 , 0x1e , 0x1c , 0x0 , 0xe , 0x30 , 0x0 , 0x41 , 0x20 , 0x0 , 0x41 , 0x20 , 0x0 , 0x41 , 0x20 , 0x0 , 0x61 , 0x20 , 0x0 , 0xb7 , 0x30 , 0x0 , 0xbe , 0x1f , 0x0 , 0x1c , 0xf , // Char 51 3
0x0 , 0x3 , 0x0 , 0x80 , 0x2 , 0x0 , 0x60 , 0x2 , 0x0 , 0x10 , 0x2 , 0x0 , 0xc , 0x22 , 0x0 , 0x6 , 0x22 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0x22 , 0x0 , 0x0 , 0x22 , 0x0 , 0x0 , 0x2 , // Char 52 4
0x0 , 0xc , 0x0 , 0x7f , 0x1c , 0x0 , 0x23 , 0x3c , 0x0 , 0x33 , 0x20 , 0x0 , 0x13 , 0x20 , 0x0 , 0x13 , 0x20 , 0x0 , 0x33 , 0x20 , 0x0 , 0x33 , 0x30 , 0x0 , 0xe3 , 0x1f , 0x0 , 0xc0 , 0xf , 0x0 , 0x80 , 0x3 , // Char 53 5
0xf0 , 0x7 , 0x0 , 0xfc , 0xf , 0x0 , 0xce , 0x19 , 0x0 , 0x42 , 0x30 , 0x0 , 0x21 , 0x20 , 0x0 , 0x21 , 0x20 , 0x0 , 0x21 , 0x20 , 0x0 , 0x61 , 0x30 , 0x0 , 0xc6 , 0x1f , 0x0 , 0xc6 , 0xf , 0x0 , 0x0 , 0x7 , // Char 54 6
0xc , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x38 , 0x0 , 0x3 , 0x3f , 0x0 , 0x83 , 0xf , 0x0 , 0xe3 , 0x1 , 0x0 , 0x33 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , // Char 55 7
0x0 , 0xf , 0x0 , 0xbe , 0x1f , 0x0 , 0xfe , 0x30 , 0x0 , 0xe1 , 0x20 , 0x0 , 0x61 , 0x20 , 0x0 , 0xc1 , 0x20 , 0x0 , 0xc1 , 0x20 , 0x0 , 0xe3 , 0x20 , 0x0 , 0xbe , 0x11 , 0x0 , 0x9c , 0xf , 0x0 , 0x0 , 0x6 , // Char 56 8
0x7c , 0x8 , 0x0 , 0xfe , 0x18 , 0x0 , 0x82 , 0x31 , 0x0 , 0x1 , 0x21 , 0x0 , 0x1 , 0x21 , 0x0 , 0x1 , 0x21 , 0x0 , 0x1 , 0x31 , 0x0 , 0x82 , 0x18 , 0x0 , 0xfe , 0x1f , 0x0 , 0xfc , 0x7 , 0x0 , 0x40 , // Char 57 9
0x30 , 0x30 , 0x0 , 0x30 , 0x30 , // Char 58 :
0x30 , 0xb0 , 0x0 , 0x30 , 0x70 , // Char 59 ;
0xc0 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x60 , 0x3 , 0x0 , 0x20 , 0x2 , 0x0 , 0x30 , 0x6 , 0x0 , 0x10 , 0x6 , 0x0 , 0x18 , 0xc , 0x0 , 0x8 , 0xc , 0x0 , 0xc , 0x18 , // Char 60 <
0x30 , 0x3 , 0x0 , 0x30 , 0x3 , 0x0 , 0x30 , 0x3 , 0x0 , 0x30 , 0x3 , 0x0 , 0x30 , 0x3 , 0x0 , 0x30 , 0x3 , 0x0 , 0x30 , 0x3 , 0x0 , 0x30 , 0x3 , 0x0 , 0x30 , 0x3 , 0x0 , 0x30 , 0x3 , // Char 61 =
0xc , 0x18 , 0x0 , 0x8 , 0xc , 0x0 , 0x18 , 0xc , 0x0 , 0x18 , 0x4 , 0x0 , 0x30 , 0x6 , 0x0 , 0x30 , 0x2 , 0x0 , 0x60 , 0x3 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xc0 , 0x1 , 0x0 , 0xc0 , 0x1 , // Char 62 >
0x1e , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x1 , 0x10 , 0x0 , 0x1 , 0x3b , 0x0 , 0x81 , 0x31 , 0x0 , 0xc1 , 0x0 , 0x0 , 0x63 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x3c , // Char 63 ?
0xe0 , 0x3 , 0x0 , 0x18 , 0x6 , 0x0 , 0x4 , 0x8 , 0x0 , 0xe2 , 0x13 , 0x0 , 0x7a , 0x36 , 0x0 , 0x9 , 0x24 , 0x0 , 0x5 , 0x24 , 0x0 , 0x5 , 0x22 , 0x0 , 0x85 , 0x23 , 0x0 , 0xfd , 0x27 , 0x0 , 0x3e , 0x14 , 0x0 , 0x6 , 0x12 , 0x0 , 0xc , 0xb , 0x0 , 0xf8 , 0x4 , // Char 64 @
0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x3e , 0x0 , 0xc0 , 0x23 , 0x0 , 0x70 , 0x1 , 0x0 , 0xe , 0x1 , 0x0 , 0x7 , 0x1 , 0x0 , 0x1f , 0x1 , 0x0 , 0xfc , 0x1 , 0x0 , 0xf0 , 0x23 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x20 , // Char 65 A
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x47 , 0x38 , 0x0 , 0x41 , 0x20 , 0x0 , 0x41 , 0x20 , 0x0 , 0x41 , 0x20 , 0x0 , 0x41 , 0x20 , 0x0 , 0x41 , 0x20 , 0x0 , 0xe3 , 0x30 , 0x0 , 0xbe , 0x19 , 0x0 , 0x9e , 0x1f , 0x0 , 0x0 , 0xf , // Char 66 B
0xf0 , 0x3 , 0x0 , 0xfc , 0xf , 0x0 , 0x3e , 0x1f , 0x0 , 0x6 , 0x18 , 0x0 , 0x3 , 0x30 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x2 , 0x30 , 0x0 , 0x6 , 0x10 , 0x0 , 0x1f , 0x8 , 0x0 , 0x10 , 0x4 , // Char 67 C
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x7 , 0x38 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x3 , 0x30 , 0x0 , 0x6 , 0x18 , 0x0 , 0x3e , 0x1f , 0x0 , 0xfc , 0xf , 0x0 , 0xf0 , 0x3 , // Char 68 D
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x47 , 0x38 , 0x0 , 0x41 , 0x20 , 0x0 , 0x41 , 0x20 , 0x0 , 0xc1 , 0x20 , 0x0 , 0xf1 , 0x23 , 0x0 , 0x1 , 0x20 , 0x0 , 0x3 , 0x30 , 0x0 , 0x7 , 0x30 , 0x0 , 0xe , 0x38 , 0x0 , 0x0 , 0x4 , // Char 69 E
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x47 , 0x38 , 0x0 , 0x41 , 0x20 , 0x0 , 0x41 , 0x0 , 0x0 , 0xc1 , 0x0 , 0x0 , 0xf1 , 0x3 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xc , // Char 70 F
0xf0 , 0x3 , 0x0 , 0xfc , 0xf , 0x0 , 0x3e , 0x1f , 0x0 , 0x6 , 0x18 , 0x0 , 0x3 , 0x30 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x3 , 0x20 , 0x0 , 0x82 , 0x10 , 0x0 , 0x86 , 0x19 , 0x0 , 0x8f , 0x1f , 0x0 , 0x88 , 0x3f , 0x0 , 0x80 , // Char 71 G
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x47 , 0x38 , 0x0 , 0x41 , 0x20 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x41 , 0x20 , 0x0 , 0x47 , 0x38 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x1 , 0x20 , // Char 72 H
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x3 , 0x30 , 0x0 , 0x1 , 0x20 , // Char 73 I
0x0 , 0xf , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x1 , 0x30 , 0x0 , 0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0xff , 0x7 , 0x0 , 0x1 , // Char 74 J
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0xc7 , 0x39 , 0x0 , 0x41 , 0x20 , 0x0 , 0x20 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf9 , 0x1 , 0x0 , 0x8d , 0x27 , 0x0 , 0x7 , 0x3f , 0x0 , 0x3 , 0x3c , 0x0 , 0x1 , 0x38 , 0x0 , 0x1 , 0x20 , 0x0 , 0x0 , 0x20 , // Char 75 K
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x7 , 0x38 , 0x0 , 0x1 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x1c , // Char 76 L
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0xf , 0x20 , 0x0 , 0x7f , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x1e , 0x0 , 0x80 , 0x7 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x3c , 0x20 , 0x0 , 0x7 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , // Char 77 M
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x7 , 0x20 , 0x0 , 0x1e , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x1 , 0x3e , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x1 , // Char 78 N
0xf0 , 0x3 , 0x0 , 0xfc , 0xf , 0x0 , 0x3c , 0x1e , 0x0 , 0x6 , 0x18 , 0x0 , 0x3 , 0x30 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x3 , 0x30 , 0x0 , 0x6 , 0x18 , 0x0 , 0x1e , 0x1e , 0x0 , 0xfc , 0xf , 0x0 , 0xf0 , 0x3 , // Char 79 O
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x83 , 0x38 , 0x0 , 0x81 , 0x20 , 0x0 , 0x81 , 0x0 , 0x0 , 0x81 , 0x0 , 0x0 , 0x81 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x3c , // Char 80 P
0xf0 , 0x3 , 0x0 , 0xf8 , 0xcf , 0x0 , 0x3c , 0xce , 0x1 , 0x6 , 0x98 , 0x1 , 0x3 , 0x30 , 0x2 , 0x1 , 0x20 , 0x2 , 0x1 , 0x38 , 0x2 , 0x1 , 0x24 , 0x2 , 0x1 , 0x24 , 0x2 , 0x3 , 0x34 , 0x3 , 0x6 , 0x1c , 0x1 , 0xe , 0xfc , 0x1 , 0xfc , 0xff , 0x0 , 0xf0 , 0x7 , // Char 81 Q
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x83 , 0x38 , 0x0 , 0x81 , 0x20 , 0x0 , 0x81 , 0x0 , 0x0 , 0x81 , 0x0 , 0x0 , 0x81 , 0x3 , 0x0 , 0x81 , 0x7 , 0x0 , 0x43 , 0xf , 0x0 , 0x7e , 0x3c , 0x0 , 0x3e , 0x38 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x20 , // Char 82 R
0x1c , 0x1e , 0x0 , 0x3e , 0x38 , 0x0 , 0x73 , 0x10 , 0x0 , 0x61 , 0x30 , 0x0 , 0x61 , 0x20 , 0x0 , 0xe1 , 0x20 , 0x0 , 0xc1 , 0x20 , 0x0 , 0xc3 , 0x20 , 0x0 , 0xc2 , 0x31 , 0x0 , 0xc7 , 0x1f , 0x0 , 0x88 , 0xf , 0x0 , 0x0 , 0x7 , // Char 83 S
0x8 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xe , // Char 84 T
0x1 , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0xff , 0x1f , 0x0 , 0x3 , 0x1c , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x1 , 0x30 , 0x0 , 0x1 , 0x10 , 0x0 , 0xff , 0xf , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 85 U
0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0xf1 , 0x3 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xf , 0x0 , 0xc1 , 0x1 , 0x0 , 0x79 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 86 V
0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0xe1 , 0xf , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x3c , 0x0 , 0x1 , 0x7 , 0x0 , 0xf7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0xe1 , 0xf , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x7 , 0x0 , 0xe1 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 87 W
0x0 , 0x20 , 0x0 , 0x1 , 0x20 , 0x0 , 0x1 , 0x30 , 0x0 , 0x3 , 0x38 , 0x0 , 0x7 , 0x3c , 0x0 , 0x1f , 0x26 , 0x0 , 0x3d , 0x1 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x19 , 0x27 , 0x0 , 0xf , 0x3e , 0x0 , 0x7 , 0x3c , 0x0 , 0x3 , 0x30 , 0x0 , 0x1 , 0x20 , 0x0 , 0x0 , 0x20 , // Char 88 X
0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3f , 0x20 , 0x0 , 0x79 , 0x20 , 0x0 , 0xe0 , 0x3f , 0x0 , 0xc0 , 0x3f , 0x0 , 0xe0 , 0x20 , 0x0 , 0x31 , 0x20 , 0x0 , 0xd , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 89 Y
0x0 , 0x20 , 0x0 , 0xc , 0x30 , 0x0 , 0x7 , 0x3c , 0x0 , 0x3 , 0x2e , 0x0 , 0x1 , 0x27 , 0x0 , 0xc1 , 0x23 , 0x0 , 0xe1 , 0x20 , 0x0 , 0x71 , 0x20 , 0x0 , 0x39 , 0x20 , 0x0 , 0x1f , 0x30 , 0x0 , 0x7 , 0x30 , 0x0 , 0x3 , 0x38 , 0x0 , 0x0 , 0xc , // Char 90 Z
0xff , 0xff , 0x1 , 0xff , 0xff , 0x1 , 0x0 , 0x0 , 0x1 , // Char 91 [
0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x30 , // Char 92 Backslash
0x0 , 0x0 , 0x1 , 0xff , 0xff , 0x1 , 0xff , 0xff , 0x1 , // Char 93 ]
0x80 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x80 , // Char 94 ^
0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 95 _
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 96 `
0x40 , 0x1c , 0x0 , 0x60 , 0x3e , 0x0 , 0x10 , 0x22 , 0x0 , 0x10 , 0x23 , 0x0 , 0x10 , 0x21 , 0x0 , 0x10 , 0x11 , 0x0 , 0xf0 , 0x1f , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x20 , // Char 97 a
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x1f , 0x0 , 0x20 , 0x10 , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x30 , 0x30 , 0x0 , 0xe0 , 0x1f , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x3 , // Char 98 b
0xc0 , 0xf , 0x0 , 0xe0 , 0x1f , 0x0 , 0x30 , 0x30 , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x30 , 0x20 , 0x0 , 0xe0 , 0x10 , 0x0 , 0x40 , 0x8 , // Char 99 c
0xc0 , 0xf , 0x0 , 0xe0 , 0x1f , 0x0 , 0x30 , 0x30 , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x21 , 0x10 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x20 , // Char 100 d
0xc0 , 0xf , 0x0 , 0xe0 , 0x1f , 0x0 , 0xb0 , 0x38 , 0x0 , 0x90 , 0x30 , 0x0 , 0x90 , 0x20 , 0x0 , 0x90 , 0x20 , 0x0 , 0xb0 , 0x20 , 0x0 , 0xe0 , 0x10 , 0x0 , 0xc0 , 0x8 , // Char 101 e
0x10 , 0x20 , 0x0 , 0xfe , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x11 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 102 f
0x0 , 0x0 , 0x1 , 0xc0 , 0xb9 , 0x3 , 0xe0 , 0x7f , 0x6 , 0x70 , 0x77 , 0x4 , 0x10 , 0x74 , 0x4 , 0x10 , 0x64 , 0x4 , 0x10 , 0x64 , 0x4 , 0xf0 , 0x67 , 0x4 , 0xe8 , 0x63 , 0x6 , 0x88 , 0xe0 , 0x3 , 0x8 , 0xc0 , 0x1 , // Char 103 g
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x20 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , // Char 104 h
0x10 , 0x20 , 0x0 , 0xf6 , 0x3f , 0x0 , 0xf6 , 0x3f , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , // Char 105 i
0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x4 , 0x10 , 0x0 , 0x4 , 0xf6 , 0xff , 0x3 , 0xf6 , 0xff , 0x1 , // Char 106 j
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0x23 , 0x0 , 0x0 , 0x21 , 0x0 , 0x80 , 0x3 , 0x0 , 0x70 , 0x27 , 0x0 , 0x30 , 0x3e , 0x0 , 0x10 , 0x38 , 0x0 , 0x10 , 0x30 , 0x0 , 0x10 , 0x20 , // Char 107 k
0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0x20 , // Char 108 l
0x30 , 0x20 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x20 , 0x20 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x20 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xe0 , 0x3f , 0x0 , 0x60 , 0x30 , 0x0 , 0x20 , 0x20 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x20 , 0x0 , 0x30 , 0x20 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x20 , // Char 109 m
0x30 , 0x20 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x20 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , // Char 110 n
0xc0 , 0xf , 0x0 , 0xe0 , 0x1f , 0x0 , 0x30 , 0x30 , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x30 , 0x30 , 0x0 , 0xe0 , 0x1f , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x3 , // Char 111 o
0x30 , 0x0 , 0x4 , 0xf0 , 0xff , 0x7 , 0xf0 , 0xff , 0x7 , 0x20 , 0x10 , 0x4 , 0x10 , 0x20 , 0x4 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x30 , 0x30 , 0x0 , 0xe0 , 0x1d , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0x3 , // Char 112 p
0xc0 , 0xf , 0x0 , 0xe0 , 0x1f , 0x0 , 0x30 , 0x30 , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x20 , 0x10 , 0x4 , 0xe0 , 0xff , 0x7 , 0xf0 , 0xff , 0x7 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , // Char 113 q
0x10 , 0x20 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , // Char 114 r
0xc0 , 0x3c , 0x0 , 0xe0 , 0x11 , 0x0 , 0x90 , 0x21 , 0x0 , 0x90 , 0x23 , 0x0 , 0x10 , 0x23 , 0x0 , 0x10 , 0x23 , 0x0 , 0x20 , 0x37 , 0x0 , 0x70 , 0x1e , 0x0 , 0x0 , 0xc , // Char 115 s
0x10 , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0xff , 0x3f , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , 0x0 , 0x10 , 0x20 , // Char 116 t
0x10 , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x10 , 0x0 , 0x10 , 0x10 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x20 , // Char 117 u
0x10 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xd0 , 0xf , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xe , 0x0 , 0x90 , 0x1 , 0x0 , 0x70 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , // Char 118 v
0x10 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xd0 , 0xf , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x38 , 0x0 , 0x10 , 0xe , 0x0 , 0xf0 , 0x1 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x90 , 0x1f , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x18 , 0x0 , 0x10 , 0x7 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x10 , // Char 119 w
0x10 , 0x20 , 0x0 , 0x10 , 0x30 , 0x0 , 0x30 , 0x38 , 0x0 , 0xf0 , 0x2c , 0x0 , 0xd0 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0x2f , 0x0 , 0x50 , 0x3c , 0x0 , 0x30 , 0x38 , 0x0 , 0x10 , 0x30 , 0x0 , 0x10 , 0x20 , // Char 120 x
0x10 , 0x0 , 0x6 , 0x70 , 0x0 , 0x6 , 0xf0 , 0x1 , 0x6 , 0xd0 , 0xf , 0x2 , 0x0 , 0xbe , 0x1 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1c , 0x0 , 0x90 , 0x3 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x10 , // Char 121 y
0x0 , 0x20 , 0x0 , 0x70 , 0x38 , 0x0 , 0x30 , 0x3c , 0x0 , 0x10 , 0x2e , 0x0 , 0x10 , 0x27 , 0x0 , 0xd0 , 0x21 , 0x0 , 0xf0 , 0x20 , 0x0 , 0x70 , 0x30 , 0x0 , 0x30 , 0x38 , // Char 122 z
0xc0 , 0x0 , 0x0 , 0xff , 0x7f , 0x0 , 0x1f , 0xfe , 0x0 , 0x0 , 0x80 , // Char 123 {
0xff , 0xff , 0x7 , 0xff , 0xff , 0x7 , // Char 124 |
0x0 , 0x80 , 0x0 , 0x7f , 0xff , 0x0 , 0xfe , 0x3f , 0x0 , 0x80 , // Char 125 }
0x80 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x60 , // Char 126 ~
};
