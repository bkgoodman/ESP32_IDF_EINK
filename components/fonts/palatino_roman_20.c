#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Palatino_Roman_20[] PROGMEM = {
11 , // Width 
20 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 11, // Char 32   - Nodata
 0x0, 0x0, 0x5, 0x4, // Char 33 ! 
 0x0, 0x5, 0xd, 0x7, // Char 34 " 
 0x0, 0x12, 0x1c, 0xc, // Char 35 # 
 0x0, 0x2e, 0x17, 0xa, // Char 36 $ 
 0x0, 0x45, 0x2c, 0x11, // Char 37 % 
 0x0, 0x71, 0x29, 0x10, // Char 38 & 
 0x0, 0x9a, 0x4, 0x4, // Char 39 ' 
 0x0, 0x9e, 0xf, 0x7, // Char 40 ( 
 0x0, 0xad, 0xe, 0x7, // Char 41 ) 
 0x0, 0xbb, 0x10, 0x8, // Char 42 * 
 0x0, 0xcb, 0x1d, 0xc, // Char 43 + 
 0x0, 0xe8, 0x8, 0x5, // Char 44 , 
 0x0, 0xf0, 0x11, 0x8, // Char 45 - 
 0x1, 0x1, 0x8, 0x5, // Char 46 . 
 0x1, 0x9, 0x16, 0xa, // Char 47 / 
 0x1, 0x1f, 0x17, 0xa, // Char 48 0 
 0x1, 0x36, 0x14, 0x9, // Char 49 1 
 0x1, 0x4a, 0x1a, 0xb, // Char 50 2 
 0x1, 0x64, 0x1a, 0xb, // Char 51 3 
 0x1, 0x7e, 0x1a, 0xb, // Char 52 4 
 0x1, 0x98, 0x1a, 0xb, // Char 53 5 
 0x1, 0xb2, 0x17, 0xa, // Char 54 6 
 0x1, 0xc9, 0x19, 0xb, // Char 55 7 
 0x1, 0xe2, 0x17, 0xa, // Char 56 8 
 0x1, 0xf9, 0x1a, 0xb, // Char 57 9 
 0x2, 0x13, 0x8, 0x5, // Char 58 : 
 0x2, 0x1b, 0xb, 0x6, // Char 59 ; 
 0x2, 0x26, 0x1d, 0xc, // Char 60 < 
 0x2, 0x43, 0x1d, 0xc, // Char 61 = 
 0x2, 0x60, 0x1d, 0xc, // Char 62 > 
 0x2, 0x7d, 0x13, 0x9, // Char 63 ? 
 0x2, 0x90, 0x2b, 0x11, // Char 64 @ 
 0x2, 0xbb, 0x2c, 0x11, // Char 65 A 
 0x2, 0xe7, 0x1d, 0xc, // Char 66 B 
 0x3, 0x4, 0x26, 0xf, // Char 67 C 
 0x3, 0x2a, 0x29, 0x10, // Char 68 D 
 0x3, 0x53, 0x1d, 0xc, // Char 69 E 
 0x3, 0x70, 0x1c, 0xc, // Char 70 F 
 0x3, 0x8c, 0x29, 0x10, // Char 71 G 
 0x3, 0xb5, 0x2c, 0x11, // Char 72 H 
 0x3, 0xe1, 0xe, 0x7, // Char 73 I 
 0x3, 0xef, 0x10, 0x8, // Char 74 J 
 0x3, 0xff, 0x26, 0xf, // Char 75 K 
 0x4, 0x25, 0x20, 0xd, // Char 76 L 
 0x4, 0x45, 0x35, 0x14, // Char 77 M 
 0x4, 0x7a, 0x2e, 0x12, // Char 78 N 
 0x4, 0xa8, 0x2c, 0x11, // Char 79 O 
 0x4, 0xd4, 0x1f, 0xd, // Char 80 P 
 0x4, 0xf3, 0x2d, 0x11, // Char 81 Q 
 0x5, 0x20, 0x23, 0xe, // Char 82 R 
 0x5, 0x43, 0x1d, 0xc, // Char 83 S 
 0x5, 0x60, 0x22, 0xe, // Char 84 T 
 0x5, 0x82, 0x2b, 0x11, // Char 85 U 
 0x5, 0xad, 0x28, 0x10, // Char 86 V 
 0x5, 0xd5, 0x37, 0x15, // Char 87 W 
 0x6, 0xc, 0x26, 0xf, // Char 88 X 
 0x6, 0x32, 0x25, 0xf, // Char 89 Y 
 0x6, 0x57, 0x26, 0xf, // Char 90 Z 
 0x6, 0x7d, 0xc, 0x6, // Char 91 [ 
 0x6, 0x89, 0x17, 0xa, // Char 92 Backslash 
 0x6, 0xa0, 0xc, 0x6, // Char 93 ] 
 0x6, 0xac, 0x1d, 0xc, // Char 94 ^ 
 0x6, 0xc9, 0x1e, 0xc, // Char 95 _ 
 0x6, 0xe7, 0xa, 0x6, // Char 96 ` 
 0x6, 0xf1, 0x17, 0xa, // Char 97 a 
 0x7, 0x8, 0x1d, 0xc, // Char 98 b 
 0x7, 0x25, 0x17, 0xa, // Char 99 c 
 0x7, 0x3c, 0x1d, 0xc, // Char 100 d 
 0x7, 0x59, 0x1a, 0xb, // Char 101 e 
 0x7, 0x73, 0x10, 0x8, // Char 102 f 
 0x7, 0x83, 0x1c, 0xc, // Char 103 g 
 0x7, 0x9f, 0x20, 0xd, // Char 104 h 
 0x7, 0xbf, 0xb, 0x6, // Char 105 i 
 0x7, 0xca, 0x9, 0x5, // Char 106 j 
 0x7, 0xd3, 0x1d, 0xc, // Char 107 k 
 0x7, 0xf0, 0xb, 0x6, // Char 108 l 
 0x7, 0xfb, 0x32, 0x13, // Char 109 m 
 0x8, 0x2d, 0x20, 0xd, // Char 110 n 
 0x8, 0x4d, 0x1a, 0xb, // Char 111 o 
 0x8, 0x67, 0x1d, 0xc, // Char 112 p 
 0x8, 0x84, 0x1b, 0xb, // Char 113 q 
 0x8, 0x9f, 0x10, 0x8, // Char 114 r 
 0x8, 0xaf, 0x14, 0x9, // Char 115 s 
 0x8, 0xc3, 0xe, 0x7, // Char 116 t 
 0x8, 0xd1, 0x23, 0xe, // Char 117 u 
 0x8, 0xf4, 0x1f, 0xd, // Char 118 v 
 0x9, 0x13, 0x2e, 0x12, // Char 119 w 
 0x9, 0x41, 0x1a, 0xb, // Char 120 x 
 0x9, 0x5b, 0x1f, 0xd, // Char 121 y 
 0x9, 0x7a, 0x1a, 0xb, // Char 122 z 
 0x9, 0x94, 0x9, 0x5, // Char 123 { 
 0x9, 0x9d, 0x6, 0x4, // Char 124 | 
 0x9, 0xa3, 0x8, 0x5, // Char 125 } 
 0x9, 0xab, 0x1d, 0xc, // Char 126 ~ 

