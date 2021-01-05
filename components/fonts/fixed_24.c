#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_fixed_24[] PROGMEM = {
12 , // Width 
24 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 12, // Char 32   - Nodata
 0x0, 0x0, 0x6, 0x4, // Char 33 ! 
 0x0, 0x6, 0x10, 0x8, // Char 34 " 
 0x0, 0x16, 0x25, 0xf, // Char 35 # 
 0x0, 0x3b, 0x23, 0xe, // Char 36 $ 
 0x0, 0x5e, 0x3b, 0x16, // Char 37 % 
 0x0, 0x99, 0x2a, 0x10, // Char 38 & 
 0x0, 0xc3, 0x4, 0x4, // Char 39 ' 
 0x0, 0xc7, 0xf, 0x7, // Char 40 ( 
 0x0, 0xd6, 0xe, 0x7, // Char 41 ) 
 0x0, 0xe4, 0x13, 0x9, // Char 42 * 
 0x0, 0xf7, 0x23, 0xe, // Char 43 + 
 0x1, 0x1a, 0x9, 0x5, // Char 44 , 
 0x1, 0x23, 0x11, 0x8, // Char 45 - 
 0x1, 0x34, 0x9, 0x5, // Char 46 . 
 0x1, 0x3d, 0x13, 0x9, // Char 47 / 
 0x1, 0x50, 0x20, 0xd, // Char 48 0 
 0x1, 0x70, 0x12, 0x8, // Char 49 1 
 0x1, 0x82, 0x21, 0xd, // Char 50 2 
 0x1, 0xa3, 0x20, 0xd, // Char 51 3 
 0x1, 0xc3, 0x23, 0xe, // Char 52 4 
 0x1, 0xe6, 0x20, 0xd, // Char 53 5 
 0x2, 0x6, 0x20, 0xd, // Char 54 6 
 0x2, 0x26, 0x22, 0xe, // Char 55 7 
 0x2, 0x48, 0x20, 0xd, // Char 56 8 
 0x2, 0x68, 0x20, 0xd, // Char 57 9 
 0x2, 0x88, 0x6, 0x4, // Char 58 : 
 0x2, 0x8e, 0x6, 0x4, // Char 59 ; 
 0x2, 0x94, 0x24, 0xe, // Char 60 < 
 0x2, 0xb8, 0x23, 0xe, // Char 61 = 
 0x2, 0xdb, 0x23, 0xe, // Char 62 > 
 0x2, 0xfe, 0x1c, 0xc, // Char 63 ? 
 0x3, 0x1a, 0x41, 0x18, // Char 64 @ 
 0x3, 0x5b, 0x2d, 0x11, // Char 65 A 
 0x3, 0x88, 0x26, 0xf, // Char 66 B 
 0x3, 0xae, 0x2c, 0x11, // Char 67 C 
 0x3, 0xda, 0x29, 0x10, // Char 68 D 
 0x4, 0x3, 0x27, 0xf, // Char 69 E 
 0x4, 0x2a, 0x22, 0xe, // Char 70 F 
 0x4, 0x4c, 0x30, 0x12, // Char 71 G 
 0x4, 0x7c, 0x27, 0xf, // Char 72 H 
 0x4, 0xa3, 0x9, 0x5, // Char 73 I 
 0x4, 0xac, 0x1d, 0xc, // Char 74 J 
 0x4, 0xc9, 0x27, 0xf, // Char 75 K 
 0x4, 0xf0, 0x21, 0xd, // Char 76 L 
 0x5, 0x11, 0x30, 0x12, // Char 77 M 
 0x5, 0x41, 0x2a, 0x10, // Char 78 N 
 0x5, 0x6b, 0x32, 0x13, // Char 79 O 
 0x5, 0x9d, 0x25, 0xf, // Char 80 P 
 0x5, 0xc2, 0x32, 0x13, // Char 81 Q 
 0x5, 0xf4, 0x2a, 0x10, // Char 82 R 
 0x6, 0x1e, 0x29, 0x10, // Char 83 S 
 0x6, 0x47, 0x28, 0x10, // Char 84 T 
 0x6, 0x6f, 0x29, 0x10, // Char 85 U 
 0x6, 0x98, 0x28, 0x10, // Char 86 V 
 0x6, 0xc0, 0x3d, 0x17, // Char 87 W 
 0x6, 0xfd, 0x2a, 0x10, // Char 88 X 
 0x7, 0x27, 0x2b, 0x11, // Char 89 Y 
 0x7, 0x52, 0x27, 0xf, // Char 90 Z 
 0x7, 0x79, 0xf, 0x7, // Char 91 [ 
 0x7, 0x88, 0x10, 0x8, // Char 92 Backslash 
 0x7, 0x98, 0xc, 0x6, // Char 93 ] 
 0x7, 0xa4, 0x1a, 0xb, // Char 94 ^ 
 0x7, 0xbe, 0x2d, 0x11, // Char 95 _ 
 0x7, 0xeb, 0xa, 0x6, // Char 96 ` 
 0x7, 0xf5, 0x24, 0xe, // Char 97 a 
 0x8, 0x19, 0x23, 0xe, // Char 98 b 
 0x8, 0x3c, 0x1d, 0xc, // Char 99 c 
 0x8, 0x59, 0x21, 0xd, // Char 100 d 
 0x8, 0x7a, 0x20, 0xd, // Char 101 e 
 0x8, 0x9a, 0x10, 0x8, // Char 102 f 
 0x8, 0xaa, 0x21, 0xd, // Char 103 g 
 0x8, 0xcb, 0x1e, 0xc, // Char 104 h 
 0x8, 0xe9, 0x9, 0x5, // Char 105 i 
 0x8, 0xf2, 0xc, 0x6, // Char 106 j 
 0x8, 0xfe, 0x21, 0xd, // Char 107 k 
 0x9, 0x1f, 0x6, 0x4, // Char 108 l 
 0x9, 0x25, 0x30, 0x12, // Char 109 m 
 0x9, 0x55, 0x1e, 0xc, // Char 110 n 
 0x9, 0x73, 0x20, 0xd, // Char 111 o 
 0x9, 0x93, 0x23, 0xe, // Char 112 p 
 0x9, 0xb6, 0x21, 0xd, // Char 113 q 
 0x9, 0xd7, 0x10, 0x8, // Char 114 r 
 0x9, 0xe7, 0x1d, 0xc, // Char 115 s 
 0xa, 0x4, 0x12, 0x8, // Char 116 t 
 0xa, 0x16, 0x21, 0xd, // Char 117 u 
 0xa, 0x37, 0x22, 0xe, // Char 118 v 
 0xa, 0x59, 0x31, 0x13, // Char 119 w 
 0xa, 0x8a, 0x1e, 0xc, // Char 120 x 
 0xa, 0xa8, 0x1c, 0xc, // Char 121 y 
 0xa, 0xc4, 0x1e, 0xc, // Char 122 z 
 0xa, 0xe2, 0x12, 0x8, // Char 123 { 
 0xa, 0xf4, 0x6, 0x4, // Char 124 | 
 0xa, 0xfa, 0xe, 0x7, // Char 125 } 
 0xb, 0x8, 0x1d, 0xc, // Char 126 ~ 

