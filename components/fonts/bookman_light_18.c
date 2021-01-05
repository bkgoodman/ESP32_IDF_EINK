#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Bookman_Light_18[] PROGMEM = {
10 , // Width 
18 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 10, // Char 32   - Nodata
 0x0, 0x0, 0x8, 0x5, // Char 33 ! 
 0x0, 0x8, 0xd, 0x7, // Char 34 " 
 0x0, 0x15, 0x19, 0xb, // Char 35 # 
 0x0, 0x2e, 0x1d, 0xc, // Char 36 $ 
 0x0, 0x4b, 0x2f, 0x12, // Char 37 % 
 0x0, 0x7a, 0x26, 0xf, // Char 38 & 
 0x0, 0xa0, 0x4, 0x4, // Char 39 ' 
 0x0, 0xa4, 0xb, 0x6, // Char 40 ( 
 0x0, 0xaf, 0xb, 0x6, // Char 41 ) 
 0x0, 0xba, 0x10, 0x8, // Char 42 * 
 0x0, 0xca, 0x19, 0xb, // Char 43 + 
 0x0, 0xe3, 0x5, 0x4, // Char 44 , 
 0x0, 0xe8, 0xd, 0x7, // Char 45 - 
 0x0, 0xf5, 0x5, 0x4, // Char 46 . 
 0x0, 0xfa, 0x16, 0xa, // Char 47 / 
 0x1, 0x10, 0x1c, 0xc, // Char 48 0 
 0x1, 0x2c, 0x11, 0x8, // Char 49 1 
 0x1, 0x3d, 0x1a, 0xb, // Char 50 2 
 0x1, 0x57, 0x1a, 0xb, // Char 51 3 
 0x1, 0x71, 0x1c, 0xc, // Char 52 4 
 0x1, 0x8d, 0x1c, 0xc, // Char 53 5 
 0x1, 0xa9, 0x1d, 0xc, // Char 54 6 
 0x1, 0xc6, 0x1c, 0xc, // Char 55 7 
 0x1, 0xe2, 0x1d, 0xc, // Char 56 8 
 0x1, 0xff, 0x1a, 0xb, // Char 57 9 
 0x2, 0x19, 0x5, 0x4, // Char 58 : 
 0x2, 0x1e, 0x5, 0x4, // Char 59 ; 
 0x2, 0x23, 0x1a, 0xb, // Char 60 < 
 0x2, 0x3d, 0x19, 0xb, // Char 61 = 
 0x2, 0x56, 0x19, 0xb, // Char 62 > 
 0x2, 0x6f, 0x16, 0xa, // Char 63 ? 
 0x2, 0x85, 0x25, 0xf, // Char 64 @ 
 0x2, 0xaa, 0x29, 0x10, // Char 65 A 
 0x2, 0xd3, 0x23, 0xe, // Char 66 B 
 0x2, 0xf6, 0x20, 0xd, // Char 67 C 
 0x3, 0x16, 0x25, 0xf, // Char 68 D 
 0x3, 0x3b, 0x23, 0xe, // Char 69 E 
 0x3, 0x5e, 0x1f, 0xd, // Char 70 F 
 0x3, 0x7d, 0x25, 0xf, // Char 71 G 
 0x3, 0xa2, 0x26, 0xf, // Char 72 H 
 0x3, 0xc8, 0xb, 0x6, // Char 73 I 
 0x3, 0xd3, 0x1c, 0xc, // Char 74 J 
 0x3, 0xef, 0x23, 0xe, // Char 75 K 
 0x4, 0x12, 0x1d, 0xc, // Char 76 L 
 0x4, 0x2f, 0x2c, 0x11, // Char 77 M 
 0x4, 0x5b, 0x22, 0xe, // Char 78 N 
 0x4, 0x7d, 0x25, 0xf, // Char 79 O 
 0x4, 0xa2, 0x1c, 0xc, // Char 80 P 
 0x4, 0xbe, 0x25, 0xf, // Char 81 Q 
 0x4, 0xe3, 0x23, 0xe, // Char 82 R 
 0x5, 0x6, 0x1d, 0xc, // Char 83 S 
 0x5, 0x23, 0x25, 0xf, // Char 84 T 
 0x5, 0x48, 0x22, 0xe, // Char 85 U 
 0x5, 0x6a, 0x25, 0xf, // Char 86 V 
 0x5, 0x8f, 0x34, 0x14, // Char 87 W 
 0x5, 0xc3, 0x26, 0xf, // Char 88 X 
 0x5, 0xe9, 0x22, 0xe, // Char 89 Y 
 0x6, 0xb, 0x23, 0xe, // Char 90 Z 
 0x6, 0x2e, 0x8, 0x5, // Char 91 [ 
 0x6, 0x36, 0xd, 0x7, // Char 92 Backslash 
 0x6, 0x43, 0x8, 0x5, // Char 93 ] 
 0x6, 0x4b, 0x19, 0xb, // Char 94 ^ 
 0x6, 0x64, 0x1a, 0xb, // Char 95 _ 
 0x6, 0x7e, 0xa, 0x6, // Char 96 ` 
 0x6, 0x88, 0x1a, 0xb, // Char 97 a 
 0x6, 0xa2, 0x1a, 0xb, // Char 98 b 
 0x6, 0xbc, 0x17, 0xa, // Char 99 c 
 0x6, 0xd3, 0x1d, 0xc, // Char 100 d 
 0x6, 0xf0, 0x16, 0xa, // Char 101 e 
 0x7, 0x6, 0x10, 0x8, // Char 102 f 
 0x7, 0x16, 0x1d, 0xc, // Char 103 g 
 0x7, 0x33, 0x1d, 0xc, // Char 104 h 
 0x7, 0x50, 0xb, 0x6, // Char 105 i 
 0x7, 0x5b, 0xe, 0x7, // Char 106 j 
 0x7, 0x69, 0x1d, 0xc, // Char 107 k 
 0x7, 0x86, 0xb, 0x6, // Char 108 l 
 0x7, 0x91, 0x2c, 0x11, // Char 109 m 
 0x7, 0xbd, 0x1d, 0xc, // Char 110 n 
 0x7, 0xda, 0x19, 0xb, // Char 111 o 
 0x7, 0xf3, 0x1c, 0xc, // Char 112 p 
 0x8, 0xf, 0x1a, 0xb, // Char 113 q 
 0x8, 0x29, 0x13, 0x9, // Char 114 r 
 0x8, 0x3c, 0x17, 0xa, // Char 115 s 
 0x8, 0x53, 0x14, 0x9, // Char 116 t 
 0x8, 0x67, 0x23, 0xe, // Char 117 u 
 0x8, 0x8a, 0x1c, 0xc, // Char 118 v 
 0x8, 0xa6, 0x28, 0x10, // Char 119 w 
 0x8, 0xce, 0x1d, 0xc, // Char 120 x 
 0x8, 0xeb, 0x1c, 0xc, // Char 121 y 
 0x9, 0x7, 0x17, 0xa, // Char 122 z 
 0x9, 0x1e, 0x8, 0x5, // Char 123 { 
 0x9, 0x26, 0x2, 0x3, // Char 124 | 
 0x9, 0x28, 0x7, 0x5, // Char 125 } 
 0x9, 0x2f, 0x19, 0xb, // Char 126 ~ 

