#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Times_Italic_24[] PROGMEM = {
12 , // Width 
24 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 12, // Char 32   - Nodata
 0x0, 0x0, 0x10, 0x8, // Char 33 ! 
 0x0, 0x10, 0x13, 0x9, // Char 34 " 
 0x0, 0x23, 0x25, 0xf, // Char 35 # 
 0x0, 0x48, 0x1f, 0xd, // Char 36 $ 
 0x0, 0x67, 0x32, 0x13, // Char 37 % 
 0x0, 0x99, 0x2c, 0x11, // Char 38 & 
 0x0, 0xc5, 0x7, 0x5, // Char 39 ' 
 0x0, 0xcc, 0x10, 0x8, // Char 40 ( 
 0x0, 0xdc, 0x11, 0x8, // Char 41 ) 
 0x0, 0xed, 0x1a, 0xb, // Char 42 * 
 0x1, 0x7, 0x23, 0xe, // Char 43 + 
 0x1, 0x2a, 0x9, 0x5, // Char 44 , 
 0x1, 0x33, 0x11, 0x8, // Char 45 - 
 0x1, 0x44, 0x6, 0x4, // Char 46 . 
 0x1, 0x4a, 0x1c, 0xc, // Char 47 / 
 0x1, 0x66, 0x20, 0xd, // Char 48 0 
 0x1, 0x86, 0x16, 0xa, // Char 49 1 
 0x1, 0x9c, 0x1f, 0xd, // Char 50 2 
 0x1, 0xbb, 0x1f, 0xd, // Char 51 3 
 0x1, 0xda, 0x20, 0xd, // Char 52 4 
 0x1, 0xfa, 0x22, 0xe, // Char 53 5 
 0x2, 0x1c, 0x1f, 0xd, // Char 54 6 
 0x2, 0x3b, 0x1f, 0xd, // Char 55 7 
 0x2, 0x5a, 0x1f, 0xd, // Char 56 8 
 0x2, 0x79, 0x1f, 0xd, // Char 57 9 
 0x2, 0x98, 0xe, 0x7, // Char 58 : 
 0x2, 0xa6, 0xe, 0x7, // Char 59 ; 
 0x2, 0xb4, 0x1f, 0xd, // Char 60 < 
 0x2, 0xd3, 0x23, 0xe, // Char 61 = 
 0x2, 0xf6, 0x1d, 0xc, // Char 62 > 
 0x3, 0x13, 0x16, 0xa, // Char 63 ? 
 0x3, 0x29, 0x2f, 0x12, // Char 64 @ 
 0x3, 0x58, 0x2a, 0x10, // Char 65 A 
 0x3, 0x82, 0x28, 0x10, // Char 66 B 
 0x3, 0xaa, 0x28, 0x10, // Char 67 C 
 0x3, 0xd2, 0x32, 0x13, // Char 68 D 
 0x4, 0x4, 0x2b, 0x11, // Char 69 E 
 0x4, 0x2f, 0x28, 0x10, // Char 70 F 
 0x4, 0x57, 0x2f, 0x12, // Char 71 G 
 0x4, 0x86, 0x34, 0x14, // Char 72 H 
 0x4, 0xba, 0x19, 0xb, // Char 73 I 
 0x4, 0xd3, 0x1f, 0xd, // Char 74 J 
 0x4, 0xf2, 0x31, 0x13, // Char 75 K 
 0x5, 0x23, 0x26, 0xf, // Char 76 L 
 0x5, 0x49, 0x3d, 0x17, // Char 77 M 
 0x5, 0x86, 0x31, 0x13, // Char 78 N 
 0x5, 0xb7, 0x2f, 0x12, // Char 79 O 
 0x5, 0xe6, 0x2b, 0x11, // Char 80 P 
 0x6, 0x11, 0x2f, 0x12, // Char 81 Q 
 0x6, 0x40, 0x28, 0x10, // Char 82 R 
 0x6, 0x68, 0x22, 0xe, // Char 83 S 
 0x6, 0x8a, 0x25, 0xf, // Char 84 T 
 0x6, 0xaf, 0x2e, 0x12, // Char 85 U 
 0x6, 0xdd, 0x28, 0x10, // Char 86 V 
 0x7, 0x5, 0x3a, 0x16, // Char 87 W 
 0x7, 0x3f, 0x2b, 0x11, // Char 88 X 
 0x7, 0x6a, 0x25, 0xf, // Char 89 Y 
 0x7, 0x8f, 0x28, 0x10, // Char 90 Z 
 0x7, 0xb7, 0x16, 0xa, // Char 91 [ 
 0x7, 0xcd, 0x13, 0x9, // Char 92 Backslash 
 0x7, 0xe0, 0x16, 0xa, // Char 93 ] 
 0x7, 0xf6, 0x1a, 0xb, // Char 94 ^ 
 0x8, 0x10, 0x24, 0xe, // Char 95 _ 
 0x8, 0x34, 0xa, 0x6, // Char 96 ` 
 0x8, 0x3e, 0x20, 0xd, // Char 97 a 
 0x8, 0x5e, 0x1d, 0xc, // Char 98 b 
 0x8, 0x7b, 0x1a, 0xb, // Char 99 c 
 0x8, 0x95, 0x22, 0xe, // Char 100 d 
 0x8, 0xb7, 0x1a, 0xb, // Char 101 e 
 0x8, 0xd1, 0x1f, 0xd, // Char 102 f 
 0x8, 0xf0, 0x1f, 0xd, // Char 103 g 
 0x9, 0xf, 0x1d, 0xc, // Char 104 h 
 0x9, 0x2c, 0xd, 0x7, // Char 105 i 
 0x9, 0x39, 0x16, 0xa, // Char 106 j 
 0x9, 0x4f, 0x1f, 0xd, // Char 107 k 
 0x9, 0x6e, 0x10, 0x8, // Char 108 l 
 0x9, 0x7e, 0x2f, 0x12, // Char 109 m 
 0x9, 0xad, 0x20, 0xd, // Char 110 n 
 0x9, 0xcd, 0x1d, 0xc, // Char 111 o 
 0x9, 0xea, 0x23, 0xe, // Char 112 p 
 0xa, 0xd, 0x1f, 0xd, // Char 113 q 
 0xa, 0x2c, 0x19, 0xb, // Char 114 r 
 0xa, 0x45, 0x19, 0xb, // Char 115 s 
 0xa, 0x5e, 0x10, 0x8, // Char 116 t 
 0xa, 0x6e, 0x1d, 0xc, // Char 117 u 
 0xa, 0x8b, 0x1a, 0xb, // Char 118 v 
 0xa, 0xa5, 0x2b, 0x11, // Char 119 w 
 0xa, 0xd0, 0x1f, 0xd, // Char 120 x 
 0xa, 0xef, 0x1d, 0xc, // Char 121 y 
 0xb, 0xc, 0x1b, 0xb, // Char 122 z 
 0xb, 0x27, 0x16, 0xa, // Char 123 { 
 0xb, 0x3d, 0x3, 0x3, // Char 124 | 
 0xb, 0x40, 0x14, 0x9, // Char 125 } 
 0xb, 0x54, 0x1d, 0xc, // Char 126 ~ 

