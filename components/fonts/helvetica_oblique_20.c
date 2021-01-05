#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Helvetica_Oblique_20[] PROGMEM = {
12 , // Width 
20 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 12, // Char 32   - Nodata
 0x0, 0x0, 0xa, 0x6, // Char 33 ! 
 0x0, 0xa, 0x10, 0x8, // Char 34 " 
 0x0, 0x1a, 0x22, 0xe, // Char 35 # 
 0x0, 0x3c, 0x1f, 0xd, // Char 36 $ 
 0x0, 0x5b, 0x2c, 0x11, // Char 37 % 
 0x0, 0x87, 0x20, 0xd, // Char 38 & 
 0x0, 0xa7, 0x7, 0x5, // Char 39 ' 
 0x0, 0xae, 0x13, 0x9, // Char 40 ( 
 0x0, 0xc1, 0x13, 0x9, // Char 41 ) 
 0x0, 0xd4, 0xd, 0x7, // Char 42 * 
 0x0, 0xe1, 0x1d, 0xc, // Char 43 + 
 0x0, 0xfe, 0x8, 0x5, // Char 44 , 
 0x1, 0x6, 0xe, 0x7, // Char 45 - 
 0x1, 0x14, 0x5, 0x4, // Char 46 . 
 0x1, 0x19, 0x19, 0xb, // Char 47 / 
 0x1, 0x32, 0x1c, 0xc, // Char 48 0 
 0x1, 0x4e, 0x10, 0x8, // Char 49 1 
 0x1, 0x5e, 0x1f, 0xd, // Char 50 2 
 0x1, 0x7d, 0x1f, 0xd, // Char 51 3 
 0x1, 0x9c, 0x1d, 0xc, // Char 52 4 
 0x1, 0xb9, 0x22, 0xe, // Char 53 5 
 0x1, 0xdb, 0x1c, 0xc, // Char 54 6 
 0x1, 0xf7, 0x1c, 0xc, // Char 55 7 
 0x2, 0x13, 0x1f, 0xd, // Char 56 8 
 0x2, 0x32, 0x1c, 0xc, // Char 57 9 
 0x2, 0x4e, 0xa, 0x6, // Char 58 : 
 0x2, 0x58, 0xa, 0x6, // Char 59 ; 
 0x2, 0x62, 0x1f, 0xd, // Char 60 < 
 0x2, 0x81, 0x1c, 0xc, // Char 61 = 
 0x2, 0x9d, 0x20, 0xd, // Char 62 > 
 0x2, 0xbd, 0x19, 0xb, // Char 63 ? 
 0x2, 0xd6, 0x37, 0x15, // Char 64 @ 
 0x3, 0xd, 0x23, 0xe, // Char 65 A 
 0x3, 0x30, 0x22, 0xe, // Char 66 B 
 0x3, 0x52, 0x25, 0xf, // Char 67 C 
 0x3, 0x77, 0x26, 0xf, // Char 68 D 
 0x3, 0x9d, 0x25, 0xf, // Char 69 E 
 0x3, 0xc2, 0x25, 0xf, // Char 70 F 
 0x3, 0xe7, 0x29, 0x10, // Char 71 G 
 0x4, 0x10, 0x28, 0x10, // Char 72 H 
 0x4, 0x38, 0xd, 0x7, // Char 73 I 
 0x4, 0x45, 0x1f, 0xd, // Char 74 J 
 0x4, 0x64, 0x28, 0x10, // Char 75 K 
 0x4, 0x8c, 0x1a, 0xb, // Char 76 L 
 0x4, 0xa6, 0x2e, 0x12, // Char 77 M 
 0x4, 0xd4, 0x28, 0x10, // Char 78 N 
 0x4, 0xfc, 0x2b, 0x11, // Char 79 O 
 0x5, 0x27, 0x25, 0xf, // Char 80 P 
 0x5, 0x4c, 0x2b, 0x11, // Char 81 Q 
 0x5, 0x77, 0x25, 0xf, // Char 82 R 
 0x5, 0x9c, 0x22, 0xe, // Char 83 S 
 0x5, 0xbe, 0x22, 0xe, // Char 84 T 
 0x5, 0xe0, 0x28, 0x10, // Char 85 U 
 0x6, 0x8, 0x22, 0xe, // Char 86 V 
 0x6, 0x2a, 0x34, 0x14, // Char 87 W 
 0x6, 0x5e, 0x28, 0x10, // Char 88 X 
 0x6, 0x86, 0x22, 0xe, // Char 89 Y 
 0x6, 0xa8, 0x28, 0x10, // Char 90 Z 
 0x6, 0xd0, 0x16, 0xa, // Char 91 [ 
 0x6, 0xe6, 0x10, 0x8, // Char 92 Backslash 
 0x6, 0xf6, 0x13, 0x9, // Char 93 ] 
 0x7, 0x9, 0x16, 0xa, // Char 94 ^ 
 0x7, 0x1f, 0x24, 0xe, // Char 95 _ 
 0x7, 0x43, 0x7, 0x5, // Char 96 ` 
 0x7, 0x4a, 0x1d, 0xc, // Char 97 a 
 0x7, 0x67, 0x20, 0xd, // Char 98 b 
 0x7, 0x87, 0x1c, 0xc, // Char 99 c 
 0x7, 0xa3, 0x22, 0xe, // Char 100 d 
 0x7, 0xc5, 0x1c, 0xc, // Char 101 e 
 0x7, 0xe1, 0x10, 0x8, // Char 102 f 
 0x7, 0xf1, 0x1f, 0xd, // Char 103 g 
 0x8, 0x10, 0x1f, 0xd, // Char 104 h 
 0x8, 0x2f, 0xd, 0x7, // Char 105 i 
 0x8, 0x3c, 0x13, 0x9, // Char 106 j 
 0x8, 0x4f, 0x1c, 0xc, // Char 107 k 
 0x8, 0x6b, 0xd, 0x7, // Char 108 l 
 0x8, 0x78, 0x2f, 0x12, // Char 109 m 
 0x8, 0xa7, 0x1f, 0xd, // Char 110 n 
 0x8, 0xc6, 0x1c, 0xc, // Char 111 o 
 0x8, 0xe2, 0x23, 0xe, // Char 112 p 
 0x9, 0x5, 0x1f, 0xd, // Char 113 q 
 0x9, 0x24, 0x16, 0xa, // Char 114 r 
 0x9, 0x3a, 0x1a, 0xb, // Char 115 s 
 0x9, 0x54, 0xd, 0x7, // Char 116 t 
 0x9, 0x61, 0x1c, 0xc, // Char 117 u 
 0x9, 0x7d, 0x1c, 0xc, // Char 118 v 
 0x9, 0x99, 0x28, 0x10, // Char 119 w 
 0x9, 0xc1, 0x1c, 0xc, // Char 120 x 
 0x9, 0xdd, 0x22, 0xe, // Char 121 y 
 0x9, 0xff, 0x1c, 0xc, // Char 122 z 
 0xa, 0x1b, 0x13, 0x9, // Char 123 { 
 0xa, 0x2e, 0xd, 0x7, // Char 124 | 
 0xa, 0x3b, 0x11, 0x8, // Char 125 } 
 0xa, 0x4c, 0x19, 0xb, // Char 126 ~ 