// Data Table:
0x6 , 0x4 , 0x0 , 0xff , 0xd , 0x0 , 0xf , 0x4 , // Char 33 !
0xf , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xf , // Char 34 "
0x80 , 0x0 , 0x0 , 0x88 , 0x8 , 0x0 , 0xf8 , 0xf , 0x0 , 0xbf , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0xf , 0x0 , 0xfe , 0x1 , 0x0 , 0x8b , 0x0 , 0x0 , 0x88 , // Char 35 #
0x1c , 0x7 , 0x0 , 0x3e , 0x7 , 0x0 , 0x31 , 0x8 , 0x0 , 0x71 , 0x8 , 0x0 , 0xff , 0x3f , 0x0 , 0x61 , 0x8 , 0x0 , 0x61 , 0x8 , 0x0 , 0xee , 0x4 , 0x0 , 0xcc , 0x7 , 0x0 , 0x80 , 0x1 , // Char 36 $
0x1c , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x41 , 0x0 , 0x0 , 0x41 , 0x0 , 0x0 , 0x41 , 0xc , 0x0 , 0x3e , 0x6 , 0x0 , 0x9c , 0x1 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x98 , 0x1 , 0x0 , 0xe4 , 0x7 , 0x0 , 0x33 , 0x8 , 0x0 , 0x11 , 0x8 , 0x0 , 0x10 , 0x8 , 0x0 , 0xe0 , 0x7 , 0x0 , 0xc0 , 0x3 , // Char 37 %
0x80 , 0x3 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x2e , 0xc , 0x0 , 0x1f , 0x8 , 0x0 , 0x31 , 0x8 , 0x0 , 0x71 , 0x8 , 0x0 , 0xdb , 0x8 , 0x0 , 0x8e , 0x5 , 0x0 , 0x0 , 0x7 , 0x0 , 0x90 , 0xf , 0x0 , 0xf0 , 0xc , 0x0 , 0x10 , 0x8 , 0x0 , 0x10 , 0x8 , // Char 38 &
0xf , 0x0 , 0x0 , 0xf , // Char 39 '
0xf8 , 0x7 , 0x0 , 0xff , 0x1f , 0x0 , 0x3 , 0x30 , 0x0 , 0x0 , 0x40 , // Char 40 (
0x0 , 0x40 , 0x0 , 0x1 , 0x20 , 0x0 , 0xff , 0x3f , 0x0 , 0xfc , 0xf , // Char 41 )
0x16 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x16 , // Char 42 *
0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , // Char 43 +
0x0 , 0x2c , 0x0 , 0x0 , 0x1c , // Char 44 ,
0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , // Char 45 -
0x0 , 0xc , 0x0 , 0x0 , 0xc , // Char 46 .
0x0 , 0x40 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x3c , 0x0 , 0x80 , 0x7 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3 , // Char 47 /
0xf8 , 0x1 , 0x0 , 0xfe , 0x7 , 0x0 , 0x2 , 0xc , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x3 , 0xc , 0x0 , 0xfe , 0x7 , 0x0 , 0xfc , 0x3 , 0x0 , 0x60 , // Char 48 0
0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , // Char 49 1
0xc , 0xc , 0x0 , 0x1e , 0xc , 0x0 , 0x1 , 0xe , 0x0 , 0x1 , 0xd , 0x0 , 0x81 , 0xd , 0x0 , 0xc1 , 0xc , 0x0 , 0x7f , 0xc , 0x0 , 0x3e , 0xc , 0x0 , 0x8 , 0xe , // Char 50 2
0x4 , 0x7 , 0x0 , 0x6 , 0x7 , 0x0 , 0x1 , 0x8 , 0x0 , 0x11 , 0x8 , 0x0 , 0x11 , 0x8 , 0x0 , 0x11 , 0x8 , 0x0 , 0x3b , 0xc , 0x0 , 0xee , 0x7 , 0x0 , 0xc4 , 0x3 , // Char 51 3
0xc0 , 0x0 , 0x0 , 0xa0 , 0x0 , 0x0 , 0x90 , 0x0 , 0x0 , 0x8c , 0x0 , 0x0 , 0x86 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , // Char 52 4
0x0 , 0x3 , 0x0 , 0x3f , 0x7 , 0x0 , 0x13 , 0x8 , 0x0 , 0xb , 0x8 , 0x0 , 0xb , 0x8 , 0x0 , 0xb , 0x8 , 0x0 , 0x1b , 0xc , 0x0 , 0xf3 , 0x7 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x80 , // Char 53 5
0xf8 , 0x3 , 0x0 , 0xfe , 0x7 , 0x0 , 0x22 , 0xc , 0x0 , 0x11 , 0x8 , 0x0 , 0x11 , 0x8 , 0x0 , 0x11 , 0x8 , 0x0 , 0x31 , 0xc , 0x0 , 0xe7 , 0x7 , 0x0 , 0xe6 , 0x7 , 0x0 , 0x80 , 0x1 , // Char 54 6
0x7 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x8 , 0x0 , 0x3 , 0xf , 0x0 , 0xc3 , 0xf , 0x0 , 0xe3 , 0x0 , 0x0 , 0x3b , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 55 7
0x88 , 0x7 , 0x0 , 0xde , 0x7 , 0x0 , 0x7b , 0x8 , 0x0 , 0x31 , 0x8 , 0x0 , 0x21 , 0x8 , 0x0 , 0x61 , 0x8 , 0x0 , 0x71 , 0x8 , 0x0 , 0xde , 0x4 , 0x0 , 0xce , 0x7 , 0x0 , 0x0 , 0x1 , // Char 56 8
0x3c , 0x6 , 0x0 , 0x3e , 0x6 , 0x0 , 0x63 , 0xc , 0x0 , 0x41 , 0x8 , 0x0 , 0x41 , 0x8 , 0x0 , 0x41 , 0x8 , 0x0 , 0x23 , 0x4 , 0x0 , 0xfe , 0x7 , 0x0 , 0xfc , 0x3 , // Char 57 9
0x18 , 0xc , 0x0 , 0x18 , 0xc , // Char 58 :
0x18 , 0x2c , 0x0 , 0x18 , 0x1c , // Char 59 ;
0x60 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x90 , 0x1 , 0x0 , 0x98 , 0x1 , 0x0 , 0x8 , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0x4 , 0x2 , 0x0 , 0x6 , 0x6 , // Char 60 <
0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x88 , // Char 61 =
0x6 , 0x6 , 0x0 , 0xc , 0x2 , 0x0 , 0xc , 0x3 , 0x0 , 0x8 , 0x1 , 0x0 , 0x98 , 0x1 , 0x0 , 0x90 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x60 , // Char 62 >
0xe , 0x0 , 0x0 , 0xb , 0x0 , 0x0 , 0x1 , 0xc , 0x0 , 0xc1 , 0xd , 0x0 , 0x61 , 0x0 , 0x0 , 0x21 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x1e , // Char 63 ?
0xf0 , 0x1 , 0x0 , 0xc , 0x3 , 0x0 , 0xe6 , 0x6 , 0x0 , 0xfa , 0x5 , 0x0 , 0x9 , 0x9 , 0x0 , 0x5 , 0x9 , 0x0 , 0x85 , 0x8 , 0x0 , 0xc5 , 0x8 , 0x0 , 0xfd , 0x9 , 0x0 , 0xe , 0x5 , 0x0 , 0x82 , 0x4 , 0x0 , 0xcc , 0x3 , 0x0 , 0x30 , // Char 64 @
0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0xe , 0x0 , 0x80 , 0xf , 0x0 , 0x70 , 0x8 , 0x0 , 0x4c , 0x0 , 0x0 , 0x43 , 0x0 , 0x0 , 0x47 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0xf0 , 0x8 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , // Char 65 A
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x21 , 0x8 , 0x0 , 0x21 , 0x8 , 0x0 , 0x21 , 0x8 , 0x0 , 0x21 , 0x8 , 0x0 , 0x21 , 0x8 , 0x0 , 0x33 , 0xc , 0x0 , 0xde , 0x7 , 0x0 , 0xcc , 0x7 , 0x0 , 0x0 , 0x1 , // Char 66 B
0xf8 , 0x1 , 0x0 , 0xfc , 0x3 , 0x0 , 0xe , 0x7 , 0x0 , 0x3 , 0xc , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x2 , 0x8 , 0x0 , 0x6 , 0x4 , 0x0 , 0xf , 0x2 , // Char 67 C
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x3 , 0xc , 0x0 , 0x6 , 0x6 , 0x0 , 0xfe , 0x7 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x40 , // Char 68 D
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x21 , 0x8 , 0x0 , 0x21 , 0x8 , 0x0 , 0x21 , 0x8 , 0x0 , 0xf9 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x3 , 0xc , 0x0 , 0x3 , 0xc , 0x0 , 0x6 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 69 E
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x21 , 0x8 , 0x0 , 0x21 , 0x8 , 0x0 , 0x21 , 0x0 , 0x0 , 0xf9 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x4 , // Char 70 F
0xf8 , 0x1 , 0x0 , 0xfc , 0x3 , 0x0 , 0xe , 0x7 , 0x0 , 0x3 , 0xc , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x42 , 0xc , 0x0 , 0x47 , 0x6 , 0x0 , 0xce , 0xf , 0x0 , 0xc0 , 0xf , 0x0 , 0x40 , // Char 71 G
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x21 , 0x8 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x21 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , // Char 72 H
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x1 , 0x8 , // Char 73 I
0x80 , 0x7 , 0x0 , 0x80 , 0x5 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0xe , 0x0 , 0xff , 0x7 , 0x0 , 0xff , 0x1 , 0x0 , 0x1 , // Char 74 J
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x61 , 0x8 , 0x0 , 0x21 , 0x8 , 0x0 , 0x30 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0xc5 , 0x9 , 0x0 , 0x83 , 0xf , 0x0 , 0x3 , 0xe , 0x0 , 0x1 , 0xc , 0x0 , 0x0 , 0x8 , // Char 75 K
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x1 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3 , // Char 76 L
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0x7 , 0x8 , 0x0 , 0x1f , 0x8 , 0x0 , 0x7c , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x7 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe , 0x8 , 0x0 , 0x7 , 0xc , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x1 , 0x8 , // Char 77 M
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0x3 , 0x8 , 0x0 , 0xf , 0x8 , 0x0 , 0x1c , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x1 , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 78 N
0xf8 , 0x1 , 0x0 , 0xfc , 0x3 , 0x0 , 0xe , 0x7 , 0x0 , 0x2 , 0x4 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x3 , 0xc , 0x0 , 0x6 , 0x6 , 0x0 , 0xfe , 0x7 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x60 , // Char 79 O
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x41 , 0x8 , 0x0 , 0x41 , 0x8 , 0x0 , 0x41 , 0x0 , 0x0 , 0x41 , 0x0 , 0x0 , 0x63 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x1c , // Char 80 P
0xf8 , 0x1 , 0x0 , 0xfc , 0x33 , 0x0 , 0xe , 0x36 , 0x0 , 0x2 , 0x64 , 0x0 , 0x1 , 0x48 , 0x0 , 0x1 , 0x4c , 0x0 , 0x1 , 0x4a , 0x0 , 0x1 , 0x4a , 0x0 , 0x3 , 0x4e , 0x0 , 0x6 , 0x26 , 0x0 , 0x9e , 0x3f , 0x0 , 0xfc , 0x1b , 0x0 , 0xf0 , // Char 81 Q
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x21 , 0x8 , 0x0 , 0x21 , 0x8 , 0x0 , 0x21 , 0x0 , 0x0 , 0x61 , 0x0 , 0x0 , 0xe1 , 0x1 , 0x0 , 0xb3 , 0x3 , 0x0 , 0x3e , 0xe , 0x0 , 0x1e , 0xc , 0x0 , 0x0 , 0x8 , // Char 82 R
0xc , 0xf , 0x0 , 0x1e , 0xe , 0x0 , 0x33 , 0x4 , 0x0 , 0x31 , 0x8 , 0x0 , 0x31 , 0x8 , 0x0 , 0x61 , 0x8 , 0x0 , 0x61 , 0x8 , 0x0 , 0x63 , 0xc , 0x0 , 0xc7 , 0x7 , 0x0 , 0xc0 , 0x3 , // Char 83 S
0x4 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0xc , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x4 , // Char 84 T
0x1 , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0xff , 0x7 , 0x0 , 0x1 , 0xc , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x1 , 0x8 , 0x0 , 0x1 , 0x4 , 0x0 , 0xff , 0x3 , 0x0 , 0x1 , // Char 85 U
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7d , 0x0 , 0x0 , 0xe1 , 0x1 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x3 , 0x0 , 0xe1 , 0x0 , 0x0 , 0x39 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 86 V
0x1 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xf9 , 0x1 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xe , 0x0 , 0x81 , 0x3 , 0x0 , 0x73 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0xe1 , 0x3 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x7 , 0x0 , 0xe1 , 0x1 , 0x0 , 0x3d , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 87 W
0x1 , 0x8 , 0x0 , 0x1 , 0xc , 0x0 , 0x3 , 0xe , 0x0 , 0x7 , 0xb , 0x0 , 0x8f , 0x1 , 0x0 , 0x79 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x89 , 0xb , 0x0 , 0x7 , 0xf , 0x0 , 0x3 , 0xe , 0x0 , 0x1 , 0xc , 0x0 , 0x1 , 0x8 , // Char 88 X
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1d , 0x8 , 0x0 , 0x70 , 0xc , 0x0 , 0xe0 , 0xf , 0x0 , 0x60 , 0xc , 0x0 , 0x10 , 0x8 , 0x0 , 0xd , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 89 Y
0x0 , 0x8 , 0x0 , 0x6 , 0xc , 0x0 , 0x3 , 0xe , 0x0 , 0x81 , 0xb , 0x0 , 0xc1 , 0x9 , 0x0 , 0xe1 , 0x8 , 0x0 , 0x31 , 0x8 , 0x0 , 0x1d , 0x8 , 0x0 , 0xf , 0x8 , 0x0 , 0x7 , 0xc , 0x0 , 0x3 , 0xe , 0x0 , 0x0 , 0x1 , // Char 90 Z
0xff , 0x7f , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , // Char 91 [
0xf , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xf , // Char 92 Backslash
0x0 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , // Char 93 ]
0x20 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x20 , // Char 94 ^
0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , // Char 95 _
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 96 `
0x30 , 0x7 , 0x0 , 0x38 , 0xf , 0x0 , 0x88 , 0x8 , 0x0 , 0x88 , 0x8 , 0x0 , 0x88 , 0x0 , 0x0 , 0xd8 , 0x4 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x8 , // Char 97 a
0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x10 , 0x4 , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x8 , 0x0 , 0x18 , 0xc , 0x0 , 0x70 , 0x7 , 0x0 , 0xf0 , 0x3 , // Char 98 b
0xe0 , 0x3 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x18 , 0xc , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x8 , 0x0 , 0x30 , 0x4 , 0x0 , 0x20 , 0x4 , // Char 99 c
0xe0 , 0x3 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x18 , 0xc , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x8 , 0x0 , 0x1b , 0x4 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x8 , // Char 100 d
0xe0 , 0x3 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x48 , 0xc , 0x0 , 0x48 , 0x8 , 0x0 , 0x48 , 0x8 , 0x0 , 0x58 , 0x8 , 0x0 , 0x70 , 0x4 , 0x0 , 0x60 , // Char 101 e
0x8 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x8 , 0x8 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 102 f
0x0 , 0x20 , 0x0 , 0x60 , 0x76 , 0x0 , 0xf0 , 0x8f , 0x0 , 0x88 , 0x8d , 0x0 , 0x8 , 0x8d , 0x0 , 0x8 , 0x8d , 0x0 , 0x98 , 0x89 , 0x0 , 0xf6 , 0x98 , 0x0 , 0x66 , 0x78 , 0x0 , 0x2 , 0x30 , // Char 103 g
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x10 , 0x8 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x8 , 0x0 , 0xf8 , 0xf , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0x8 , // Char 104 h
0x8 , 0x8 , 0x0 , 0xfb , 0xf , 0x0 , 0xfb , 0xf , 0x0 , 0x0 , 0x8 , // Char 105 i
0x0 , 0xc0 , 0x0 , 0x8 , 0x80 , 0x0 , 0x8 , 0x80 , 0x0 , 0xfb , 0x7f , 0x0 , 0xfb , 0x3f , // Char 106 j
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x80 , 0x8 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xe8 , 0x1 , 0x0 , 0x98 , 0xf , 0x0 , 0x8 , 0xe , 0x0 , 0x8 , 0xc , 0x0 , 0x8 , 0x8 , // Char 107 k
0x1 , 0x8 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0x8 , // Char 108 l
0x18 , 0x8 , 0x0 , 0xf8 , 0xf , 0x0 , 0xf8 , 0xf , 0x0 , 0x10 , 0x8 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x8 , 0x0 , 0x38 , 0xc , 0x0 , 0xf8 , 0xf , 0x0 , 0x10 , 0xc , 0x0 , 0x10 , 0x8 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x8 , 0x0 , 0xf8 , 0xf , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0x8 , // Char 109 m
0x18 , 0x8 , 0x0 , 0xf8 , 0xf , 0x0 , 0xf8 , 0xf , 0x0 , 0x10 , 0x8 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x8 , 0x0 , 0xf8 , 0xf , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0x8 , // Char 110 n
0xe0 , 0x3 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x18 , 0xc , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x8 , 0x0 , 0x70 , 0x7 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x80 , // Char 111 o
0x18 , 0x80 , 0x0 , 0xf8 , 0xff , 0x0 , 0xf8 , 0xff , 0x0 , 0x0 , 0x88 , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x8 , 0x0 , 0x18 , 0xc , 0x0 , 0x70 , 0x7 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x80 , // Char 112 p
0xe0 , 0x3 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x18 , 0xc , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x80 , 0x0 , 0xf0 , 0xff , 0x0 , 0xf8 , 0xff , 0x0 , 0x0 , 0x80 , // Char 113 q
0x8 , 0x8 , 0x0 , 0xf8 , 0xf , 0x0 , 0xf8 , 0xf , 0x0 , 0x10 , 0x8 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , // Char 114 r
0x70 , 0xe , 0x0 , 0x78 , 0x4 , 0x0 , 0xc8 , 0x8 , 0x0 , 0xc8 , 0x8 , 0x0 , 0xc8 , 0x8 , 0x0 , 0x90 , 0x9 , 0x0 , 0xb8 , 0x7 , 0x0 , 0x0 , 0x3 , // Char 115 s
0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0xfc , 0x7 , 0x0 , 0xff , 0xf , 0x0 , 0x8 , 0x8 , 0x0 , 0x8 , 0x8 , 0x0 , 0x0 , 0x4 , // Char 116 t
0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x8 , 0x4 , 0x0 , 0xf8 , 0xf , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , // Char 117 u
0x8 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xc8 , 0x7 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x6 , 0x0 , 0xc8 , 0x1 , 0x0 , 0x38 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , // Char 118 v
0x8 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xc8 , 0xf , 0x0 , 0x0 , 0xe , 0x0 , 0x8 , 0x6 , 0x0 , 0xf8 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0xe8 , 0x7 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x6 , 0x0 , 0xc8 , 0x1 , 0x0 , 0x38 , 0x0 , 0x0 , 0x8 , // Char 119 w
0x8 , 0x8 , 0x0 , 0x8 , 0xc , 0x0 , 0x18 , 0xe , 0x0 , 0x78 , 0x9 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x28 , 0xf , 0x0 , 0x18 , 0xe , 0x0 , 0x8 , 0xc , 0x0 , 0x8 , 0x8 , // Char 120 x
0x8 , 0xc0 , 0x0 , 0x38 , 0xc0 , 0x0 , 0xf8 , 0x80 , 0x0 , 0xc8 , 0x47 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x6 , 0x0 , 0xc8 , 0x1 , 0x0 , 0x78 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x8 , // Char 121 y
0x0 , 0x8 , 0x0 , 0x18 , 0xc , 0x0 , 0x8 , 0xf , 0x0 , 0x88 , 0xb , 0x0 , 0xc8 , 0x9 , 0x0 , 0x78 , 0x8 , 0x0 , 0x38 , 0x8 , 0x0 , 0x18 , 0xc , // Char 122 z
0x60 , 0x0 , 0x0 , 0xbf , 0x1f , 0x0 , 0x0 , 0x20 , // Char 123 {
0xff , 0xff , // Char 124 |
0x0 , 0x20 , 0x0 , 0xbf , 0x3f , 0x0 , 0x60 , // Char 125 }
0x40 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x20 , // Char 126 ~
};