// Data Table:
0x0 , 0x80 , 0x1 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x1e , 0x0 , 0xf0 , 0x3 , 0x0 , 0xfe , 0x0 , 0x0 , 0x1e , // Char 33 !
0x40 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0xe , // Char 34 "
0x0 , 0x4 , 0x0 , 0x0 , 0xc4 , 0x1 , 0x20 , 0x7c , 0x0 , 0x20 , 0xf , 0x0 , 0xe0 , 0x7 , 0x0 , 0x78 , 0x84 , 0x1 , 0x2f , 0xf4 , 0x1 , 0x21 , 0x3e , 0x0 , 0xe0 , 0xf , 0x0 , 0xf0 , 0x4 , 0x0 , 0x3e , 0x4 , 0x0 , 0x27 , 0x0 , 0x0 , 0x20 , // Char 35 #
0x0 , 0xf0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x3c , 0x0 , 0x1 , 0x7e , 0x0 , 0x7 , 0xe3 , 0xf8 , 0x1 , 0xc1 , 0xf , 0x1 , 0xf9 , 0x3 , 0x1 , 0x7 , 0x87 , 0x0 , 0x1 , 0xfe , 0x0 , 0x6 , 0x3c , 0x0 , 0xe , // Char 36 $
0xf0 , 0x1 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x1c , 0x2 , 0x0 , 0x6 , 0x2 , 0x1 , 0x2 , 0x81 , 0x1 , 0x2 , 0x61 , 0x0 , 0x46 , 0x18 , 0x0 , 0xe , 0xe , 0x0 , 0x82 , 0x3 , 0x0 , 0xe2 , 0x78 , 0x0 , 0x3a , 0xfc , 0x1 , 0xe , 0x1f , 0x1 , 0x3 , 0x3 , 0x1 , 0x81 , 0x1 , 0x1 , 0x80 , 0x80 , 0x0 , 0x80 , 0x60 , 0x0 , 0x0 , 0x1f , // Char 37 %
0x0 , 0x78 , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0xc6 , 0x1 , 0x0 , 0x82 , 0x1 , 0x0 , 0x1 , 0x1 , 0x0 , 0x0 , 0x1 , 0xf8 , 0x83 , 0x1 , 0xfc , 0x9f , 0x0 , 0x42 , 0x7e , 0x0 , 0x2 , 0xf0 , 0x0 , 0x3e , 0xf0 , 0x1 , 0x1c , 0x89 , 0x1 , 0x0 , 0x87 , 0x1 , 0x0 , 0x3 , 0x1 , 0x0 , 0x81 , // Char 38 &
0x78 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x6 , // Char 39 '
0x0 , 0xfe , 0x1 , 0xc0 , 0xff , 0xf , 0xf0 , 0x1 , 0x10 , 0x38 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x2 , // Char 40 (
0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x7 , 0x2 , 0xe0 , 0x1 , 0xfc , 0xff , 0x0 , 0xe0 , 0x1f , // Char 41 )
0x18 , 0x1 , 0x0 , 0x98 , 0x1 , 0x0 , 0xb0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x60 , 0x0 , 0x0 , 0xb0 , 0x0 , 0x0 , 0x98 , 0x1 , 0x0 , 0x18 , 0x1 , // Char 42 *
0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0xe0 , 0xff , 0x1 , 0xf0 , 0xff , 0x1 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , // Char 43 +
0x0 , 0x0 , 0x8 , 0x0 , 0xc0 , 0x7 , 0x0 , 0xc0 , 0x3 , // Char 44 ,
0x0 , 0x8 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , // Char 45 -
0x0 , 0xc0 , 0x1 , 0x0 , 0xc0 , 0x1 , // Char 46 .
0x0 , 0x80 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1e , 0x0 , 0x80 , 0x7 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x70 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , // Char 47 /
0x80 , 0x7f , 0x0 , 0xf0 , 0xff , 0x0 , 0xf8 , 0x0 , 0x1 , 0x1c , 0x0 , 0x1 , 0x6 , 0x0 , 0x1 , 0x1 , 0x80 , 0x1 , 0x1 , 0xc0 , 0x0 , 0x1 , 0x70 , 0x0 , 0x3 , 0x3f , 0x0 , 0xfe , 0xf , 0x0 , 0xf8 , 0x3 , // Char 48 0
0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xfe , 0x1 , 0xe2 , 0x1f , 0x1 , 0xfe , 0x3 , 0x0 , 0x3f , 0x0 , 0x0 , 0x3 , // Char 49 1
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x8 , 0xc0 , 0x1 , 0x6 , 0xa0 , 0x1 , 0x2 , 0x90 , 0x1 , 0x3 , 0x88 , 0x1 , 0x3 , 0x86 , 0x1 , 0x3 , 0x83 , 0x1 , 0xcf , 0x81 , 0x1 , 0xfe , 0x40 , 0x0 , 0x3c , // Char 50 2
0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x82 , 0x0 , 0x1 , 0xc1 , 0x81 , 0x0 , 0xc1 , 0x63 , 0x0 , 0x23 , 0x3f , 0x0 , 0x3f , 0xe , 0x0 , 0x1e , // Char 51 3
0x0 , 0x18 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x1a , 0x0 , 0x0 , 0x19 , 0x0 , 0xc0 , 0x18 , 0x0 , 0x60 , 0x98 , 0x1 , 0x30 , 0xf8 , 0x1 , 0x8 , 0x7f , 0x0 , 0xfc , 0x1f , 0x0 , 0xfe , 0x18 , 0x0 , 0xf , 0x8 , // Char 52 4
0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x1 , 0x20 , 0x0 , 0x1 , 0x3c , 0x0 , 0x1 , 0x73 , 0x0 , 0x1 , 0x63 , 0x80 , 0x0 , 0xe3 , 0x40 , 0x0 , 0xc3 , 0x3f , 0x0 , 0x83 , 0x1f , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 53 5
0x0 , 0x7f , 0x0 , 0xc0 , 0xff , 0x0 , 0xe0 , 0x1 , 0x1 , 0xf0 , 0x0 , 0x1 , 0x78 , 0x0 , 0x1 , 0x4c , 0x0 , 0x1 , 0x46 , 0x80 , 0x0 , 0xc2 , 0xf0 , 0x0 , 0x82 , 0x7f , 0x0 , 0x1 , 0x1f , 0x0 , 0x1 , // Char 54 6
0x4 , 0x0 , 0x1 , 0x3 , 0xc0 , 0x1 , 0x3 , 0x70 , 0x0 , 0x3 , 0x38 , 0x0 , 0x3 , 0xe , 0x0 , 0x83 , 0x3 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x33 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 55 7
0x0 , 0x7c , 0x0 , 0x0 , 0xfe , 0x0 , 0x1c , 0x2 , 0x1 , 0x7e , 0x1 , 0x1 , 0xf3 , 0x1 , 0x1 , 0xc1 , 0x1 , 0x1 , 0x81 , 0x3 , 0x1 , 0x41 , 0xcf , 0x0 , 0x63 , 0x7e , 0x0 , 0x3e , 0x38 , 0x0 , 0x1c , // Char 56 8
0x0 , 0x0 , 0x1 , 0xf8 , 0x3 , 0x1 , 0xfc , 0x7 , 0x1 , 0x6 , 0x86 , 0x0 , 0x3 , 0xc4 , 0x0 , 0x1 , 0x64 , 0x0 , 0x1 , 0x34 , 0x0 , 0x1 , 0x1e , 0x0 , 0x82 , 0xf , 0x0 , 0xfe , 0x7 , 0x0 , 0xf8 , // Char 57 9
0x0 , 0x80 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x80 , 0x1 , 0xc0 , 0x1 , 0x0 , 0xc0 , 0x1 , // Char 58 :
0x0 , 0x80 , 0x8 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x80 , 0x3 , 0xc0 , 0x1 , 0x0 , 0xc0 , 0x1 , // Char 59 ;
0x0 , 0x3 , 0x0 , 0x80 , 0x7 , 0x0 , 0x80 , 0xf , 0x0 , 0x40 , 0x1e , 0x0 , 0x40 , 0x1c , 0x0 , 0x20 , 0x38 , 0x0 , 0x20 , 0x70 , 0x0 , 0x10 , 0x60 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x4 , // Char 60 <
0x80 , 0x31 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x31 , // Char 61 =
0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x18 , 0x20 , 0x0 , 0x38 , 0x10 , 0x0 , 0x78 , 0x10 , 0x0 , 0xf0 , 0x8 , 0x0 , 0xe0 , 0x8 , 0x0 , 0xc0 , 0x5 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0x3 , // Char 62 >
0x0 , 0x80 , 0x1 , 0x8 , 0xc0 , 0x1 , 0x1c , 0x8c , 0x0 , 0x2 , 0x2 , 0x0 , 0x2 , 0x1 , 0x0 , 0xc2 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x7c , // Char 63 ?
0xc0 , 0xf , 0x0 , 0xf0 , 0x3f , 0x0 , 0x38 , 0x70 , 0x0 , 0xc , 0xc0 , 0x0 , 0x4 , 0x80 , 0x0 , 0x86 , 0x8f , 0x1 , 0xc2 , 0x1f , 0x1 , 0x62 , 0x10 , 0x1 , 0x22 , 0x8 , 0x1 , 0x2 , 0xc , 0x1 , 0x82 , 0xf , 0x1 , 0xe6 , 0x9f , 0x1 , 0x64 , 0x90 , 0x0 , 0xc , 0x90 , 0x0 , 0x18 , 0xc , 0x0 , 0xf0 , 0x7 , // Char 64 @
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x38 , 0x1 , 0x0 , 0xc , 0x0 , 0x0 , 0x7 , 0x0 , 0xc0 , 0x4 , 0x0 , 0x30 , 0x4 , 0x0 , 0xc , 0x4 , 0x0 , 0xff , 0x4 , 0x1 , 0xff , 0xff , 0x1 , 0xc0 , 0xff , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 65 A
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xff , 0x1 , 0xe2 , 0x3f , 0x1 , 0xfe , 0x3 , 0x1 , 0x3e , 0x1 , 0x1 , 0x6 , 0x1 , 0x1 , 0x2 , 0x81 , 0x1 , 0x2 , 0xc3 , 0x1 , 0x82 , 0xff , 0x0 , 0xee , 0x7e , 0x0 , 0x7c , 0x3c , 0x0 , 0x38 , // Char 66 B
0x80 , 0x3f , 0x0 , 0xe0 , 0x7f , 0x0 , 0xf0 , 0xf1 , 0x0 , 0x38 , 0x80 , 0x1 , 0x1c , 0x80 , 0x1 , 0xc , 0x0 , 0x1 , 0x6 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x80 , 0x1 , 0x2 , 0x80 , 0x0 , 0x2 , 0x40 , 0x0 , 0x6 , 0x20 , 0x0 , 0xe , 0x0 , 0x0 , 0x3e , // Char 67 C
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xff , 0x1 , 0xe2 , 0x3f , 0x1 , 0xfe , 0x3 , 0x1 , 0x3e , 0x0 , 0x1 , 0x6 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x80 , 0x1 , 0x2 , 0x80 , 0x0 , 0x2 , 0xc0 , 0x0 , 0x6 , 0x60 , 0x0 , 0xc , 0x7c , 0x0 , 0xfc , 0x3f , 0x0 , 0xf8 , 0xf , 0x0 , 0xe0 , 0x3 , // Char 68 D
0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xfe , 0x1 , 0xe2 , 0x3f , 0x1 , 0xfe , 0x3 , 0x1 , 0x7e , 0x1 , 0x1 , 0x6 , 0x1 , 0x1 , 0x2 , 0x1 , 0x1 , 0x2 , 0x3 , 0x1 , 0x82 , 0x83 , 0x1 , 0x42 , 0x80 , 0x1 , 0x2 , 0xc0 , 0x0 , 0x6 , 0x0 , 0x0 , 0xe , // Char 69 E
0x0 , 0x0 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xfc , 0x1 , 0xc2 , 0xff , 0x1 , 0xfe , 0x7 , 0x1 , 0xfe , 0x1 , 0x0 , 0xe , 0x1 , 0x0 , 0x2 , 0x1 , 0x0 , 0x2 , 0x1 , 0x0 , 0x82 , 0x7 , 0x0 , 0xc2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0xe , // Char 70 F
0x0 , 0xe , 0x0 , 0xc0 , 0x3f , 0x0 , 0xe0 , 0xff , 0x0 , 0xf0 , 0xc0 , 0x0 , 0x38 , 0x80 , 0x1 , 0xc , 0x0 , 0x1 , 0x4 , 0x0 , 0x1 , 0x6 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x2 , 0x81 , 0x0 , 0x2 , 0xf9 , 0x0 , 0x6 , 0xff , 0x0 , 0x4 , 0x1f , 0x0 , 0x1c , 0x3 , 0x0 , 0x6 , 0x1 , // Char 71 G
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xff , 0x1 , 0xe2 , 0x3f , 0x1 , 0xfe , 0x3 , 0x0 , 0x3e , 0x1 , 0x0 , 0x6 , 0x1 , 0x0 , 0x2 , 0x1 , 0x0 , 0x0 , 0x1 , 0x1 , 0x0 , 0x1 , 0x1 , 0x0 , 0xe1 , 0x1 , 0x0 , 0xff , 0x1 , 0xe2 , 0x3f , 0x1 , 0xfe , 0x7 , 0x1 , 0x7e , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x2 , // Char 72 H
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xff , 0x1 , 0xf2 , 0x3f , 0x1 , 0xfe , 0x3 , 0x0 , 0x3e , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x2 , // Char 73 I
0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xfc , 0x0 , 0xc2 , 0x3f , 0x0 , 0xfe , 0xf , 0x0 , 0xfe , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x2 , // Char 74 J
0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xfc , 0x1 , 0xc2 , 0xff , 0x1 , 0xfe , 0x7 , 0x1 , 0xfe , 0x1 , 0x0 , 0x8e , 0x7 , 0x0 , 0xc2 , 0x1f , 0x0 , 0x42 , 0x7c , 0x1 , 0x20 , 0xf0 , 0x1 , 0x10 , 0xe0 , 0x1 , 0x1a , 0x80 , 0x1 , 0xe , 0x0 , 0x1 , 0x6 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 75 K
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xff , 0x1 , 0xe2 , 0x1f , 0x1 , 0xfe , 0x3 , 0x1 , 0x3e , 0x0 , 0x1 , 0x6 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0xe0 , // Char 76 L
0x0 , 0x0 , 0x1 , 0x0 , 0xc0 , 0x1 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xf , 0x1 , 0xf2 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0xfe , 0xff , 0x1 , 0x0 , 0xfe , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x6 , 0x1 , 0x0 , 0x3 , 0x1 , 0xc0 , 0xc0 , 0x1 , 0x60 , 0xf8 , 0x1 , 0x98 , 0xff , 0x1 , 0xfc , 0x1f , 0x1 , 0xfe , 0x1 , 0x0 , 0x1e , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 77 M
0x0 , 0x0 , 0x1 , 0x0 , 0xc0 , 0x1 , 0x0 , 0xf8 , 0x1 , 0x82 , 0xf , 0x1 , 0xf2 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x3c , 0x0 , 0xc2 , 0x3 , 0x0 , 0x7e , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x2 , // Char 78 N
0x0 , 0xc , 0x0 , 0x80 , 0x7f , 0x0 , 0xc0 , 0xff , 0x0 , 0xf0 , 0x81 , 0x1 , 0x78 , 0x0 , 0x1 , 0x18 , 0x0 , 0x1 , 0xc , 0x0 , 0x1 , 0x4 , 0x0 , 0x1 , 0x2 , 0x80 , 0x1 , 0x2 , 0x80 , 0x0 , 0x2 , 0xe0 , 0x0 , 0x2 , 0x70 , 0x0 , 0x6 , 0x3e , 0x0 , 0xfc , 0x1f , 0x0 , 0xf8 , 0x7 , 0x0 , 0xe0 , 0x1 , // Char 79 O
0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xfe , 0x1 , 0xe2 , 0x3f , 0x1 , 0xfe , 0x3 , 0x1 , 0x7e , 0x1 , 0x0 , 0x6 , 0x1 , 0x0 , 0x2 , 0x1 , 0x0 , 0x2 , 0x1 , 0x0 , 0x82 , 0x1 , 0x0 , 0xc6 , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x10 , // Char 80 P
0x0 , 0x1c , 0x0 , 0x80 , 0x7f , 0x8 , 0xc0 , 0xff , 0x8 , 0xf0 , 0x81 , 0xd , 0x78 , 0x0 , 0xf , 0x18 , 0x0 , 0xd , 0xc , 0x0 , 0x19 , 0x4 , 0x0 , 0x19 , 0x2 , 0x80 , 0x19 , 0x2 , 0x80 , 0x18 , 0x2 , 0xe0 , 0x18 , 0x2 , 0x70 , 0x18 , 0x6 , 0x3e , 0x8 , 0xfc , 0x1f , 0x4 , 0xf8 , 0x7 , 0x0 , 0xe0 , 0x1 , // Char 81 Q
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xff , 0x1 , 0xf2 , 0x1f , 0x1 , 0xfe , 0x1 , 0x0 , 0x3e , 0x1 , 0x0 , 0x2 , 0x3 , 0x0 , 0x2 , 0x1f , 0x0 , 0x2 , 0xff , 0x0 , 0x82 , 0xf1 , 0x1 , 0xee , 0xc0 , 0x1 , 0xfc , 0x0 , 0x1 , 0x78 , // Char 82 R
0x0 , 0x0 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x78 , 0x0 , 0x1 , 0xfc , 0x0 , 0x1 , 0xe6 , 0x1 , 0x1 , 0x82 , 0x3 , 0x1 , 0x2 , 0x87 , 0x1 , 0x2 , 0xfe , 0x0 , 0x2 , 0x7c , 0x0 , 0xe , 0x0 , 0x0 , 0x1e , // Char 83 S
0xe , 0x0 , 0x1 , 0x6 , 0x0 , 0x1 , 0x2 , 0xe0 , 0x1 , 0x2 , 0xfe , 0x1 , 0xc2 , 0x7f , 0x1 , 0xfe , 0x7 , 0x1 , 0x7e , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0xe , // Char 84 T
0x0 , 0x30 , 0x0 , 0x2 , 0xff , 0x0 , 0xf2 , 0xff , 0x0 , 0xfe , 0x81 , 0x1 , 0x3e , 0x0 , 0x1 , 0x6 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x1e , 0x0 , 0xe2 , 0x3 , 0x0 , 0x3e , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x2 , // Char 85 U
0x2 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0xfe , 0x3 , 0x0 , 0xfe , 0xff , 0x0 , 0x82 , 0xff , 0x1 , 0x0 , 0x60 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x3 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x62 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x2 , // Char 86 V
0x2 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0xfe , 0xff , 0x1 , 0x2 , 0x7c , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x6 , 0x0 , 0x82 , 0x1 , 0x0 , 0x66 , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0xfe , 0xff , 0x1 , 0x2 , 0xff , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xe , 0x0 , 0x80 , 0x3 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x3a , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 87 W
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x2 , 0xc0 , 0x1 , 0x2 , 0x60 , 0x1 , 0xe , 0x10 , 0x0 , 0x7e , 0x8 , 0x0 , 0xfe , 0x7 , 0x0 , 0xe2 , 0xf , 0x1 , 0x80 , 0x3f , 0x1 , 0xc0 , 0xfc , 0x1 , 0x20 , 0xe0 , 0x1 , 0x1a , 0x80 , 0x1 , 0xe , 0x0 , 0x1 , 0x6 , 0x0 , 0x0 , 0x2 , // Char 88 X
0x0 , 0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x1e , 0xc0 , 0x1 , 0xfe , 0xf9 , 0x1 , 0xfa , 0xff , 0x1 , 0x82 , 0xf , 0x1 , 0x0 , 0x1 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x32 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x2 , // Char 89 Y
0x0 , 0x0 , 0x1 , 0x0 , 0xc0 , 0x1 , 0xc , 0xe0 , 0x1 , 0x6 , 0x70 , 0x1 , 0x2 , 0x38 , 0x1 , 0x2 , 0x1e , 0x1 , 0x2 , 0xf , 0x1 , 0x82 , 0x3 , 0x1 , 0xc2 , 0x1 , 0x1 , 0xf2 , 0x0 , 0x1 , 0x7a , 0x80 , 0x1 , 0x1e , 0x80 , 0x1 , 0xe , 0x60 , 0x0 , 0x6 , // Char 90 Z
0x0 , 0x0 , 0x1f , 0x0 , 0xf0 , 0x1f , 0x80 , 0xff , 0x10 , 0xf8 , 0x7 , 0x10 , 0x7f , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 91 [
0x40 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0xe , // Char 92 Backslash
0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x1e , 0x0 , 0xf0 , 0x1f , 0x1 , 0xff , 0x0 , 0xf9 , 0xf , 0x0 , 0xff , 0x0 , 0x0 , 0x7 , // Char 93 ]
0x0 , 0x1 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x70 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x80 , 0x1 , // Char 94 ^
0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , // Char 95 _
0x2 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x10 , // Char 96 `
0x0 , 0x60 , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0xfe , 0x1 , 0x0 , 0x7 , 0x1 , 0x80 , 0x81 , 0x1 , 0xc0 , 0x80 , 0x0 , 0x40 , 0x40 , 0x0 , 0x40 , 0xf0 , 0x1 , 0xc0 , 0xfe , 0x1 , 0xc0 , 0x9f , 0x0 , 0xc0 , 0x1 , // Char 97 a
0x0 , 0xf0 , 0x1 , 0x0 , 0xff , 0x1 , 0xf1 , 0xf , 0x1 , 0xff , 0x3 , 0x1 , 0xf , 0x1 , 0x1 , 0x80 , 0x80 , 0x0 , 0x40 , 0xc0 , 0x0 , 0xc0 , 0x70 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x80 , 0xf , // Char 98 b
0x0 , 0xfc , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x83 , 0x1 , 0x80 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x80 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x80 , 0x1 , // Char 99 c
0x0 , 0x60 , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0xfe , 0x1 , 0x0 , 0x87 , 0x1 , 0x80 , 0x81 , 0x1 , 0xc0 , 0x80 , 0x0 , 0x40 , 0x40 , 0x0 , 0x40 , 0xf0 , 0x1 , 0x80 , 0xff , 0x1 , 0xe1 , 0x8f , 0x0 , 0xff , 0x0 , 0x0 , 0xf , // Char 100 d
0x0 , 0xf8 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x8f , 0x1 , 0x80 , 0x9 , 0x1 , 0x80 , 0x8 , 0x1 , 0x40 , 0x84 , 0x0 , 0x40 , 0x86 , 0x0 , 0xc0 , 0x43 , 0x0 , 0x80 , 0x1 , // Char 101 e
0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x1c , 0x40 , 0xc0 , 0xf , 0x40 , 0xfe , 0x3 , 0xe0 , 0x3f , 0x0 , 0xf8 , 0x1 , 0x0 , 0x4e , 0x0 , 0x0 , 0x43 , 0x0 , 0x0 , 0x41 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 102 f
0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x1e , 0x0 , 0x46 , 0x21 , 0x80 , 0xef , 0x20 , 0x80 , 0xd9 , 0x20 , 0x40 , 0x90 , 0x21 , 0x40 , 0x90 , 0x21 , 0x40 , 0x98 , 0x13 , 0xc0 , 0xf , 0xf , 0x80 , 0x7 , 0x0 , 0x80 , // Char 103 g
0x0 , 0xe0 , 0x1 , 0x0 , 0xfe , 0x0 , 0xe1 , 0x1f , 0x0 , 0xff , 0x4 , 0x0 , 0xf , 0x3 , 0x0 , 0x81 , 0x0 , 0x0 , 0x80 , 0xe0 , 0x1 , 0xc0 , 0xfe , 0x1 , 0xc0 , 0x1f , 0x1 , 0x80 , 0x1 , // Char 104 h
0x0 , 0xc0 , 0x1 , 0x0 , 0xfc , 0x1 , 0xc0 , 0x3f , 0x1 , 0xc6 , 0x83 , 0x0 , 0xe , // Char 105 i
0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x1f , 0x40 , 0xf0 , 0x7 , 0xc0 , 0xff , 0x0 , 0xc4 , 0xf , 0x0 , 0xce , 0x0 , 0x0 , 0x4 , // Char 106 j
0x0 , 0x0 , 0x1 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xff , 0x0 , 0xf1 , 0xf , 0x0 , 0xff , 0xc , 0x0 , 0xf , 0x7e , 0x0 , 0x0 , 0xf2 , 0x0 , 0xc0 , 0xc1 , 0x1 , 0xc0 , 0x0 , 0x1 , 0x40 , 0x0 , 0x0 , 0x40 , // Char 107 k
0x0 , 0xe0 , 0x1 , 0x0 , 0xfe , 0x1 , 0xe1 , 0x1f , 0x1 , 0xff , 0x1 , 0x0 , 0x1f , 0x0 , 0x0 , 0x1 , // Char 108 l
0x0 , 0x0 , 0x1 , 0x0 , 0xf0 , 0x1 , 0xc0 , 0xff , 0x0 , 0xc0 , 0x1f , 0x0 , 0xc0 , 0x4 , 0x0 , 0x0 , 0x3 , 0x0 , 0x80 , 0x0 , 0x1 , 0xc0 , 0xf0 , 0x1 , 0xc0 , 0xff , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x80 , 0x0 , 0xc0 , 0xf8 , 0x1 , 0xc0 , 0x7f , 0x1 , 0xc0 , 0x87 , // Char 109 m
0x0 , 0x0 , 0x1 , 0x0 , 0xf0 , 0x1 , 0xc0 , 0xff , 0x0 , 0xc0 , 0x1f , 0x0 , 0xc0 , 0x4 , 0x0 , 0x0 , 0x3 , 0x0 , 0x80 , 0x0 , 0x0 , 0x40 , 0xe0 , 0x1 , 0xc0 , 0xff , 0x1 , 0xc0 , 0xf , 0x0 , 0x80 , 0x1 , // Char 110 n
0x0 , 0xfc , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x7 , 0x1 , 0x80 , 0x1 , 0x1 , 0xc0 , 0x0 , 0x1 , 0x40 , 0x80 , 0x1 , 0x40 , 0xc0 , 0x0 , 0x40 , 0x70 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x80 , 0xf , // Char 111 o
0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x3e , 0x0 , 0xe0 , 0x3f , 0x40 , 0xfe , 0x21 , 0xc0 , 0x1f , 0x1 , 0xc0 , 0x3 , 0x1 , 0x80 , 0x0 , 0x1 , 0x0 , 0x80 , 0x0 , 0x40 , 0xc0 , 0x0 , 0xc0 , 0x70 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x80 , 0xf , // Char 112 p
0x0 , 0xf8 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x87 , 0x1 , 0x80 , 0x81 , 0x21 , 0x80 , 0x80 , 0x20 , 0x40 , 0x40 , 0x3c , 0x40 , 0xe0 , 0x3f , 0x40 , 0xfc , 0x23 , 0x80 , 0x3f , 0x0 , 0xc0 , 0x3 , 0x0 , 0x40 , // Char 113 q
0x0 , 0x80 , 0x1 , 0x40 , 0xf8 , 0x1 , 0xc0 , 0x7f , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x2 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , // Char 114 r
0x0 , 0x80 , 0x1 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x80 , 0x7 , 0x1 , 0xc0 , 0x1f , 0x1 , 0x40 , 0xfc , 0x1 , 0x40 , 0xf0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , // Char 115 s
0x0 , 0xe0 , 0x1 , 0x40 , 0xfe , 0x1 , 0xe0 , 0x9f , 0x0 , 0xf0 , 0x1 , 0x0 , 0x58 , 0x0 , 0x0 , 0x40 , // Char 116 t
0x0 , 0xe0 , 0x1 , 0x40 , 0xfe , 0x1 , 0xc0 , 0x9f , 0x1 , 0xc0 , 0x80 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xff , 0x1 , 0xc0 , 0x9f , 0x1 , 0xc0 , 0x41 , // Char 117 u
0x40 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0xc0 , 0xff , 0x1 , 0x0 , 0xfe , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x10 , 0x0 , 0xc0 , 0xc , 0x0 , 0xc0 , 0x3 , // Char 118 v
0x40 , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0xc0 , 0xff , 0x1 , 0x0 , 0x70 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x2 , 0x0 , 0x80 , 0x1f , 0x0 , 0xc0 , 0xff , 0x1 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x10 , 0x0 , 0x40 , 0x8 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x80 , // Char 119 w
0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x1 , 0x40 , 0x80 , 0x0 , 0x40 , 0x20 , 0x0 , 0xc0 , 0x17 , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0xfa , 0x1 , 0x0 , 0x81 , 0x1 , 0xc0 , 0x80 , 0x0 , 0xc0 , 0x40 , 0x0 , 0x40 , // Char 120 x
0x0 , 0x0 , 0x30 , 0x40 , 0x0 , 0x30 , 0xc0 , 0x0 , 0x10 , 0xc0 , 0x7 , 0x8 , 0x80 , 0x7f , 0x4 , 0x0 , 0xfc , 0x1 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x20 , 0x0 , 0xc0 , 0x8 , 0x0 , 0xc0 , 0x3 , // Char 121 y
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0xc0 , 0xc0 , 0x1 , 0xc0 , 0x30 , 0x3 , 0xc0 , 0x8 , 0x3 , 0xc0 , 0x4 , 0x6 , 0xc0 , 0x2 , 0x4 , 0xc0 , 0x0 , 0x7 , 0x40 , 0x0 , 0x2 , // Char 122 z
0x0 , 0x0 , 0x1c , 0x0 , 0xec , 0x1f , 0x0 , 0xfe , 0x23 , 0xc0 , 0x13 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x3e , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 123 {
0xff , 0xff , 0x7f , // Char 124 |
0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x1c , 0x0 , 0xc0 , 0xf , 0x0 , 0xf0 , 0x3 , 0xc0 , 0x3b , 0x0 , 0xff , 0xf , 0x0 , 0x3f , 0x4 , // Char 125 }
0x0 , 0x4 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x4 , // Char 126 ~
};