// Data Table:
0x0 , 0x60 , 0x0 , 0xe0 , 0x27 , 0x0 , 0xff , 0x0 , 0x0 , 0xf , // Char 33 !
0x1c , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7 , // Char 34 "
0x0 , 0x2 , 0x0 , 0x0 , 0x72 , 0x0 , 0x10 , 0x3e , 0x0 , 0x90 , 0x7 , 0x0 , 0xf0 , 0x2 , 0x0 , 0x3c , 0x72 , 0x0 , 0x17 , 0x3e , 0x0 , 0x90 , 0x7 , 0x0 , 0xf0 , 0x2 , 0x0 , 0x3c , 0x2 , 0x0 , 0x17 , 0x0 , 0x0 , 0x10 , // Char 35 #
0x0 , 0x18 , 0x0 , 0x0 , 0x3c , 0x0 , 0x78 , 0x60 , 0x0 , 0x7e , 0x60 , 0x1 , 0xc6 , 0xf8 , 0x1 , 0xc3 , 0x7f , 0x0 , 0xff , 0x61 , 0x0 , 0x87 , 0x21 , 0x0 , 0x83 , 0x3f , 0x0 , 0x7 , 0x1f , 0x0 , 0xe , // Char 36 $
0x78 , 0x0 , 0x0 , 0x6c , 0x40 , 0x0 , 0x46 , 0x60 , 0x0 , 0x42 , 0x30 , 0x0 , 0x66 , 0xc , 0x0 , 0x3e , 0x6 , 0x0 , 0xc , 0x3 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x60 , 0x3c , 0x0 , 0x30 , 0x76 , 0x0 , 0xc , 0x63 , 0x0 , 0x6 , 0x61 , 0x0 , 0x1 , 0x63 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xe , // Char 37 %
0x0 , 0x3e , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x63 , 0x0 , 0xbc , 0x61 , 0x0 , 0xfe , 0x60 , 0x0 , 0xe3 , 0x23 , 0x0 , 0x63 , 0x37 , 0x0 , 0x33 , 0x1e , 0x0 , 0x3f , 0x7c , 0x0 , 0xe , 0x67 , 0x0 , 0x0 , 0x1 , // Char 38 &
0x1c , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x3 , // Char 39 '
0x0 , 0x7c , 0x0 , 0x80 , 0xff , 0x3 , 0xf0 , 0x1 , 0x6 , 0x38 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 40 (
0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x2 , 0x0 , 0x80 , 0x1 , 0x0 , 0xe0 , 0x0 , 0x3 , 0x3e , 0x0 , 0xfe , 0xf , 0x0 , 0x40 , // Char 41 )
0x34 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x3d , 0x0 , 0x0 , 0x4 , // Char 42 *
0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x62 , 0x0 , 0x0 , 0x7f , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 43 +
0x0 , 0x0 , 0x2 , 0x0 , 0x60 , 0x1 , 0x0 , 0xe0 , // Char 44 ,
0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 45 -
0x0 , 0x60 , 0x0 , 0x0 , 0x60 , // Char 46 .
0x0 , 0x60 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x3 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 47 /
0x80 , 0x1f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x7c , 0x60 , 0x0 , 0xe , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x38 , 0x0 , 0x3 , 0x1f , 0x0 , 0xfe , 0x7 , 0x0 , 0xfc , // Char 48 0
0x8 , 0x0 , 0x0 , 0x8 , 0x60 , 0x0 , 0xc , 0x7f , 0x0 , 0xfc , 0x1f , 0x0 , 0xfe , 0x0 , 0x0 , 0x7 , // Char 49 1
0x0 , 0x60 , 0x0 , 0x0 , 0x78 , 0x0 , 0x18 , 0x6c , 0x0 , 0x1c , 0x66 , 0x0 , 0x6 , 0x66 , 0x0 , 0x3 , 0x63 , 0x0 , 0x3 , 0x63 , 0x0 , 0x83 , 0x61 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xe7 , 0x0 , 0x0 , 0x3e , // Char 50 2
0x0 , 0xc , 0x0 , 0x0 , 0x3c , 0x0 , 0x18 , 0x70 , 0x0 , 0xc , 0x60 , 0x0 , 0x6 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xe3 , 0x1f , 0x0 , 0xbf , 0xf , 0x0 , 0x1e , // Char 51 3
0x0 , 0x4 , 0x0 , 0x0 , 0xe , 0x0 , 0x80 , 0xf , 0x0 , 0xc0 , 0xd , 0x0 , 0x60 , 0xc , 0x0 , 0x30 , 0xc , 0x0 , 0x18 , 0x7c , 0x0 , 0xec , 0x3f , 0x0 , 0xfe , 0xf , 0x0 , 0x1f , 0xc , // Char 52 4
0x0 , 0x18 , 0x0 , 0x0 , 0x38 , 0x0 , 0xe0 , 0x70 , 0x0 , 0xfc , 0x60 , 0x0 , 0x6f , 0x60 , 0x0 , 0x63 , 0x60 , 0x0 , 0x63 , 0x60 , 0x0 , 0x63 , 0x30 , 0x0 , 0xe3 , 0x1f , 0x0 , 0xc3 , 0xf , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 53 5
0x80 , 0x1f , 0x0 , 0xf0 , 0x3f , 0x0 , 0xfc , 0x61 , 0x0 , 0xce , 0x60 , 0x0 , 0x46 , 0x60 , 0x0 , 0x63 , 0x60 , 0x0 , 0x63 , 0x30 , 0x0 , 0xc3 , 0x1f , 0x0 , 0x87 , 0xf , 0x0 , 0xe , // Char 54 6
0x0 , 0x60 , 0x0 , 0x3 , 0x78 , 0x0 , 0x3 , 0x1e , 0x0 , 0x3 , 0x7 , 0x0 , 0xc3 , 0x1 , 0x0 , 0xe3 , 0x0 , 0x0 , 0x33 , 0x0 , 0x0 , 0x1b , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3 , // Char 55 7
0x0 , 0x8 , 0x0 , 0x0 , 0x3f , 0x0 , 0x90 , 0x73 , 0x0 , 0xfc , 0x61 , 0x0 , 0xe6 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xe3 , 0x1f , 0x0 , 0x3f , 0xf , 0x0 , 0x1e , // Char 56 8
0x0 , 0x38 , 0x0 , 0xf8 , 0x71 , 0x0 , 0xde , 0x61 , 0x0 , 0x6 , 0x63 , 0x0 , 0x3 , 0x63 , 0x0 , 0x3 , 0x31 , 0x0 , 0x83 , 0x39 , 0x0 , 0xc3 , 0x1f , 0x0 , 0xfe , 0x7 , 0x0 , 0xfc , // Char 57 9
0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x30 , 0x20 , 0x0 , 0x30 , // Char 58 :
0x0 , 0x60 , 0x2 , 0x0 , 0xe0 , 0x1 , 0x30 , 0x20 , 0x0 , 0x30 , // Char 59 ;
0x0 , 0x6 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1b , 0x0 , 0x0 , 0x19 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x60 , 0x0 , 0xc0 , 0x60 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , // Char 60 <
0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , // Char 61 =
0x0 , 0x40 , 0x0 , 0x0 , 0x60 , 0x0 , 0x60 , 0x20 , 0x0 , 0xc0 , 0x30 , 0x0 , 0xc0 , 0x10 , 0x0 , 0x80 , 0x19 , 0x0 , 0x80 , 0x19 , 0x0 , 0x0 , 0xb , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , // Char 62 >
0x1c , 0x0 , 0x0 , 0xe , 0x60 , 0x0 , 0x2 , 0x67 , 0x0 , 0x83 , 0x7 , 0x0 , 0x83 , 0x1 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x77 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0xc , // Char 63 ?
0x80 , 0x3f , 0x0 , 0xe0 , 0xfb , 0x0 , 0x70 , 0xc0 , 0x0 , 0x38 , 0x80 , 0x1 , 0xc , 0x8e , 0x1 , 0x8c , 0x1f , 0x1 , 0xc6 , 0x19 , 0x3 , 0x62 , 0x10 , 0x3 , 0x33 , 0x10 , 0x1 , 0x33 , 0x8 , 0x1 , 0x33 , 0x1c , 0x1 , 0xf3 , 0x1f , 0x1 , 0xe3 , 0x11 , 0x0 , 0x73 , 0x10 , 0x0 , 0x17 , 0x18 , 0x0 , 0x6 , 0xc , 0x0 , 0xc , 0x7 , 0x0 , 0xfc , 0x3 , 0x0 , 0xf0 , // Char 64 @
0x0 , 0x60 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1e , 0x0 , 0x80 , 0x7 , 0x0 , 0xc0 , 0x7 , 0x0 , 0xf0 , 0x6 , 0x0 , 0x3c , 0x6 , 0x0 , 0xf , 0x6 , 0x0 , 0x7 , 0x6 , 0x0 , 0xff , 0x7 , 0x0 , 0xf8 , 0x7f , 0x0 , 0x0 , 0x7c , // Char 65 A
0x0 , 0x7c , 0x0 , 0xe0 , 0x7f , 0x0 , 0xfe , 0x63 , 0x0 , 0xdf , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xe3 , 0x3f , 0x0 , 0x3f , 0x1f , 0x0 , 0x1e , // Char 66 B
0x80 , 0xf , 0x0 , 0xe0 , 0x1f , 0x0 , 0xf8 , 0x38 , 0x0 , 0x1c , 0x70 , 0x0 , 0x6 , 0x60 , 0x0 , 0x6 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x38 , 0x0 , 0x7 , 0x1c , 0x0 , 0xe , 0xe , 0x0 , 0x1c , // Char 67 C
0x0 , 0x78 , 0x0 , 0xc0 , 0x7f , 0x0 , 0xfc , 0x67 , 0x0 , 0x3f , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x38 , 0x0 , 0x7 , 0x1e , 0x0 , 0xfe , 0x7 , 0x0 , 0xfc , 0x1 , // Char 68 D
0x0 , 0x78 , 0x0 , 0xc0 , 0x7f , 0x0 , 0xfc , 0x67 , 0x0 , 0xff , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 69 E
0x0 , 0x78 , 0x0 , 0xc0 , 0x7f , 0x0 , 0xfc , 0x7 , 0x0 , 0xff , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 70 F
0x80 , 0xf , 0x0 , 0xe0 , 0x1f , 0x0 , 0x78 , 0x38 , 0x0 , 0x1c , 0x70 , 0x0 , 0x6 , 0x60 , 0x0 , 0x6 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x83 , 0x21 , 0x0 , 0x83 , 0x31 , 0x0 , 0x83 , 0x19 , 0x0 , 0x87 , 0x7d , 0x0 , 0x9e , 0x3f , 0x0 , 0x9c , 0x1 , // Char 71 G
0x0 , 0x78 , 0x0 , 0xc0 , 0x7f , 0x0 , 0xfe , 0x7 , 0x0 , 0xff , 0x0 , 0x0 , 0xc1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x70 , 0x0 , 0xc0 , 0x7f , 0x0 , 0xf8 , 0xf , 0x0 , 0x7f , 0x0 , 0x0 , 0x7 , // Char 72 H
0x0 , 0x70 , 0x0 , 0x80 , 0x7f , 0x0 , 0xf8 , 0xf , 0x0 , 0x7f , 0x0 , 0x0 , 0x7 , // Char 73 I
0x0 , 0x3c , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x3c , 0x0 , 0xe0 , 0x1f , 0x0 , 0xfe , 0x3 , 0x0 , 0x3f , 0x0 , 0x0 , 0x1 , // Char 74 J
0x0 , 0x7c , 0x0 , 0xe0 , 0x7f , 0x0 , 0xfe , 0x3 , 0x0 , 0x9f , 0x1 , 0x0 , 0xc1 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xb0 , 0xf , 0x0 , 0x18 , 0x3e , 0x0 , 0xc , 0x78 , 0x0 , 0x6 , 0x60 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 75 K
0x0 , 0x7c , 0x0 , 0xe0 , 0x7f , 0x0 , 0xfe , 0x63 , 0x0 , 0x1f , 0x60 , 0x0 , 0x1 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , // Char 76 L
0x0 , 0x7c , 0x0 , 0xe0 , 0x3f , 0x0 , 0xff , 0x1 , 0x0 , 0x1f , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0xfc , 0x7f , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x7 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x70 , 0x40 , 0x0 , 0x1c , 0x7c , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x1 , 0x0 , 0xf , // Char 77 M
0x0 , 0x7c , 0x0 , 0xe0 , 0x3f , 0x0 , 0xff , 0x1 , 0x0 , 0x1f , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x7f , 0x0 , 0xf8 , 0xf , 0x0 , 0xff , 0x0 , 0x0 , 0x7 , // Char 78 N
0x80 , 0xf , 0x0 , 0xf0 , 0x1f , 0x0 , 0x78 , 0x38 , 0x0 , 0x1c , 0x70 , 0x0 , 0x6 , 0x60 , 0x0 , 0x6 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x38 , 0x0 , 0x7 , 0x1c , 0x0 , 0xde , 0xf , 0x0 , 0xfc , 0x3 , 0x0 , 0x60 , // Char 79 O
0x0 , 0x78 , 0x0 , 0x80 , 0x7f , 0x0 , 0xfc , 0x7 , 0x0 , 0xff , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xe7 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x1c , // Char 80 P
0x80 , 0xf , 0x0 , 0xf0 , 0x1f , 0x0 , 0x78 , 0x38 , 0x0 , 0x1c , 0x70 , 0x0 , 0x6 , 0x60 , 0x0 , 0x6 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x78 , 0x0 , 0x3 , 0x38 , 0x0 , 0x3 , 0x78 , 0x0 , 0x6 , 0xfc , 0x0 , 0x9e , 0xf , 0x0 , 0xfc , 0x3 , 0x0 , 0x60 , // Char 81 Q
0x0 , 0x70 , 0x0 , 0x80 , 0x7f , 0x0 , 0xfc , 0xf , 0x0 , 0xff , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x71 , 0x0 , 0xc3 , 0x7f , 0x0 , 0x7f , 0x4e , 0x0 , 0x3e , // Char 82 R
0x0 , 0x1c , 0x0 , 0x0 , 0x3c , 0x0 , 0x7c , 0x60 , 0x0 , 0x7e , 0x60 , 0x0 , 0xc6 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0x83 , 0x61 , 0x0 , 0x83 , 0x31 , 0x0 , 0x83 , 0x1f , 0x0 , 0xe , 0xf , 0x0 , 0x1e , // Char 83 S
0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x7f , 0x0 , 0xf3 , 0x1f , 0x0 , 0xff , 0x1 , 0x0 , 0xf , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 84 T
0x0 , 0x8 , 0x0 , 0xc0 , 0x3f , 0x0 , 0xfe , 0x3f , 0x0 , 0x3f , 0x60 , 0x0 , 0x1 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x38 , 0x0 , 0x80 , 0x1f , 0x0 , 0xf8 , 0x7 , 0x0 , 0x7f , 0x0 , 0x0 , 0x7 , // Char 85 U
0x3f , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0xc0 , 0x7f , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xf , 0x0 , 0x80 , 0x3 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 86 V
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe , 0x0 , 0xc0 , 0x3 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x3e , 0x0 , 0x80 , 0xf , 0x0 , 0xe0 , 0x1 , 0x0 , 0x7c , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 87 W
0x0 , 0x40 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x38 , 0x0 , 0x3 , 0x1c , 0x0 , 0xf , 0xe , 0x0 , 0x3e , 0x7 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xe0 , 0xf , 0x0 , 0x30 , 0x7e , 0x0 , 0x1c , 0x70 , 0x0 , 0xe , 0x40 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , // Char 88 X
0x7 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x70 , 0x0 , 0xe0 , 0x7f , 0x0 , 0x80 , 0xf , 0x0 , 0xc0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 89 Y
0x0 , 0x60 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x7c , 0x0 , 0x3 , 0x6e , 0x0 , 0x3 , 0x67 , 0x0 , 0x83 , 0x63 , 0x0 , 0xc3 , 0x61 , 0x0 , 0xe3 , 0x60 , 0x0 , 0x73 , 0x60 , 0x0 , 0x3b , 0x60 , 0x0 , 0x1f , 0x60 , 0x0 , 0xf , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 90 Z
0x0 , 0x0 , 0x4 , 0x0 , 0xe0 , 0x7 , 0x0 , 0xfe , 0x7 , 0xf0 , 0xf , 0x6 , 0xff , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 91 [
0x1c , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7 , // Char 92 Backslash
0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0xc0 , 0x7 , 0x1 , 0xfc , 0x3 , 0xe3 , 0x1f , 0x0 , 0xff , 0x1 , 0x0 , 0xf , // Char 93 ]
0x80 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0xe0 , // Char 94 ^
0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 95 _
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x4 , // Char 96 `
0x0 , 0x38 , 0x0 , 0x0 , 0x7c , 0x0 , 0x40 , 0x66 , 0x0 , 0x60 , 0x66 , 0x0 , 0x30 , 0x62 , 0x0 , 0x30 , 0x62 , 0x0 , 0x30 , 0x22 , 0x0 , 0x30 , 0x3b , 0x0 , 0xf0 , 0x7f , 0x0 , 0xe0 , 0x67 , // Char 97 a
0x0 , 0x60 , 0x0 , 0x0 , 0x7f , 0x0 , 0xf8 , 0x3f , 0x0 , 0xff , 0x60 , 0x0 , 0x63 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x30 , 0x0 , 0x70 , 0x3c , 0x0 , 0xe0 , 0xf , 0x0 , 0xc0 , 0x3 , // Char 98 b
0x0 , 0x8 , 0x0 , 0x80 , 0x3f , 0x0 , 0xc0 , 0x73 , 0x0 , 0x60 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x38 , 0x0 , 0xf0 , 0x18 , 0x0 , 0xe0 , // Char 99 c
0x0 , 0xc , 0x0 , 0x80 , 0x3f , 0x0 , 0xc0 , 0x71 , 0x0 , 0x60 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x20 , 0x0 , 0x30 , 0x78 , 0x0 , 0xe0 , 0x7f , 0x0 , 0xf0 , 0xf , 0x0 , 0xff , 0x0 , 0x0 , 0x7 , // Char 100 d
0x0 , 0x1f , 0x0 , 0xc0 , 0x3f , 0x0 , 0x60 , 0x61 , 0x0 , 0x30 , 0x61 , 0x0 , 0x30 , 0x61 , 0x0 , 0x30 , 0x61 , 0x0 , 0x30 , 0x31 , 0x0 , 0x70 , 0x19 , 0x0 , 0xe0 , 0x9 , 0x0 , 0xc0 , // Char 101 e
0x10 , 0x78 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xfc , 0x3 , 0x0 , 0x3e , 0x0 , 0x0 , 0x13 , 0x0 , 0x0 , 0x3 , // Char 102 f
0x0 , 0x8 , 0x3 , 0x80 , 0x3f , 0x7 , 0xc0 , 0x73 , 0x6 , 0x60 , 0x60 , 0x6 , 0x30 , 0x60 , 0x6 , 0x30 , 0x60 , 0x6 , 0x30 , 0x20 , 0x3 , 0x30 , 0xf8 , 0x1 , 0xe0 , 0x7f , 0x0 , 0xf0 , 0xf , 0x0 , 0x70 , // Char 103 g
0x0 , 0x40 , 0x0 , 0x0 , 0x7e , 0x0 , 0xf0 , 0x1f , 0x0 , 0xff , 0x1 , 0x0 , 0x6f , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x60 , 0x0 , 0x70 , 0x7f , 0x0 , 0xf0 , 0xf , 0x0 , 0x40 , // Char 104 h
0x0 , 0x40 , 0x0 , 0x0 , 0x7e , 0x0 , 0xf0 , 0x1f , 0x0 , 0xf3 , 0x0 , 0x0 , 0x3 , // Char 105 i
0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0xc0 , 0x7 , 0x0 , 0xfe , 0x1 , 0xf0 , 0x1f , 0x0 , 0xf3 , 0x0 , 0x0 , 0x3 , // Char 106 j
0x0 , 0x60 , 0x0 , 0x0 , 0x7f , 0x0 , 0xf8 , 0xf , 0x0 , 0x7f , 0x3 , 0x0 , 0x83 , 0x1 , 0x0 , 0x80 , 0x7 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x60 , 0x78 , 0x0 , 0x30 , 0x60 , 0x0 , 0x10 , // Char 107 k
0x0 , 0x40 , 0x0 , 0x0 , 0x7e , 0x0 , 0xf0 , 0x1f , 0x0 , 0xff , 0x0 , 0x0 , 0x7 , // Char 108 l
0x0 , 0x40 , 0x0 , 0x0 , 0x7e , 0x0 , 0xf0 , 0x1f , 0x0 , 0xf0 , 0x1 , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x7c , 0x0 , 0xf0 , 0x3f , 0x0 , 0xe0 , 0x1 , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x78 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xe0 , 0x3 , // Char 109 m
0x0 , 0x40 , 0x0 , 0x0 , 0x7e , 0x0 , 0xf0 , 0x1f , 0x0 , 0xf0 , 0x1 , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x60 , 0x0 , 0x70 , 0x7f , 0x0 , 0xe0 , 0xf , 0x0 , 0x40 , // Char 110 n
0x0 , 0x3f , 0x0 , 0xc0 , 0x7b , 0x0 , 0x60 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x30 , 0x0 , 0x70 , 0x1e , 0x0 , 0xe0 , 0xf , 0x0 , 0x80 , // Char 111 o
0x0 , 0x0 , 0x6 , 0x0 , 0xf0 , 0x7 , 0x80 , 0xff , 0x0 , 0xf0 , 0x3f , 0x0 , 0xf0 , 0x60 , 0x0 , 0x60 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x30 , 0x0 , 0x70 , 0x3c , 0x0 , 0xe0 , 0xf , 0x0 , 0xc0 , 0x3 , // Char 112 p
0x0 , 0xc , 0x0 , 0x80 , 0x3f , 0x0 , 0xc0 , 0x71 , 0x0 , 0x60 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x20 , 0x4 , 0x30 , 0xf8 , 0x7 , 0xe0 , 0xff , 0x1 , 0xf0 , 0xf , 0x0 , 0x70 , // Char 113 q
0x0 , 0x40 , 0x0 , 0x0 , 0x7e , 0x0 , 0xf0 , 0x1f , 0x0 , 0xf0 , 0x1 , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x10 , // Char 114 r
0x0 , 0x30 , 0x0 , 0x80 , 0x78 , 0x0 , 0xe0 , 0x61 , 0x0 , 0x60 , 0x63 , 0x0 , 0x30 , 0x63 , 0x0 , 0x30 , 0x62 , 0x0 , 0x30 , 0x66 , 0x0 , 0x70 , 0x3e , 0x0 , 0x60 , 0x1c , // Char 115 s
0x10 , 0x7c , 0x0 , 0xf0 , 0x7f , 0x0 , 0xfe , 0x61 , 0x0 , 0x3e , 0x0 , 0x0 , 0x10 , // Char 116 t
0x0 , 0x3e , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x78 , 0x0 , 0x80 , 0x7f , 0x0 , 0xf0 , 0x7 , 0x0 , 0x30 , // Char 117 u
0x10 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0xe0 , 0x7f , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xe , 0x0 , 0x80 , 0x3 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x10 , // Char 118 v
0x70 , 0x0 , 0x0 , 0xf0 , 0x7f , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xf , 0x0 , 0xc0 , 0x3 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xf , 0x0 , 0xc0 , 0x3 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x30 , // Char 119 w
0x0 , 0x40 , 0x0 , 0x0 , 0x70 , 0x0 , 0x30 , 0x38 , 0x0 , 0xf0 , 0xc , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x1f , 0x0 , 0x80 , 0x7d , 0x0 , 0xe0 , 0x60 , 0x0 , 0x70 , 0x0 , 0x0 , 0x10 , // Char 120 x
0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0xf0 , 0x87 , 0x3 , 0xf0 , 0xff , 0x1 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0xf , 0x0 , 0x80 , 0x3 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x10 , // Char 121 y
0x0 , 0x60 , 0x0 , 0x0 , 0x70 , 0x0 , 0x10 , 0x78 , 0x0 , 0x30 , 0x6c , 0x0 , 0x30 , 0x66 , 0x0 , 0x30 , 0x63 , 0x0 , 0xb0 , 0x61 , 0x0 , 0xf0 , 0x60 , 0x0 , 0x70 , 0x0 , 0x0 , 0x30 , // Char 122 z
0x0 , 0xc6 , 0x7 , 0x0 , 0xff , 0x7 , 0xf0 , 0x9 , 0x4 , 0x7e , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 123 {
0x0 , 0x0 , 0x6 , 0x0 , 0xf0 , 0x3 , 0x80 , 0x3f , 0x0 , 0xfc , 0x1 , 0x0 , 0xf , // Char 124 |
0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0xe0 , 0x3 , 0x1 , 0xfc , 0x0 , 0xfb , 0xf , 0x0 , 0x7f , 0x7 , // Char 125 }
0x80 , 0x1 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0xc0 , // Char 126 ~
};