// Data Table:
0xff , 0x63 , 0x0 , 0x3f , 0x60 , // Char 33 !
0x1f , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1f , // Char 34 "
0x0 , 0x2 , 0x0 , 0x20 , 0x2 , 0x0 , 0x20 , 0x7f , 0x0 , 0xff , 0x7 , 0x0 , 0x27 , 0x2 , 0x0 , 0x20 , 0x42 , 0x0 , 0xe0 , 0x7f , 0x0 , 0xff , 0x3 , 0x0 , 0x21 , 0x2 , 0x0 , 0x20 , // Char 35 #
0x7c , 0x78 , 0x0 , 0xe6 , 0x40 , 0x0 , 0xc2 , 0x40 , 0x0 , 0xff , 0xff , 0x1 , 0x81 , 0x41 , 0x0 , 0x83 , 0x41 , 0x0 , 0x86 , 0x33 , 0x0 , 0x6 , 0x1f , // Char 36 $
0x3e , 0x0 , 0x0 , 0x63 , 0x0 , 0x0 , 0x41 , 0x0 , 0x0 , 0x41 , 0x40 , 0x0 , 0x3f , 0x30 , 0x0 , 0x1e , 0xc , 0x0 , 0x0 , 0x3 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xc , 0x3e , 0x0 , 0x3 , 0x63 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x1e , // Char 37 %
0x0 , 0x1f , 0x0 , 0x80 , 0x3f , 0x0 , 0xdc , 0x70 , 0x0 , 0xfe , 0x60 , 0x0 , 0xe1 , 0x41 , 0x0 , 0x93 , 0x47 , 0x0 , 0xf , 0x2e , 0x0 , 0x0 , 0x3c , 0x0 , 0x40 , 0x38 , 0x0 , 0xc0 , 0x3e , 0x0 , 0xc0 , 0x63 , 0x0 , 0x40 , 0x60 , 0x0 , 0x40 , 0x60 , 0x0 , 0x40 , 0x20 , // Char 38 &
0xf , 0x0 , 0x0 , 0x1f , // Char 39 '
0xc0 , 0x1f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x1c , 0xc0 , 0x1 , 0x2 , 0x0 , 0x2 , 0x1 , 0x0 , 0x4 , // Char 40 (
0x1 , 0x0 , 0x4 , 0x6 , 0x0 , 0x3 , 0x7c , 0xf0 , 0x1 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x2 , // Char 41 )
0x36 , 0x0 , 0x0 , 0x14 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x49 , 0x0 , 0x0 , 0x8 , // Char 42 *
0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 43 +
0x0 , 0x80 , 0x3 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x70 , // Char 44 ,
0x0 , 0x2 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 45 -
0x0 , 0x20 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x20 , // Char 46 .
0x0 , 0x0 , 0x3 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x38 , 0x0 , 0x0 , 0xe , 0x0 , 0xc0 , 0x3 , 0x0 , 0x70 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x3 , // Char 47 /
0xfc , 0x1f , 0x0 , 0xe , 0x3c , 0x0 , 0x1 , 0x60 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x3 , 0x60 , 0x0 , 0x7e , 0x3e , 0x0 , 0xfc , 0xf , // Char 48 0
0x4 , 0x0 , 0x0 , 0x6 , 0x40 , 0x0 , 0x2 , 0x40 , 0x0 , 0xfe , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , // Char 49 1
0x0 , 0x40 , 0x0 , 0xe , 0x60 , 0x0 , 0x3 , 0x70 , 0x0 , 0x3 , 0x68 , 0x0 , 0x3 , 0x66 , 0x0 , 0x3 , 0x63 , 0x0 , 0xc7 , 0x61 , 0x0 , 0x7e , 0x60 , 0x0 , 0x18 , 0x60 , // Char 50 2
0x0 , 0x10 , 0x0 , 0xe , 0x60 , 0x0 , 0x2 , 0x40 , 0x0 , 0x83 , 0x40 , 0x0 , 0x83 , 0x40 , 0x0 , 0xc3 , 0x40 , 0x0 , 0xe7 , 0x21 , 0x0 , 0xbe , 0x3f , 0x0 , 0x0 , 0xf , // Char 51 3
0x0 , 0x4 , 0x0 , 0x0 , 0x7 , 0x0 , 0xc0 , 0x4 , 0x0 , 0x20 , 0x44 , 0x0 , 0x8 , 0x44 , 0x0 , 0xe , 0x6e , 0x0 , 0xfe , 0x7f , 0x0 , 0x0 , 0x4c , 0x0 , 0x0 , 0x44 , // Char 52 4
0x0 , 0x10 , 0x0 , 0x70 , 0x60 , 0x0 , 0x7f , 0x40 , 0x0 , 0x63 , 0x40 , 0x0 , 0x63 , 0x40 , 0x0 , 0x63 , 0x40 , 0x0 , 0xe3 , 0x20 , 0x0 , 0xc3 , 0x1f , 0x0 , 0x83 , 0xf , // Char 53 5
0xe0 , 0x1f , 0x0 , 0xf8 , 0x3f , 0x0 , 0x9c , 0x60 , 0x0 , 0x46 , 0x40 , 0x0 , 0x42 , 0x40 , 0x0 , 0xc1 , 0x40 , 0x0 , 0xc1 , 0x3b , 0x0 , 0x80 , 0x1f , // Char 54 6
0xf , 0x40 , 0x0 , 0x3 , 0x70 , 0x0 , 0x3 , 0x3c , 0x0 , 0x3 , 0xe , 0x0 , 0x83 , 0x3 , 0x0 , 0x63 , 0x0 , 0x0 , 0x1b , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3 , // Char 55 7
0x3c , 0x3e , 0x0 , 0x7e , 0x61 , 0x0 , 0xe1 , 0x40 , 0x0 , 0xc1 , 0x40 , 0x0 , 0xc1 , 0x40 , 0x0 , 0xe1 , 0x41 , 0x0 , 0x9e , 0x37 , 0x0 , 0xc , 0x1f , // Char 56 8
0x30 , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0xc6 , 0x41 , 0x0 , 0x81 , 0x41 , 0x0 , 0x1 , 0x21 , 0x0 , 0x1 , 0x11 , 0x0 , 0x83 , 0x1c , 0x0 , 0xfe , 0x7 , 0x0 , 0xfc , 0x3 , // Char 57 9
0x40 , 0x20 , 0x0 , 0x60 , 0x60 , 0x0 , 0x40 , 0x20 , // Char 58 :
0x0 , 0x0 , 0x2 , 0x0 , 0x80 , 0x1 , 0x60 , 0xe0 , 0x0 , 0x60 , 0x30 , // Char 59 ;
0x80 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xc0 , 0x6 , 0x0 , 0x60 , 0x6 , 0x0 , 0x60 , 0xc , 0x0 , 0x30 , 0xc , 0x0 , 0x30 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x30 , // Char 60 <
0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , // Char 61 =
0x18 , 0x30 , 0x0 , 0x18 , 0x30 , 0x0 , 0x30 , 0x18 , 0x0 , 0x30 , 0x18 , 0x0 , 0x60 , 0xc , 0x0 , 0x60 , 0xc , 0x0 , 0xc0 , 0x6 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0x3 , // Char 62 >
0x6 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x67 , 0x0 , 0x83 , 0x60 , 0x0 , 0x63 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x1c , // Char 63 ?
0xc0 , 0x1 , 0x0 , 0xf0 , 0xf , 0x0 , 0xc , 0x18 , 0x0 , 0x86 , 0x33 , 0x0 , 0xc2 , 0x27 , 0x0 , 0x63 , 0x68 , 0x0 , 0x31 , 0x48 , 0x0 , 0x11 , 0x44 , 0x0 , 0x1 , 0x47 , 0x0 , 0xe1 , 0x4f , 0x0 , 0xf3 , 0x68 , 0x0 , 0x2 , 0x20 , 0x0 , 0xc , 0x12 , 0x0 , 0xf8 , 0x9 , 0x0 , 0x20 , // Char 64 @
0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x5c , 0x0 , 0x80 , 0x43 , 0x0 , 0xe0 , 0x2 , 0x0 , 0x1c , 0x2 , 0x0 , 0xf , 0x2 , 0x0 , 0x3e , 0x2 , 0x0 , 0xf8 , 0x2 , 0x0 , 0xc0 , 0x47 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x40 , // Char 65 A
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x41 , 0x40 , 0x0 , 0x41 , 0x40 , 0x0 , 0x41 , 0x40 , 0x0 , 0x41 , 0x40 , 0x0 , 0xe3 , 0x60 , 0x0 , 0x9f , 0x3f , 0x0 , 0x8e , 0x1f , // Char 66 B
0xc0 , 0x1 , 0x0 , 0xf0 , 0xf , 0x0 , 0xfc , 0x1f , 0x0 , 0xe , 0x38 , 0x0 , 0x2 , 0x30 , 0x0 , 0x2 , 0x60 , 0x0 , 0x1 , 0x60 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x3 , 0x20 , 0x0 , 0xe , 0x20 , // Char 67 C
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x60 , 0x0 , 0x3 , 0x20 , 0x0 , 0x6 , 0x30 , 0x0 , 0x1e , 0x1c , 0x0 , 0xfc , 0xf , 0x0 , 0xf0 , 0x3 , // Char 68 D
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x81 , 0x40 , 0x0 , 0x81 , 0x40 , 0x0 , 0x81 , 0x40 , 0x0 , 0x81 , 0x40 , 0x0 , 0x81 , 0x40 , 0x0 , 0xe1 , 0x43 , 0x0 , 0x7 , 0x70 , // Char 69 E
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x81 , 0x60 , 0x0 , 0x81 , 0x40 , 0x0 , 0x81 , 0x0 , 0x0 , 0x81 , 0x0 , 0x0 , 0x81 , 0x0 , 0x0 , 0xe3 , 0x3 , 0x0 , 0x7 , // Char 70 F
0xc0 , 0x1 , 0x0 , 0xf0 , 0xf , 0x0 , 0xfc , 0x1f , 0x0 , 0xe , 0x38 , 0x0 , 0x2 , 0x30 , 0x0 , 0x3 , 0x60 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x42 , 0x0 , 0x3 , 0x62 , 0x0 , 0x3 , 0x3e , 0x0 , 0xe , 0x3e , // Char 71 G
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x83 , 0x40 , 0x0 , 0x81 , 0x40 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x81 , 0x40 , 0x0 , 0x81 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , // Char 72 H
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x3 , 0x60 , 0x0 , 0x1 , 0x40 , // Char 73 I
0x1 , 0x0 , 0x6 , 0x1 , 0x0 , 0x6 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 74 J
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x83 , 0x60 , 0x0 , 0xc1 , 0x41 , 0x0 , 0xa0 , 0x3 , 0x0 , 0x10 , 0x7 , 0x0 , 0x8 , 0xe , 0x0 , 0x4 , 0x1c , 0x0 , 0x3 , 0x38 , 0x0 , 0x3 , 0x70 , 0x0 , 0x1 , 0x60 , 0x0 , 0x1 , 0x40 , // Char 75 K
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x3 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x38 , // Char 76 L
0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xf , 0x40 , 0x0 , 0x3e , 0x40 , 0x0 , 0xf8 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xe , 0x0 , 0x80 , 0x3 , 0x0 , 0x60 , 0x0 , 0x0 , 0x1c , 0x40 , 0x0 , 0xf , 0x60 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x1 , 0x40 , // Char 77 M
0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0x7 , 0x40 , 0x0 , 0xe , 0x40 , 0x0 , 0x3c , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3c , 0x0 , 0x1 , 0x78 , 0x0 , 0xff , 0x7f , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 78 N
0xc0 , 0x1 , 0x0 , 0xf8 , 0xf , 0x0 , 0xfc , 0x1f , 0x0 , 0x6 , 0x38 , 0x0 , 0x2 , 0x30 , 0x0 , 0x1 , 0x60 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x3 , 0x20 , 0x0 , 0x6 , 0x20 , 0x0 , 0xe , 0x18 , 0x0 , 0xfc , 0xf , 0x0 , 0xf8 , 0x7 , // Char 79 O
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x1 , 0x60 , 0x0 , 0x1 , 0x40 , 0x0 , 0x81 , 0x0 , 0x0 , 0x81 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0xc , // Char 80 P
0xc0 , 0x1 , 0x0 , 0xf8 , 0xf , 0x0 , 0xfc , 0x1f , 0x0 , 0x6 , 0x38 , 0x0 , 0x2 , 0x30 , 0x0 , 0x1 , 0x60 , 0x0 , 0x1 , 0x40 , 0x1 , 0x1 , 0xc0 , 0x1 , 0x1 , 0xc0 , 0x1 , 0x1 , 0xc0 , 0x1 , 0x3 , 0x20 , 0x3 , 0x6 , 0x20 , 0x3 , 0xe , 0x18 , 0x2 , 0xfc , 0xf , 0x2 , 0xf8 , 0x7 , 0x2 , // Char 81 Q
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x1 , 0x60 , 0x0 , 0x81 , 0x40 , 0x0 , 0x81 , 0x1 , 0x0 , 0xc1 , 0x7 , 0x0 , 0x43 , 0xe , 0x0 , 0x7f , 0x3c , 0x0 , 0x3e , 0x78 , 0x0 , 0x8 , 0x60 , 0x0 , 0x0 , 0x40 , // Char 82 R
0x10 , 0x0 , 0x0 , 0x7c , 0x70 , 0x0 , 0xe6 , 0x60 , 0x0 , 0xc1 , 0x40 , 0x0 , 0xc1 , 0x40 , 0x0 , 0xc1 , 0x40 , 0x0 , 0x81 , 0x41 , 0x0 , 0x83 , 0x21 , 0x0 , 0x8e , 0x1f , 0x0 , 0x0 , 0xf , // Char 83 S
0x7 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x7 , // Char 84 T
0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0x3f , 0x0 , 0x1 , 0x70 , 0x0 , 0x1 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x1 , 0x30 , 0x0 , 0xff , 0x1f , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 85 U
0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xf9 , 0x1 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1c , 0x0 , 0x80 , 0x3 , 0x0 , 0x71 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 86 V
0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0xc1 , 0x7f , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0xe , 0x0 , 0x80 , 0x3 , 0x0 , 0x70 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xf , 0x0 , 0xf1 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1 , // Char 87 W
0x0 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0x3 , 0x70 , 0x0 , 0x7 , 0x18 , 0x0 , 0x1e , 0xe , 0x0 , 0x78 , 0x3 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x18 , 0xf , 0x0 , 0xc , 0x3c , 0x0 , 0x3 , 0x70 , 0x0 , 0x1 , 0x60 , 0x0 , 0x1 , 0x40 , // Char 88 X
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3c , 0x40 , 0x0 , 0xf0 , 0x40 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x80 , 0x7f , 0x0 , 0x60 , 0x40 , 0x0 , 0x30 , 0x40 , 0x0 , 0xc , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 89 Y
0x0 , 0x40 , 0x0 , 0x0 , 0x60 , 0x0 , 0x3 , 0x78 , 0x0 , 0x1 , 0x5c , 0x0 , 0x1 , 0x4e , 0x0 , 0x81 , 0x47 , 0x0 , 0xc1 , 0x41 , 0x0 , 0xf1 , 0x40 , 0x0 , 0x79 , 0x40 , 0x0 , 0x1d , 0x40 , 0x0 , 0xf , 0x40 , 0x0 , 0x3 , 0x60 , 0x0 , 0x1 , 0x78 , // Char 90 Z
0xff , 0xff , 0x7 , 0x3 , 0x0 , 0x6 , 0x1 , 0x0 , 0x4 , 0x1 , 0x0 , 0x4 , // Char 91 [
0x3 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x60 , // Char 92 Backslash
0x1 , 0x0 , 0x4 , 0x1 , 0x0 , 0x4 , 0xff , 0xff , 0x7 , 0xff , 0xff , 0x7 , // Char 93 ]
0x0 , 0x1 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x70 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 94 ^
0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 95 _
0x2 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x8 , // Char 96 `
0xc0 , 0x7c , 0x0 , 0x40 , 0x7c , 0x0 , 0x20 , 0x42 , 0x0 , 0x20 , 0x62 , 0x0 , 0x60 , 0x22 , 0x0 , 0xe0 , 0x7f , 0x0 , 0xc0 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 97 a
0x1 , 0x0 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x3f , 0x0 , 0xc0 , 0x60 , 0x0 , 0x40 , 0x40 , 0x0 , 0x60 , 0x40 , 0x0 , 0x60 , 0x40 , 0x0 , 0x60 , 0x20 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x80 , 0xf , // Char 98 b
0x0 , 0x4 , 0x0 , 0x80 , 0x1f , 0x0 , 0xc0 , 0x38 , 0x0 , 0x40 , 0x60 , 0x0 , 0x20 , 0x60 , 0x0 , 0x20 , 0x40 , 0x0 , 0x60 , 0x40 , 0x0 , 0xe0 , 0x60 , // Char 99 c
0x80 , 0x1f , 0x0 , 0xc0 , 0x3f , 0x0 , 0x40 , 0x60 , 0x0 , 0x20 , 0x60 , 0x0 , 0x20 , 0x40 , 0x0 , 0x20 , 0x60 , 0x0 , 0x61 , 0x20 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0x40 , // Char 100 d
0x0 , 0x6 , 0x0 , 0x80 , 0x3f , 0x0 , 0xc0 , 0x3f , 0x0 , 0x20 , 0x62 , 0x0 , 0x20 , 0x62 , 0x0 , 0x20 , 0x42 , 0x0 , 0x60 , 0x42 , 0x0 , 0xc0 , 0x23 , 0x0 , 0x80 , 0x23 , // Char 101 e
0x40 , 0x40 , 0x0 , 0xf8 , 0x7f , 0x0 , 0xfc , 0x7f , 0x0 , 0x43 , 0x40 , 0x0 , 0x43 , 0x0 , 0x0 , 0x3 , // Char 102 f
0x80 , 0x7 , 0xf , 0xc0 , 0xf7 , 0x9 , 0x20 , 0x7c , 0x0 , 0x20 , 0x68 , 0x0 , 0x20 , 0x68 , 0x0 , 0x60 , 0x64 , 0x0 , 0xc0 , 0x67 , 0x8 , 0xc0 , 0xc3 , 0xc , 0x40 , 0xc0 , 0x7 , 0x40 , // Char 103 g
0x1 , 0x40 , 0x0 , 0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xc0 , 0x61 , 0x0 , 0x40 , 0x40 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 104 h
0x20 , 0x40 , 0x0 , 0xe3 , 0x7f , 0x0 , 0xe3 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 105 i
0x20 , 0x0 , 0x0 , 0xe3 , 0xff , 0xf , 0xe3 , 0xff , 0x7 , // Char 106 j
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0x46 , 0x0 , 0x0 , 0xf , 0x0 , 0x80 , 0x1c , 0x0 , 0x40 , 0x38 , 0x0 , 0x20 , 0x70 , 0x0 , 0x20 , 0x60 , 0x0 , 0x0 , 0x40 , // Char 107 k
0x1 , 0x40 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0x40 , // Char 108 l
0x0 , 0x40 , 0x0 , 0x60 , 0x40 , 0x0 , 0xe0 , 0x7f , 0x0 , 0xe0 , 0x7f , 0x0 , 0x40 , 0x40 , 0x0 , 0x60 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x60 , 0x40 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x80 , 0x7f , 0x0 , 0x40 , 0x40 , 0x0 , 0x60 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 109 m
0x0 , 0x40 , 0x0 , 0x60 , 0x40 , 0x0 , 0xe0 , 0x7f , 0x0 , 0xc0 , 0x7f , 0x0 , 0x40 , 0x40 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xe0 , 0x7f , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 110 n
0x80 , 0x1f , 0x0 , 0xc0 , 0x3f , 0x0 , 0x60 , 0x60 , 0x0 , 0x20 , 0x40 , 0x0 , 0x20 , 0x40 , 0x0 , 0x20 , 0x40 , 0x0 , 0x60 , 0x20 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x80 , 0x1f , // Char 111 o
0x60 , 0x0 , 0x0 , 0xe0 , 0xff , 0xf , 0xe0 , 0xff , 0xf , 0x40 , 0x60 , 0x0 , 0x60 , 0x40 , 0x0 , 0x60 , 0x40 , 0x0 , 0x60 , 0x20 , 0x0 , 0xe0 , 0x20 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x80 , 0xf , // Char 112 p
0x0 , 0x1f , 0x0 , 0x80 , 0x3f , 0x0 , 0x40 , 0x60 , 0x0 , 0x20 , 0x60 , 0x0 , 0x20 , 0x40 , 0x0 , 0x20 , 0x20 , 0x0 , 0x60 , 0x20 , 0x0 , 0xe0 , 0xff , 0xf , 0xe0 , 0xff , 0xf , // Char 113 q
0x40 , 0x40 , 0x0 , 0xe0 , 0x7f , 0x0 , 0xe0 , 0x7f , 0x0 , 0x40 , 0x40 , 0x0 , 0x60 , 0x40 , 0x0 , 0x60 , // Char 114 r
0xc0 , 0x73 , 0x0 , 0x60 , 0x43 , 0x0 , 0x20 , 0x46 , 0x0 , 0x20 , 0x46 , 0x0 , 0x20 , 0x46 , 0x0 , 0xe0 , 0x3c , 0x0 , 0x0 , 0x1c , // Char 115 s
0x20 , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0xfe , 0x7f , 0x0 , 0x20 , 0x60 , 0x0 , 0x20 , 0x20 , // Char 116 t
0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0xe0 , 0x7f , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x60 , 0x0 , 0x20 , 0x20 , 0x0 , 0xe0 , 0x7f , 0x0 , 0xe0 , 0x7f , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , // Char 117 u
0x20 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xe0 , 0xf , 0x0 , 0x20 , 0x3e , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x18 , 0x0 , 0x20 , 0x6 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , // Char 118 v
0x20 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xa0 , 0x1f , 0x0 , 0x20 , 0x7c , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x6 , 0x0 , 0x80 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x70 , 0x0 , 0x20 , 0x1c , 0x0 , 0xa0 , 0x3 , 0x0 , 0x60 , 0x0 , 0x0 , 0x20 , // Char 119 w
0x20 , 0x40 , 0x0 , 0x60 , 0x20 , 0x0 , 0xc0 , 0x19 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xf , 0x0 , 0x80 , 0x3d , 0x0 , 0x40 , 0x70 , 0x0 , 0x20 , 0x60 , 0x0 , 0x0 , 0x40 , // Char 120 x
0x20 , 0x0 , 0x0 , 0x60 , 0x0 , 0x8 , 0xe0 , 0x1 , 0x8 , 0xe0 , 0xf , 0xc , 0x20 , 0x7e , 0x7 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x20 , 0x6 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x60 , 0x0 , 0x0 , 0x20 , // Char 121 y
0x0 , 0x40 , 0x0 , 0xe0 , 0x60 , 0x0 , 0x20 , 0x70 , 0x0 , 0x20 , 0x5c , 0x0 , 0x20 , 0x4e , 0x0 , 0x20 , 0x47 , 0x0 , 0xe0 , 0x41 , 0x0 , 0xe0 , 0x40 , 0x0 , 0x60 , 0x60 , // Char 122 z
0x0 , 0x7 , 0x0 , 0xfe , 0xfd , 0x3 , 0x1 , 0x0 , 0x4 , // Char 123 {
0xff , 0xff , 0xf , 0xff , 0xff , 0xf , // Char 124 |
0x7f , 0xe0 , 0x7 , 0xfe , 0xfd , 0x3 , 0x0 , 0x2 , // Char 125 }
0x0 , 0x4 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x1 , // Char 126 ~
};