// Data Table:
0xff , 0x9f , 0x3 , 0xff , 0x9f , 0x3 , // Char 33 !
0xf , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x3f , // Char 34 "
0x0 , 0x10 , 0x0 , 0x60 , 0x18 , 0x0 , 0x60 , 0xd8 , 0x3 , 0x60 , 0xff , 0x3 , 0xf8 , 0x3f , 0x0 , 0xff , 0x18 , 0x0 , 0x66 , 0x18 , 0x0 , 0x60 , 0xf8 , 0x3 , 0xe0 , 0xff , 0x3 , 0xfc , 0x1f , 0x0 , 0x7f , 0x18 , 0x0 , 0x62 , 0x18 , 0x0 , 0x60 , // Char 35 #
0x70 , 0xe0 , 0x0 , 0xfc , 0xe1 , 0x1 , 0xcc , 0x81 , 0x3 , 0x6 , 0x3 , 0x3 , 0x6 , 0x3 , 0x2 , 0xff , 0xff , 0x1f , 0x7 , 0x7 , 0x7 , 0x6 , 0x6 , 0x2 , 0xe , 0xe , 0x3 , 0x1c , 0xdc , 0x3 , 0x38 , 0xfc , 0x1 , 0x0 , 0x70 , // Char 36 $
0xf8 , 0x0 , 0x0 , 0xdc , 0x1 , 0x0 , 0x84 , 0x1 , 0x0 , 0x6 , 0x3 , 0x0 , 0x6 , 0x3 , 0x0 , 0x8c , 0x1 , 0x3 , 0xfc , 0xc1 , 0x1 , 0x70 , 0x70 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x7 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x70 , 0x40 , 0x0 , 0x1c , 0xf0 , 0x1 , 0x7 , 0x18 , 0x3 , 0x1 , 0xc , 0x3 , 0x0 , 0xc , 0x6 , 0x0 , 0xc , 0x3 , 0x0 , 0x18 , 0x3 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x40 , // Char 37 %
0x0 , 0x70 , 0x0 , 0x0 , 0xfc , 0x1 , 0x38 , 0xdc , 0x3 , 0xfe , 0x6 , 0x3 , 0xe7 , 0x3 , 0x3 , 0xc3 , 0x3 , 0x6 , 0xc3 , 0xf , 0x3 , 0xe3 , 0x1e , 0x3 , 0xfe , 0xb8 , 0x3 , 0x7c , 0xf0 , 0x1 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xfc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0x0 , 0x2 , // Char 38 &
0x1f , 0x0 , 0x0 , 0x3f , // Char 39 '
0xc0 , 0xff , 0x1 , 0xf0 , 0xff , 0x7 , 0x3c , 0x0 , 0x1e , 0x7 , 0x0 , 0x70 , 0x1 , 0x0 , 0x40 , // Char 40 (
0x1 , 0x0 , 0x40 , 0x7 , 0x0 , 0x70 , 0x7c , 0x0 , 0x1f , 0xf0 , 0xff , 0x7 , 0x80 , 0xff , // Char 41 )
0x4 , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x4 , // Char 42 *
0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0xc0 , 0xff , 0x3 , 0xc0 , 0xff , 0x3 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , // Char 43 +
0x0 , 0x80 , 0x23 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0xf , // Char 44 ,
0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , // Char 45 -
0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 46 .
0x0 , 0x0 , 0x3 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x3e , 0x0 , 0xc0 , 0x7 , 0x0 , 0xf8 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1 , // Char 47 /
0xe0 , 0x3f , 0x0 , 0xfc , 0xff , 0x0 , 0x3e , 0xe0 , 0x1 , 0x7 , 0x80 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x6 , 0x3 , 0x0 , 0x3 , 0x7 , 0x0 , 0x3 , 0x1e , 0xe0 , 0x3 , 0xfc , 0xff , 0x1 , 0xf0 , 0x3f , // Char 48 0
0x10 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xfe , 0xff , 0x3 , 0xff , 0xff , 0x3 , // Char 49 1
0x30 , 0xc0 , 0x3 , 0x3c , 0xe0 , 0x3 , 0x1e , 0x70 , 0x3 , 0x7 , 0x38 , 0x3 , 0x3 , 0x1c , 0x3 , 0x3 , 0xc , 0x3 , 0x3 , 0x6 , 0x3 , 0x3 , 0x7 , 0x3 , 0x86 , 0x3 , 0x3 , 0xfe , 0x1 , 0x3 , 0xf8 , 0x0 , 0x3 , // Char 50 2
0x38 , 0xe0 , 0x0 , 0x3c , 0xe0 , 0x1 , 0x1e , 0x80 , 0x3 , 0x7 , 0x0 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x6 , 0x3 , 0x3 , 0x3 , 0x87 , 0x7 , 0x3 , 0xfe , 0x8f , 0x3 , 0xfc , 0xfc , 0x1 , 0x30 , 0xf8 , // Char 51 3
0x0 , 0x3c , 0x0 , 0x0 , 0x3e , 0x0 , 0x80 , 0x37 , 0x0 , 0xc0 , 0x31 , 0x0 , 0x70 , 0x30 , 0x0 , 0x38 , 0x30 , 0x0 , 0x1e , 0x30 , 0x0 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x10 , // Char 52 4
0x0 , 0xc2 , 0x0 , 0xfe , 0xc3 , 0x1 , 0xff , 0x83 , 0x3 , 0x3 , 0x1 , 0x3 , 0x83 , 0x1 , 0x3 , 0x83 , 0x1 , 0x6 , 0x83 , 0x1 , 0x3 , 0x83 , 0x3 , 0x3 , 0x3 , 0x87 , 0x3 , 0x3 , 0xff , 0x1 , 0x0 , 0xfc , // Char 53 5
0xe0 , 0x3f , 0x0 , 0xf8 , 0xff , 0x0 , 0x3e , 0xcf , 0x1 , 0x6 , 0x3 , 0x3 , 0x83 , 0x1 , 0x3 , 0x83 , 0x1 , 0x6 , 0x83 , 0x1 , 0x3 , 0x83 , 0x3 , 0x3 , 0xe , 0x87 , 0x3 , 0x1e , 0xff , 0x1 , 0x18 , 0xfc , // Char 54 6
0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x2 , 0x3 , 0xe0 , 0x3 , 0x3 , 0xf8 , 0x3 , 0x3 , 0x3e , 0x0 , 0x83 , 0x7 , 0x0 , 0xe3 , 0x1 , 0x0 , 0x7b , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , // Char 55 7
0x20 , 0xf8 , 0x0 , 0xfc , 0xfc , 0x1 , 0xfe , 0x8f , 0x3 , 0x87 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x6 , 0x3 , 0x3 , 0x3 , 0x87 , 0x3 , 0x3 , 0xfe , 0x87 , 0x3 , 0xfc , 0xfe , 0x1 , 0x38 , 0xfc , // Char 56 8
0xf8 , 0x41 , 0x0 , 0xfc , 0xc3 , 0x1 , 0xe , 0xc7 , 0x3 , 0x7 , 0xe , 0x3 , 0x3 , 0xc , 0x3 , 0x3 , 0xc , 0x7 , 0x3 , 0xc , 0x3 , 0x7 , 0x86 , 0x3 , 0xe , 0xe7 , 0x1 , 0xfc , 0xff , 0x0 , 0xf0 , 0x3f , // Char 57 9
0xe0 , 0x80 , 0x3 , 0xe0 , 0x80 , 0x3 , // Char 58 :
0xe0 , 0x80 , 0x23 , 0xe0 , 0x80 , 0x1f , // Char 59 ;
0x0 , 0x18 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0xc6 , 0x0 , 0x0 , 0xc6 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x83 , 0x1 , 0x80 , 0x81 , 0x1 , 0x80 , 0x1 , 0x3 , 0x80 , 0x1 , 0x3 , // Char 60 <
0x0 , 0x66 , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x66 , // Char 61 =
0x80 , 0x1 , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc6 , 0x0 , 0x0 , 0xc6 , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x18 , // Char 62 >
0x38 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x9c , 0x3 , 0x3 , 0x9e , 0x3 , 0x3 , 0x7 , 0x0 , 0xc7 , 0x1 , 0x0 , 0xfe , 0x0 , 0x0 , 0x7c , // Char 63 ?
0x0 , 0x7f , 0x0 , 0xc0 , 0xff , 0x1 , 0xf0 , 0xc0 , 0x3 , 0x38 , 0x0 , 0x7 , 0x1c , 0x0 , 0x6 , 0xc , 0x1c , 0xc , 0x6 , 0x7f , 0xc , 0x86 , 0xff , 0x18 , 0xc3 , 0xc1 , 0x18 , 0x63 , 0xc0 , 0x18 , 0x63 , 0xc0 , 0x18 , 0x63 , 0x40 , 0x18 , 0x63 , 0x70 , 0x18 , 0xc3 , 0xff , 0x18 , 0xc7 , 0xff , 0x18 , 0xe6 , 0xc3 , 0x8 , 0x4e , 0xc0 , 0x0 , 0xc , 0xc0 , 0x0 , 0x3c , 0x60 , 0x0 , 0xf8 , 0x3c , 0x0 , 0xf0 , 0x1f , 0x0 , 0x80 , 0x7 , // Char 64 @
0x0 , 0x80 , 0x3 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xfe , 0x0 , 0xc0 , 0x1f , 0x0 , 0xf8 , 0x1b , 0x0 , 0x7f , 0x18 , 0x0 , 0xf , 0x18 , 0x0 , 0xf , 0x18 , 0x0 , 0x7f , 0x18 , 0x0 , 0xf8 , 0x1b , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x2 , // Char 65 A
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x86 , 0x87 , 0x3 , 0xfe , 0xce , 0x1 , 0x7c , 0xfc , 0x1 , 0x0 , 0x78 , // Char 66 B
0xc0 , 0xf , 0x0 , 0xf0 , 0x7f , 0x0 , 0xfc , 0xfd , 0x0 , 0x1e , 0xc0 , 0x1 , 0x6 , 0x80 , 0x3 , 0x7 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x7 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x7 , 0x0 , 0x3 , 0x6 , 0x80 , 0x3 , 0x1e , 0xe0 , 0x1 , 0x3c , 0xf8 , 0x0 , 0x30 , 0x78 , // Char 67 C
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x7 , 0x80 , 0x3 , 0xe , 0xc0 , 0x1 , 0x7c , 0xf8 , 0x0 , 0xf8 , 0x7f , 0x0 , 0xe0 , 0x1f , // Char 68 D
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 69 E
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , // Char 70 F
0xc0 , 0x1f , 0x0 , 0xf0 , 0x7f , 0x0 , 0xfc , 0xfc , 0x0 , 0x1c , 0xc0 , 0x1 , 0xe , 0x80 , 0x3 , 0x7 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x7 , 0x3 , 0x6 , 0x3 , 0x3 , 0x6 , 0x3 , 0x6 , 0x6 , 0x3 , 0xe , 0x86 , 0x1 , 0x3c , 0xc6 , 0x0 , 0x38 , 0xfe , 0x3 , 0x20 , 0xfe , 0x3 , // Char 71 G
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , // Char 72 H
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , // Char 73 I
0x0 , 0x20 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x3 , 0x0 , 0x80 , 0x3 , 0xff , 0xff , 0x1 , 0xff , 0xff , // Char 74 J
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x0 , 0x6 , 0x0 , 0x0 , 0x3 , 0x0 , 0x80 , 0x1 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x38 , 0x1e , 0x0 , 0x1c , 0x3c , 0x0 , 0xe , 0xf0 , 0x0 , 0x7 , 0xe0 , 0x1 , 0x3 , 0x80 , 0x3 , 0x1 , 0x0 , 0x3 , // Char 75 K
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 76 L
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x1f , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x3f , 0x0 , 0xe0 , 0x7 , 0x0 , 0xfc , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , // Char 77 M
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0xf , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , // Char 78 N
0xe0 , 0x1f , 0x0 , 0xf8 , 0x7f , 0x0 , 0x7c , 0xf8 , 0x0 , 0x1e , 0xc0 , 0x1 , 0x6 , 0x80 , 0x3 , 0x7 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x7 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x6 , 0x0 , 0x3 , 0xe , 0x80 , 0x3 , 0x1c , 0xe0 , 0x1 , 0xf8 , 0xff , 0x0 , 0xf0 , 0x7f , 0x0 , 0x80 , 0xf , // Char 79 O
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x3 , 0x6 , 0x0 , 0x3 , 0x6 , 0x0 , 0x3 , 0x6 , 0x0 , 0x3 , 0x6 , 0x0 , 0x3 , 0x6 , 0x0 , 0x3 , 0x6 , 0x0 , 0x3 , 0x6 , 0x0 , 0x7 , 0x7 , 0x0 , 0xfe , 0x3 , 0x0 , 0xfc , 0x1 , 0x0 , 0xf8 , // Char 80 P
0xe0 , 0x1f , 0x0 , 0xf8 , 0x7f , 0x0 , 0x7c , 0xf8 , 0x0 , 0x1e , 0xc0 , 0x1 , 0x6 , 0x80 , 0x3 , 0x7 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x7 , 0x3 , 0x0 , 0x3 , 0x3 , 0x60 , 0x3 , 0x6 , 0xc0 , 0x3 , 0xe , 0xc0 , 0x3 , 0x1c , 0xe0 , 0x3 , 0xf8 , 0xfd , 0x7 , 0xf0 , 0x7f , 0x6 , 0xc0 , 0xf , // Char 81 Q
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x3 , 0x3 , 0x0 , 0x87 , 0x7 , 0x0 , 0xfe , 0xff , 0x3 , 0xfc , 0xfc , 0x3 , 0x30 , 0x0 , 0x3 , // Char 82 R
0x0 , 0x70 , 0x0 , 0xfc , 0xf0 , 0x0 , 0xfe , 0xc1 , 0x1 , 0xc6 , 0x81 , 0x3 , 0x87 , 0x1 , 0x3 , 0x83 , 0x3 , 0x3 , 0x3 , 0x3 , 0x7 , 0x3 , 0x3 , 0x7 , 0x3 , 0x7 , 0x3 , 0x7 , 0x7 , 0x3 , 0x6 , 0x6 , 0x3 , 0x1e , 0xde , 0x1 , 0x38 , 0xfc , 0x1 , 0x0 , 0x78 , // Char 83 S
0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 84 T
0xff , 0x7f , 0x0 , 0xff , 0xff , 0x1 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x80 , 0x3 , 0xff , 0xff , 0x1 , 0xff , 0xff , 0x0 , 0xff , 0x1f , // Char 85 U
0x3 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x7f , 0x0 , 0xe0 , 0xf , 0x0 , 0xfc , 0x1 , 0x0 , 0x3f , 0x0 , 0x0 , 0x7 , // Char 86 V
0xf , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0xc0 , 0xff , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xfc , 0x3 , 0xc0 , 0x3f , 0x0 , 0xfc , 0x3 , 0x0 , 0x7f , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xfc , 0x3 , 0xc0 , 0xff , 0x0 , 0xfe , 0xf , 0x0 , 0x7f , 0x0 , 0x0 , 0x7 , // Char 87 W
0x1 , 0x0 , 0x3 , 0x3 , 0x80 , 0x3 , 0xf , 0xe0 , 0x3 , 0x1e , 0xf0 , 0x0 , 0x78 , 0x78 , 0x0 , 0xf0 , 0x1f , 0x0 , 0xc0 , 0x7 , 0x0 , 0xc0 , 0x7 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x78 , 0x3c , 0x0 , 0x3c , 0xf0 , 0x0 , 0xf , 0xe0 , 0x3 , 0x7 , 0x80 , 0x3 , 0x1 , 0x0 , 0x3 , // Char 88 X
0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x80 , 0xff , 0x3 , 0x0 , 0xff , 0x3 , 0xc0 , 0x7 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x78 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 89 Y
0x3 , 0x80 , 0x3 , 0x3 , 0xc0 , 0x3 , 0x3 , 0xf0 , 0x3 , 0x3 , 0x78 , 0x3 , 0x3 , 0x1c , 0x3 , 0x3 , 0xf , 0x3 , 0x83 , 0x7 , 0x3 , 0xc3 , 0x1 , 0x3 , 0xf3 , 0x0 , 0x3 , 0x7b , 0x0 , 0x3 , 0x1f , 0x0 , 0x3 , 0xf , 0x0 , 0x3 , 0x7 , 0x0 , 0x3 , // Char 90 Z
0xff , 0xff , 0x7f , 0xff , 0xff , 0x7f , 0xff , 0xff , 0x7f , 0x3 , 0x0 , 0x60 , 0x3 , 0x0 , 0x60 , // Char 91 [
0xf , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x3f , // Char 92 Backslash
0x3 , 0x0 , 0x60 , 0x3 , 0x0 , 0x60 , 0xff , 0xff , 0x7f , 0xff , 0xff , 0x7f , // Char 93 ]
0x0 , 0x2 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 94 ^
0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , // Char 95 _
0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0xc , // Char 96 `
0x0 , 0xe0 , 0x1 , 0xc0 , 0xf1 , 0x3 , 0xc0 , 0x39 , 0x3 , 0x60 , 0x18 , 0x2 , 0x60 , 0x18 , 0x2 , 0x60 , 0x8 , 0x2 , 0x60 , 0x8 , 0x3 , 0x60 , 0xc , 0x1 , 0xc0 , 0xff , 0x1 , 0xc0 , 0xff , 0x3 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x2 , // Char 97 a
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0xc0 , 0xe3 , 0x1 , 0xc0 , 0x80 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x7 , 0x60 , 0x0 , 0x7 , 0x60 , 0x0 , 0x3 , 0xc0 , 0x80 , 0x3 , 0xc0 , 0xff , 0x1 , 0x80 , 0xff , 0x0 , 0x0 , 0x8 , // Char 98 b
0x0 , 0x7f , 0x0 , 0x80 , 0xff , 0x1 , 0xc0 , 0x81 , 0x3 , 0xe0 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x6 , 0x60 , 0x0 , 0x3 , 0xe0 , 0x0 , 0x3 , 0xc0 , 0xc3 , 0x3 , 0x80 , 0xc3 , // Char 99 c
0x0 , 0xff , 0x0 , 0xc0 , 0xff , 0x1 , 0xc0 , 0x81 , 0x3 , 0xe0 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x6 , 0x60 , 0x0 , 0x3 , 0xc0 , 0x0 , 0x3 , 0xc0 , 0xc3 , 0x1 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , // Char 100 d
0x0 , 0x7e , 0x0 , 0x80 , 0xff , 0x1 , 0xc0 , 0xcd , 0x3 , 0xe0 , 0xc , 0x3 , 0x60 , 0xc , 0x3 , 0x60 , 0xc , 0x6 , 0x60 , 0xc , 0x3 , 0x60 , 0xc , 0x3 , 0xc0 , 0x8c , 0x3 , 0xc0 , 0xcf , 0x1 , 0x0 , 0xcf , // Char 101 e
0x20 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xfe , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x63 , 0x0 , 0x0 , 0x63 , // Char 102 f
0x0 , 0x7f , 0x8 , 0x80 , 0xff , 0x39 , 0xc0 , 0x81 , 0x33 , 0xe0 , 0x0 , 0x63 , 0x60 , 0x0 , 0x63 , 0x60 , 0x0 , 0x62 , 0x60 , 0x0 , 0x63 , 0xc0 , 0x80 , 0x71 , 0xc0 , 0xff , 0x3f , 0xe0 , 0xff , 0x1f , 0xe0 , 0xff , 0x1 , // Char 103 g
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0xc0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xc0 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , // Char 104 h
0x3 , 0x0 , 0x0 , 0xe7 , 0xff , 0x3 , 0xe3 , 0xff , 0x3 , // Char 105 i
0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x70 , 0xe7 , 0xff , 0x7f , 0xe3 , 0xff , 0x1f , // Char 106 j
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x0 , 0x1c , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x7 , 0x0 , 0x80 , 0x1f , 0x0 , 0xc0 , 0x7d , 0x0 , 0xe0 , 0xf0 , 0x0 , 0x60 , 0xc0 , 0x3 , 0x20 , 0x80 , 0x3 , 0x0 , 0x0 , 0x2 , // Char 107 k
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , // Char 108 l
0xe0 , 0xff , 0x3 , 0xe0 , 0xff , 0x3 , 0xc0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xc0 , 0xff , 0x3 , 0xc0 , 0xff , 0x3 , 0xc0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xe0 , 0xff , 0x3 , 0xc0 , 0xff , 0x3 , // Char 109 m
0xe0 , 0xff , 0x3 , 0xe0 , 0xff , 0x3 , 0xc0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xc0 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , // Char 110 n
0x0 , 0x7f , 0x0 , 0x80 , 0xff , 0x1 , 0xc0 , 0xc1 , 0x3 , 0xe0 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x6 , 0x60 , 0x0 , 0x3 , 0xe0 , 0x0 , 0x3 , 0xc0 , 0x81 , 0x3 , 0x80 , 0xff , 0x1 , 0x0 , 0x7f , // Char 111 o
0xe0 , 0xff , 0x7f , 0xe0 , 0xff , 0x7f , 0x80 , 0xe7 , 0x1 , 0xc0 , 0x80 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0xc0 , 0x80 , 0x3 , 0xc0 , 0xff , 0x1 , 0x0 , 0xff , 0x0 , 0x0 , 0x18 , // Char 112 p
0x0 , 0xff , 0x0 , 0xc0 , 0xff , 0x1 , 0xc0 , 0x81 , 0x3 , 0xe0 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x2 , 0x60 , 0x0 , 0x3 , 0xc0 , 0x0 , 0x3 , 0xc0 , 0xc3 , 0x1 , 0xe0 , 0xff , 0x7f , 0xe0 , 0xff , 0x7f , // Char 113 q
0xe0 , 0xff , 0x3 , 0xe0 , 0xff , 0x3 , 0xc0 , 0x1 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , // Char 114 r
0x80 , 0xc3 , 0x1 , 0xc0 , 0xc7 , 0x3 , 0xe0 , 0xe , 0x3 , 0x60 , 0xc , 0x3 , 0x60 , 0x1c , 0x6 , 0x60 , 0x18 , 0x2 , 0x60 , 0x18 , 0x3 , 0xc0 , 0x39 , 0x3 , 0xc0 , 0xf1 , 0x1 , 0x0 , 0xe0 , // Char 115 s
0x20 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xfc , 0xff , 0x3 , 0xfc , 0xff , 0x3 , 0x60 , 0x0 , 0x7 , 0x60 , 0x0 , 0x2 , // Char 116 t
0xe0 , 0x7f , 0x0 , 0xe0 , 0xff , 0x1 , 0xe0 , 0xff , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0xe0 , 0xff , 0x1 , 0xe0 , 0xff , 0x3 , 0xe0 , 0xff , 0x3 , // Char 117 u
0x20 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xfc , 0x0 , 0x0 , 0x3f , 0x0 , 0xe0 , 0x7 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x20 , // Char 118 v
0x20 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xff , 0x0 , 0xe0 , 0xf , 0x0 , 0xe0 , 0x1 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xfc , 0x1 , 0xc0 , 0x3f , 0x0 , 0xe0 , 0x3 , 0x0 , 0x60 , // Char 119 w
0x20 , 0x0 , 0x3 , 0xe0 , 0x80 , 0x3 , 0xc0 , 0xe1 , 0x1 , 0x80 , 0x77 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x3e , 0x0 , 0x80 , 0xf7 , 0x0 , 0xc0 , 0xe1 , 0x1 , 0xe0 , 0x80 , 0x3 , 0x20 , 0x0 , 0x2 , // Char 120 x
0xe0 , 0x0 , 0x60 , 0xe0 , 0x7 , 0x60 , 0x0 , 0x3f , 0x70 , 0x0 , 0xf8 , 0x3d , 0x0 , 0xc0 , 0x1f , 0x0 , 0xe0 , 0x7 , 0x0 , 0xfc , 0x0 , 0x80 , 0x1f , 0x0 , 0xe0 , 0x7 , 0x0 , 0xe0 , // Char 121 y
0x60 , 0x80 , 0x3 , 0x60 , 0xc0 , 0x3 , 0x60 , 0xe0 , 0x3 , 0x60 , 0x78 , 0x3 , 0x60 , 0x1c , 0x3 , 0x60 , 0xe , 0x3 , 0x60 , 0x7 , 0x3 , 0xe0 , 0x3 , 0x3 , 0xe0 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , // Char 122 z
0x0 , 0x1c , 0x0 , 0x0 , 0x3e , 0x0 , 0xfe , 0xf7 , 0x3f , 0xff , 0xe3 , 0x7f , 0x3 , 0x0 , 0x60 , 0x1 , 0x0 , 0x40 , // Char 123 {
0xff , 0xff , 0x7f , 0xff , 0xff , 0x7f , // Char 124 |
0x3 , 0x0 , 0x60 , 0x7 , 0x0 , 0x70 , 0xfe , 0xf7 , 0x3f , 0xf8 , 0xff , 0xf , 0x0 , 0x1c , // Char 125 }
0x0 , 0x6 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x6 , // Char 126 ~
};
