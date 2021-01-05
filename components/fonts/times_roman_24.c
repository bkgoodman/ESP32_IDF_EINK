#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Times_Roman_24[] PROGMEM = {
12 , // Width 
24 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 12, // Char 32   - Nodata
 0x0, 0x0, 0x8, 0x5, // Char 33 ! 
 0x0, 0x8, 0x10, 0x8, // Char 34 " 
 0x0, 0x18, 0x22, 0xe, // Char 35 # 
 0x0, 0x3a, 0x1d, 0xc, // Char 36 $ 
 0x0, 0x57, 0x35, 0x14, // Char 37 % 
 0x0, 0x8c, 0x32, 0x13, // Char 38 & 
 0x0, 0xbe, 0x4, 0x4, // Char 39 ' 
 0x0, 0xc2, 0x12, 0x8, // Char 40 ( 
 0x0, 0xd4, 0x11, 0x8, // Char 41 ) 
 0x0, 0xe5, 0x16, 0xa, // Char 42 * 
 0x0, 0xfb, 0x23, 0xe, // Char 43 + 
 0x1, 0x1e, 0xc, 0x6, // Char 44 , 
 0x1, 0x2a, 0x11, 0x8, // Char 45 - 
 0x1, 0x3b, 0x5, 0x4, // Char 46 . 
 0x1, 0x40, 0x13, 0x9, // Char 47 / 
 0x1, 0x53, 0x1d, 0xc, // Char 48 0 
 0x1, 0x70, 0xe, 0x7, // Char 49 1 
 0x1, 0x7e, 0x1d, 0xc, // Char 50 2 
 0x1, 0x9b, 0x1a, 0xb, // Char 51 3 
 0x1, 0xb5, 0x20, 0xd, // Char 52 4 
 0x1, 0xd5, 0x1a, 0xb, // Char 53 5 
 0x1, 0xef, 0x1d, 0xc, // Char 54 6 
 0x2, 0xc, 0x1c, 0xc, // Char 55 7 
 0x2, 0x28, 0x1d, 0xc, // Char 56 8 
 0x2, 0x45, 0x1d, 0xc, // Char 57 9 
 0x2, 0x62, 0x8, 0x5, // Char 58 : 
 0x2, 0x6a, 0x9, 0x5, // Char 59 ; 
 0x2, 0x73, 0x1d, 0xc, // Char 60 < 
 0x2, 0x90, 0x23, 0xe, // Char 61 = 
 0x2, 0xb3, 0x1d, 0xc, // Char 62 > 
 0x2, 0xd0, 0x16, 0xa, // Char 63 ? 
 0x2, 0xe6, 0x2f, 0x12, // Char 64 @ 
 0x3, 0x15, 0x2f, 0x12, // Char 65 A 
 0x3, 0x44, 0x26, 0xf, // Char 66 B 
 0x3, 0x6a, 0x29, 0x10, // Char 67 C 
 0x3, 0x93, 0x2c, 0x11, // Char 68 D 
 0x3, 0xbf, 0x26, 0xf, // Char 69 E 
 0x3, 0xe5, 0x22, 0xe, // Char 70 F 
 0x4, 0x7, 0x2e, 0x12, // Char 71 G 
 0x4, 0x35, 0x2c, 0x11, // Char 72 H 
 0x4, 0x61, 0x11, 0x8, // Char 73 I 
 0x4, 0x72, 0x19, 0xb, // Char 74 J 
 0x4, 0x8b, 0x2f, 0x12, // Char 75 K 
 0x4, 0xba, 0x26, 0xf, // Char 76 L 
 0x4, 0xe0, 0x38, 0x15, // Char 77 M 
 0x5, 0x18, 0x31, 0x13, // Char 78 N 
 0x5, 0x49, 0x2f, 0x12, // Char 79 O 
 0x5, 0x78, 0x22, 0xe, // Char 80 P 
 0x5, 0x9a, 0x2f, 0x12, // Char 81 Q 
 0x5, 0xc9, 0x2c, 0x11, // Char 82 R 
 0x5, 0xf5, 0x20, 0xd, // Char 83 S 
 0x6, 0x15, 0x28, 0x10, // Char 84 T 
 0x6, 0x3d, 0x2e, 0x12, // Char 85 U 
 0x6, 0x6b, 0x2b, 0x11, // Char 86 V 
 0x6, 0x96, 0x40, 0x18, // Char 87 W 
 0x6, 0xd6, 0x2f, 0x12, // Char 88 X 
 0x7, 0x5, 0x2e, 0x12, // Char 89 Y 
 0x7, 0x33, 0x29, 0x10, // Char 90 Z 
 0x7, 0x5c, 0xf, 0x7, // Char 91 [ 
 0x7, 0x6b, 0x10, 0x8, // Char 92 Backslash 
 0x7, 0x7b, 0xf, 0x7, // Char 93 ] 
 0x7, 0x8a, 0x1a, 0xb, // Char 94 ^ 
 0x7, 0xa4, 0x24, 0xe, // Char 95 _ 
 0x7, 0xc8, 0xa, 0x6, // Char 96 ` 
 0x7, 0xd2, 0x1a, 0xb, // Char 97 a 
 0x7, 0xec, 0x20, 0xd, // Char 98 b 
 0x8, 0xc, 0x1a, 0xb, // Char 99 c 
 0x8, 0x26, 0x1d, 0xc, // Char 100 d 
 0x8, 0x43, 0x1a, 0xb, // Char 101 e 
 0x8, 0x5d, 0x16, 0xa, // Char 102 f 
 0x8, 0x73, 0x1e, 0xc, // Char 103 g 
 0x8, 0x91, 0x1d, 0xc, // Char 104 h 
 0x8, 0xae, 0xe, 0x7, // Char 105 i 
 0x8, 0xbc, 0x12, 0x8, // Char 106 j 
 0x8, 0xce, 0x20, 0xd, // Char 107 k 
 0x8, 0xee, 0xe, 0x7, // Char 108 l 
 0x8, 0xfc, 0x32, 0x13, // Char 109 m 
 0x9, 0x2e, 0x1d, 0xc, // Char 110 n 
 0x9, 0x4b, 0x1d, 0xc, // Char 111 o 
 0x9, 0x68, 0x20, 0xd, // Char 112 p 
 0x9, 0x88, 0x1e, 0xc, // Char 113 q 
 0x9, 0xa6, 0x13, 0x9, // Char 114 r 
 0x9, 0xb9, 0x14, 0x9, // Char 115 s 
 0x9, 0xcd, 0xd, 0x7, // Char 116 t 
 0x9, 0xda, 0x1d, 0xc, // Char 117 u 
 0x9, 0xf7, 0x1c, 0xc, // Char 118 v 
 0xa, 0x13, 0x2b, 0x11, // Char 119 w 
 0xa, 0x3e, 0x1d, 0xc, // Char 120 x 
 0xa, 0x5b, 0x1c, 0xc, // Char 121 y 
 0xa, 0x77, 0x1a, 0xb, // Char 122 z 
 0xa, 0x91, 0xf, 0x7, // Char 123 { 
 0xa, 0xa0, 0x3, 0x3, // Char 124 | 
 0xa, 0xa3, 0xe, 0x7, // Char 125 } 
 0xa, 0xb1, 0x20, 0xd, // Char 126 ~ 

// Data Table:
0x3f , 0xc0 , 0x0 , 0xff , 0xc7 , 0x0 , 0xe , 0x40 , // Char 33 !
0x3f , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x1f , // Char 34 "
0x0 , 0x4 , 0x0 , 0x20 , 0x4 , 0x0 , 0x20 , 0xfc , 0x0 , 0xe0 , 0x7f , 0x0 , 0xff , 0x5 , 0x0 , 0x23 , 0x4 , 0x0 , 0x20 , 0x4 , 0x0 , 0x20 , 0xfe , 0x0 , 0xfc , 0x1f , 0x0 , 0x7f , 0x4 , 0x0 , 0x20 , 0x4 , 0x0 , 0x20 , // Char 35 #
0x1c , 0x70 , 0x0 , 0x3e , 0xc0 , 0x0 , 0x73 , 0x80 , 0x0 , 0xe1 , 0x80 , 0x0 , 0xff , 0xff , 0x3 , 0xc1 , 0x83 , 0x0 , 0x81 , 0x83 , 0x0 , 0x3 , 0xc7 , 0x0 , 0x6 , 0x7e , 0x0 , 0x0 , 0x3c , // Char 36 $
0x60 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0xbe , 0x1 , 0x0 , 0x6 , 0x1 , 0x0 , 0x3 , 0x81 , 0x0 , 0x81 , 0x60 , 0x0 , 0x41 , 0x38 , 0x0 , 0x3e , 0xe , 0x0 , 0x2 , 0x3 , 0x0 , 0xc2 , 0x0 , 0x0 , 0x72 , 0x7c , 0x0 , 0x1e , 0xfe , 0x0 , 0x7 , 0x87 , 0x0 , 0x81 , 0x81 , 0x0 , 0x80 , 0x80 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x39 , 0x0 , 0x0 , 0x6 , // Char 37 %
0x0 , 0x3c , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0xf3 , 0x0 , 0x0 , 0xc1 , 0x0 , 0xfc , 0x80 , 0x0 , 0xfe , 0x80 , 0x0 , 0xc1 , 0xc3 , 0x0 , 0xc1 , 0x4f , 0x0 , 0x21 , 0x3e , 0x0 , 0x1e , 0x3c , 0x0 , 0xc , 0x78 , 0x0 , 0x40 , 0xe4 , 0x0 , 0xc0 , 0xc3 , 0x0 , 0xc0 , 0xc0 , 0x0 , 0x40 , 0xc0 , 0x0 , 0x40 , 0x40 , 0x0 , 0x0 , 0x20 , // Char 38 &
0xf , 0x0 , 0x0 , 0x3f , // Char 39 '
0x80 , 0x1f , 0x0 , 0xf0 , 0xff , 0x0 , 0x78 , 0xe0 , 0x1 , 0xc , 0x0 , 0x3 , 0x2 , 0x0 , 0x4 , 0x1 , 0x0 , 0x8 , // Char 40 (
0x1 , 0x0 , 0x8 , 0x2 , 0x0 , 0x4 , 0xc , 0x0 , 0x3 , 0x78 , 0xe0 , 0x1 , 0xe0 , 0xff , 0x0 , 0x80 , 0x1f , // Char 41 )
0xcc , 0x0 , 0x0 , 0x48 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xb7 , 0x3 , 0x0 , 0xf7 , 0x3 , 0x0 , 0x38 , 0x0 , 0x0 , 0x4c , 0x0 , 0x0 , 0xcc , // Char 42 *
0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0xf0 , 0xff , 0x0 , 0xf0 , 0xff , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , // Char 43 +
0x0 , 0x40 , 0x0 , 0x0 , 0xe0 , 0x4 , 0x0 , 0xc0 , 0x2 , 0x0 , 0x80 , 0x1 , // Char 44 ,
0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x4 , // Char 45 -
0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , // Char 46 .
0x0 , 0xc0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x1f , 0x0 , 0xe0 , 0x3 , 0x0 , 0x7c , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1 , // Char 47 /
0xf8 , 0x1f , 0x0 , 0xfc , 0x3f , 0x0 , 0x6 , 0x60 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x6 , 0x60 , 0x0 , 0xfc , 0x3f , 0x0 , 0xf8 , 0x1f , // Char 48 0
0x2 , 0x80 , 0x0 , 0xfe , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , // Char 49 1
0x8 , 0x80 , 0x0 , 0x6 , 0xc0 , 0x0 , 0x2 , 0xe0 , 0x0 , 0x3 , 0xd0 , 0x0 , 0x3 , 0xc8 , 0x0 , 0x3 , 0xc6 , 0x0 , 0x87 , 0xc3 , 0x0 , 0xfe , 0xc0 , 0x0 , 0x7c , 0xc0 , 0x0 , 0x0 , 0x60 , // Char 50 2
0x8 , 0x40 , 0x0 , 0x6 , 0xc0 , 0x0 , 0x2 , 0xc0 , 0x0 , 0x83 , 0x80 , 0x0 , 0x83 , 0x80 , 0x0 , 0xc3 , 0x81 , 0x0 , 0xff , 0x41 , 0x0 , 0x9e , 0x7f , 0x0 , 0x8 , 0x1f , // Char 51 3
0x0 , 0xc , 0x0 , 0x0 , 0xe , 0x0 , 0x80 , 0xd , 0x0 , 0x40 , 0xc , 0x0 , 0x20 , 0xc , 0x0 , 0x18 , 0xc , 0x0 , 0x4 , 0xc , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , // Char 52 4
0x0 , 0xc0 , 0x0 , 0x38 , 0xc0 , 0x0 , 0x3e , 0xc0 , 0x0 , 0x73 , 0x80 , 0x0 , 0x73 , 0x80 , 0x0 , 0x63 , 0x80 , 0x0 , 0xe3 , 0x40 , 0x0 , 0xc3 , 0x3f , 0x0 , 0x83 , 0x1f , // Char 53 5
0xe0 , 0x1f , 0x0 , 0xf8 , 0x3f , 0x0 , 0x7c , 0x70 , 0x0 , 0xe , 0xc0 , 0x0 , 0x23 , 0x80 , 0x0 , 0x21 , 0x80 , 0x0 , 0x61 , 0x80 , 0x0 , 0xe0 , 0x40 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x80 , 0x1f , // Char 54 6
0x6 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x80 , 0x0 , 0x3 , 0xf0 , 0x0 , 0x3 , 0x3e , 0x0 , 0xc3 , 0x7 , 0x0 , 0xfb , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1 , // Char 55 7
0x8 , 0x18 , 0x0 , 0x3e , 0x7c , 0x0 , 0x72 , 0x66 , 0x0 , 0xe1 , 0x81 , 0x0 , 0xc1 , 0x81 , 0x0 , 0x81 , 0x83 , 0x0 , 0xc1 , 0x83 , 0x0 , 0x3e , 0x4f , 0x0 , 0x1e , 0x7e , 0x0 , 0x0 , 0x18 , // Char 56 8
0xf8 , 0x0 , 0x0 , 0xfe , 0x81 , 0x0 , 0x82 , 0x83 , 0x0 , 0x1 , 0x82 , 0x0 , 0x1 , 0x42 , 0x0 , 0x1 , 0x62 , 0x0 , 0x3 , 0x38 , 0x0 , 0x1e , 0x1f , 0x0 , 0xfc , 0xf , 0x0 , 0xf0 , 0x3 , // Char 57 9
0x60 , 0xc0 , 0x0 , 0xe0 , 0xe0 , 0x0 , 0x40 , 0x40 , // Char 58 :
0x60 , 0xc0 , 0x0 , 0xe0 , 0xe0 , 0x4 , 0x40 , 0xc0 , 0x3 , // Char 59 ;
0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x40 , 0x7 , 0x0 , 0x20 , 0x6 , 0x0 , 0x10 , 0xe , 0x0 , 0x10 , 0x1c , 0x0 , 0x8 , 0x18 , 0x0 , 0xc , 0x38 , 0x0 , 0x4 , 0x30 , // Char 60 <
0xc0 , 0x18 , 0x0 , 0xc0 , 0x18 , 0x0 , 0xc0 , 0x18 , 0x0 , 0xc0 , 0x18 , 0x0 , 0xc0 , 0x18 , 0x0 , 0xc0 , 0x18 , 0x0 , 0xc0 , 0x18 , 0x0 , 0xc0 , 0x18 , 0x0 , 0xc0 , 0x18 , 0x0 , 0xc0 , 0x18 , 0x0 , 0xc0 , 0x18 , 0x0 , 0xc0 , 0x18 , // Char 61 =
0x1c , 0x20 , 0x0 , 0x18 , 0x20 , 0x0 , 0x38 , 0x10 , 0x0 , 0x70 , 0x18 , 0x0 , 0x60 , 0x8 , 0x0 , 0xe0 , 0x4 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 62 >
0x1e , 0x0 , 0x0 , 0x9 , 0x0 , 0x0 , 0x1 , 0x40 , 0x0 , 0x1 , 0xc8 , 0x0 , 0x1 , 0xc3 , 0x0 , 0xe7 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x3c , // Char 63 ?
0xe0 , 0x7 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x1c , 0x38 , 0x0 , 0x6 , 0x60 , 0x0 , 0x2 , 0x40 , 0x0 , 0xc3 , 0xc7 , 0x0 , 0xe1 , 0x8f , 0x0 , 0x31 , 0x88 , 0x0 , 0x11 , 0x84 , 0x0 , 0x1 , 0x86 , 0x0 , 0x91 , 0x87 , 0x0 , 0xf1 , 0x8f , 0x0 , 0x32 , 0x48 , 0x0 , 0x6 , 0x48 , 0x0 , 0xc , 0x4 , 0x0 , 0xf8 , 0x3 , // Char 64 @
0x0 , 0x80 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x8e , 0x0 , 0xc0 , 0x5 , 0x0 , 0x70 , 0x4 , 0x0 , 0x1c , 0x4 , 0x0 , 0x1f , 0x4 , 0x0 , 0x7e , 0x4 , 0x0 , 0xf0 , 0x7 , 0x0 , 0xc0 , 0x8f , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , // Char 65 A
0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x81 , 0x80 , 0x0 , 0x81 , 0x80 , 0x0 , 0x81 , 0x80 , 0x0 , 0x81 , 0x80 , 0x0 , 0x83 , 0x81 , 0x0 , 0xc7 , 0xc1 , 0x0 , 0x7e , 0x7f , 0x0 , 0x3c , 0x7f , 0x0 , 0x0 , 0x3e , // Char 66 B
0xf0 , 0xf , 0x0 , 0xf8 , 0x1f , 0x0 , 0xfc , 0x3f , 0x0 , 0xe , 0x70 , 0x0 , 0x2 , 0xe0 , 0x0 , 0x3 , 0xc0 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x3 , 0x80 , 0x0 , 0x3 , 0x40 , 0x0 , 0xf , 0x40 , 0x0 , 0x1f , 0x20 , // Char 67 C
0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x3 , 0xc0 , 0x0 , 0x6 , 0x40 , 0x0 , 0xe , 0x60 , 0x0 , 0x3c , 0x3c , 0x0 , 0xf8 , 0x1f , 0x0 , 0xf0 , 0xf , // Char 68 D
0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x81 , 0x80 , 0x0 , 0x81 , 0x80 , 0x0 , 0x81 , 0x80 , 0x0 , 0x81 , 0x80 , 0x0 , 0x81 , 0x80 , 0x0 , 0x81 , 0x81 , 0x0 , 0xe3 , 0xc3 , 0x0 , 0x7 , 0xc0 , 0x0 , 0x0 , 0x70 , // Char 69 E
0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x81 , 0x80 , 0x0 , 0x81 , 0x80 , 0x0 , 0x81 , 0x0 , 0x0 , 0x81 , 0x0 , 0x0 , 0x81 , 0x0 , 0x0 , 0xc1 , 0x1 , 0x0 , 0xe3 , 0x3 , 0x0 , 0x7 , // Char 70 F
0xe0 , 0xf , 0x0 , 0xf8 , 0x1f , 0x0 , 0xfc , 0x3f , 0x0 , 0xe , 0x70 , 0x0 , 0x6 , 0x60 , 0x0 , 0x3 , 0xc0 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x81 , 0x80 , 0x0 , 0x83 , 0xc0 , 0x0 , 0x87 , 0x7f , 0x0 , 0x9f , 0x7f , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , // Char 71 G
0x1 , 0x80 , 0x0 , 0x7 , 0xe0 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x81 , 0x80 , 0x0 , 0x81 , 0x80 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x81 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x1 , 0x80 , // Char 72 H
0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , // Char 73 I
0x0 , 0x40 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x1 , 0xc0 , 0x0 , 0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x1f , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 74 J
0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x83 , 0xc1 , 0x0 , 0x81 , 0x81 , 0x0 , 0xc0 , 0x3 , 0x0 , 0xa0 , 0x7 , 0x0 , 0x10 , 0xf , 0x0 , 0x9 , 0x9c , 0x0 , 0x7 , 0xf8 , 0x0 , 0x3 , 0xf0 , 0x0 , 0x3 , 0xe0 , 0x0 , 0x1 , 0xc0 , 0x0 , 0x1 , 0x80 , 0x0 , 0x0 , 0x80 , // Char 75 K
0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x70 , // Char 76 L
0x1 , 0x80 , 0x0 , 0x3 , 0xe0 , 0x0 , 0xff , 0xff , 0x0 , 0x1f , 0x80 , 0x0 , 0x7e , 0x80 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x7 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x38 , 0x80 , 0x0 , 0xe , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x1 , 0x80 , // Char 77 M
0x1 , 0x0 , 0x0 , 0x1 , 0x80 , 0x0 , 0x3 , 0xe0 , 0x0 , 0xff , 0xff , 0x0 , 0xf , 0x80 , 0x0 , 0x1e , 0x80 , 0x0 , 0x78 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1e , 0x0 , 0x1 , 0x3c , 0x0 , 0x7 , 0x78 , 0x0 , 0xff , 0xff , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 78 N
0xf0 , 0xf , 0x0 , 0xf8 , 0x1f , 0x0 , 0xfc , 0x3f , 0x0 , 0xe , 0x70 , 0x0 , 0x2 , 0x40 , 0x0 , 0x3 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x3 , 0xc0 , 0x0 , 0x6 , 0x60 , 0x0 , 0x3c , 0x3c , 0x0 , 0xfc , 0x3f , 0x0 , 0xf0 , 0xf , 0x0 , 0x80 , 0x1 , // Char 79 O
0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x1 , 0x81 , 0x0 , 0x1 , 0x81 , 0x0 , 0x1 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0xfe , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x3c , // Char 80 P
0xe0 , 0xf , 0x0 , 0xf8 , 0x3f , 0x0 , 0xfc , 0x7f , 0x0 , 0xe , 0xe0 , 0x0 , 0x2 , 0xc0 , 0x0 , 0x3 , 0x80 , 0x1 , 0x1 , 0x0 , 0x3 , 0x1 , 0x0 , 0x7 , 0x1 , 0x0 , 0x7 , 0x1 , 0x80 , 0xf , 0x3 , 0x80 , 0xc , 0x6 , 0xc0 , 0x8 , 0x3c , 0x7c , 0x18 , 0xf8 , 0x3f , 0x10 , 0xf0 , 0x1f , 0x10 , 0x0 , 0x1 , // Char 81 Q
0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x1 , 0x81 , 0x0 , 0x1 , 0x81 , 0x0 , 0x1 , 0x7 , 0x0 , 0x81 , 0xf , 0x0 , 0x83 , 0x1f , 0x0 , 0xfe , 0x38 , 0x0 , 0xfe , 0xf0 , 0x0 , 0x7c , 0xe0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , // Char 82 R
0x0 , 0x78 , 0x0 , 0x3c , 0xe0 , 0x0 , 0x7e , 0xc0 , 0x0 , 0xe3 , 0x80 , 0x0 , 0xe1 , 0x81 , 0x0 , 0xc1 , 0x81 , 0x0 , 0x81 , 0x83 , 0x0 , 0x83 , 0xc7 , 0x0 , 0x7 , 0x7f , 0x0 , 0x1f , 0x7e , 0x0 , 0x0 , 0x1c , // Char 83 S
0xf , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x80 , 0x0 , 0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xf , // Char 84 T
0x1 , 0x0 , 0x0 , 0xff , 0x3 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x7f , 0x0 , 0x1 , 0xe0 , 0x0 , 0x1 , 0xc0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x1 , 0x40 , 0x0 , 0x7 , 0x38 , 0x0 , 0xff , 0xf , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 85 U
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0xfd , 0x1 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1e , 0x0 , 0x80 , 0x3 , 0x0 , 0xe1 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 86 V
0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0xf1 , 0x7 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0xfe , 0x0 , 0x1 , 0x3c , 0x0 , 0x3 , 0x7 , 0x0 , 0xef , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0xfd , 0x1 , 0x0 , 0xe1 , 0xf , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0x1c , 0x0 , 0x80 , 0x3 , 0x0 , 0xf1 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 87 W
0x1 , 0x80 , 0x0 , 0x1 , 0xc0 , 0x0 , 0x7 , 0xe0 , 0x0 , 0xf , 0xb0 , 0x0 , 0x1f , 0x88 , 0x0 , 0x7d , 0x6 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x30 , 0x9f , 0x0 , 0x19 , 0xfc , 0x0 , 0xf , 0xf8 , 0x0 , 0x3 , 0xe0 , 0x0 , 0x1 , 0xc0 , 0x0 , 0x1 , 0x80 , 0x0 , 0x0 , 0x80 , // Char 88 X
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x79 , 0x80 , 0x0 , 0xe0 , 0xe1 , 0x0 , 0xc0 , 0xff , 0x0 , 0x80 , 0xff , 0x0 , 0xc0 , 0x80 , 0x0 , 0x30 , 0x80 , 0x0 , 0x19 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 89 Y
0x0 , 0x80 , 0x0 , 0xf , 0xc0 , 0x0 , 0x3 , 0xf0 , 0x0 , 0x1 , 0xf8 , 0x0 , 0x1 , 0xbc , 0x0 , 0x1 , 0x8f , 0x0 , 0x81 , 0x87 , 0x0 , 0xe1 , 0x81 , 0x0 , 0xf1 , 0x80 , 0x0 , 0x79 , 0x80 , 0x0 , 0x1f , 0x80 , 0x0 , 0xf , 0x80 , 0x0 , 0x3 , 0xc0 , 0x0 , 0x1 , 0xf0 , // Char 90 Z
0xff , 0xff , 0xf , 0xff , 0xff , 0xf , 0x1 , 0x0 , 0x8 , 0x1 , 0x0 , 0x8 , 0x1 , 0x0 , 0x8 , // Char 91 [
0x3f , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x1f , // Char 92 Backslash
0x1 , 0x0 , 0x8 , 0x1 , 0x0 , 0x8 , 0x1 , 0x0 , 0x8 , 0xff , 0xff , 0xf , 0xff , 0xff , 0xf , // Char 93 ]
0x80 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x80 , 0x1 , // Char 94 ^
0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , // Char 95 _
0x3 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x8 , // Char 96 `
0x80 , 0x70 , 0x0 , 0xc0 , 0xf9 , 0x0 , 0x60 , 0xcc , 0x0 , 0x20 , 0xc4 , 0x0 , 0x20 , 0x42 , 0x0 , 0x20 , 0x42 , 0x0 , 0xc0 , 0xff , 0x0 , 0x80 , 0xff , 0x0 , 0x0 , 0xc0 , // Char 97 a
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0xff , 0x0 , 0x40 , 0x80 , 0x0 , 0x60 , 0x80 , 0x0 , 0x60 , 0x80 , 0x0 , 0x60 , 0x80 , 0x0 , 0xe0 , 0x41 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x80 , 0x1f , // Char 98 b
0x80 , 0x3f , 0x0 , 0xc0 , 0x7f , 0x0 , 0x40 , 0xe0 , 0x0 , 0x20 , 0xc0 , 0x0 , 0x20 , 0xc0 , 0x0 , 0x20 , 0xc0 , 0x0 , 0xe0 , 0x40 , 0x0 , 0xc0 , 0x20 , 0x0 , 0x80 , 0x10 , // Char 99 c
0x0 , 0x3f , 0x0 , 0xc0 , 0x7f , 0x0 , 0x40 , 0xe0 , 0x0 , 0x20 , 0xc0 , 0x0 , 0x20 , 0x80 , 0x0 , 0x20 , 0x80 , 0x0 , 0x41 , 0x40 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x0 , 0x40 , // Char 100 d
0x80 , 0x3f , 0x0 , 0xc0 , 0x7d , 0x0 , 0x20 , 0xe1 , 0x0 , 0x20 , 0xc1 , 0x0 , 0x20 , 0xc1 , 0x0 , 0x60 , 0xc1 , 0x0 , 0xe0 , 0x41 , 0x0 , 0xc0 , 0x61 , 0x0 , 0x0 , 0x11 , // Char 101 e
0x20 , 0x80 , 0x0 , 0xf0 , 0xff , 0x0 , 0xfe , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x21 , 0x80 , 0x0 , 0x21 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 102 f
0x0 , 0x0 , 0xe , 0xc0 , 0x67 , 0x1f , 0xc0 , 0xdf , 0x18 , 0x20 , 0xcc , 0x18 , 0x20 , 0xc8 , 0x10 , 0x20 , 0xc8 , 0x18 , 0xe0 , 0xcc , 0x18 , 0xc0 , 0xc7 , 0x8 , 0xc0 , 0xc3 , 0x8 , 0x40 , 0x80 , 0x3 , // Char 103 g
0x3 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x40 , 0x80 , 0x0 , 0x60 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x60 , 0x80 , 0x0 , 0xe0 , 0xff , 0x0 , 0xc0 , 0xff , 0x0 , 0x0 , 0x80 , // Char 104 h
0x40 , 0x80 , 0x0 , 0xc3 , 0xff , 0x0 , 0xe3 , 0xff , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , // Char 105 i
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x40 , 0x0 , 0x10 , 0xc3 , 0x0 , 0x1e , 0xe3 , 0xff , 0xf , 0xe2 , 0xff , 0x1 , // Char 106 j
0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x0 , 0x86 , 0x0 , 0x0 , 0xf , 0x0 , 0x80 , 0x1c , 0x0 , 0xe0 , 0xf8 , 0x0 , 0x60 , 0xe0 , 0x0 , 0x20 , 0xc0 , 0x0 , 0x20 , 0x80 , 0x0 , 0x0 , 0x80 , // Char 107 k
0x1 , 0x80 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , // Char 108 l
0x40 , 0x80 , 0x0 , 0xe0 , 0xff , 0x0 , 0xe0 , 0xff , 0x0 , 0x40 , 0x80 , 0x0 , 0x40 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xe0 , 0xff , 0x0 , 0xc0 , 0xff , 0x0 , 0x80 , 0xff , 0x0 , 0x40 , 0x80 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x60 , 0x80 , 0x0 , 0xe0 , 0xff , 0x0 , 0x80 , 0xff , 0x0 , 0x0 , 0x80 , // Char 109 m
0x40 , 0x80 , 0x0 , 0xe0 , 0xff , 0x0 , 0xe0 , 0xff , 0x0 , 0x40 , 0x80 , 0x0 , 0x40 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x60 , 0x80 , 0x0 , 0xe0 , 0xff , 0x0 , 0xc0 , 0xff , 0x0 , 0x0 , 0x80 , // Char 110 n
0x80 , 0x1f , 0x0 , 0xc0 , 0x7f , 0x0 , 0x40 , 0x60 , 0x0 , 0x20 , 0xc0 , 0x0 , 0x20 , 0x80 , 0x0 , 0x20 , 0x80 , 0x0 , 0x60 , 0x80 , 0x0 , 0xc0 , 0x40 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x80 , 0x1f , // Char 111 o
0x0 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0xe0 , 0xff , 0x1f , 0xe0 , 0xff , 0x1f , 0x40 , 0x80 , 0x10 , 0x60 , 0x80 , 0x0 , 0x60 , 0x80 , 0x0 , 0x60 , 0x80 , 0x0 , 0xe0 , 0x40 , 0x0 , 0xc0 , 0x7f , 0x0 , 0x80 , 0x1f , // Char 112 p
0x0 , 0x3f , 0x0 , 0xc0 , 0x7f , 0x0 , 0x40 , 0xe0 , 0x0 , 0x20 , 0xc0 , 0x0 , 0x20 , 0xc0 , 0x0 , 0x20 , 0xc0 , 0x10 , 0x20 , 0x40 , 0x10 , 0xc0 , 0xff , 0x1f , 0xe0 , 0xff , 0x1f , 0x0 , 0x0 , 0x10 , // Char 113 q
0x40 , 0x80 , 0x0 , 0xe0 , 0xff , 0x0 , 0xe0 , 0xff , 0x0 , 0x40 , 0x80 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , // Char 114 r
0x80 , 0xe1 , 0x0 , 0xc0 , 0xc3 , 0x0 , 0x20 , 0x87 , 0x0 , 0x20 , 0x8e , 0x0 , 0x20 , 0x8c , 0x0 , 0x60 , 0xfc , 0x0 , 0xe0 , 0x78 , // Char 115 s
0x30 , 0x0 , 0x0 , 0xf8 , 0xff , 0x0 , 0xfc , 0xff , 0x0 , 0x20 , 0x80 , 0x0 , 0x20 , // Char 116 t
0x20 , 0x0 , 0x0 , 0xe0 , 0x7f , 0x0 , 0xe0 , 0xff , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x40 , 0x0 , 0x20 , 0x40 , 0x0 , 0xe0 , 0xff , 0x0 , 0xe0 , 0xff , 0x0 , 0x0 , 0x40 , // Char 117 u
0x20 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xa0 , 0x1f , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x20 , 0x7 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x20 , // Char 118 v
0x20 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x70 , 0x0 , 0x20 , 0x1c , 0x0 , 0xe0 , 0x3 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x20 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xc , 0x0 , 0xa0 , 0x3 , 0x0 , 0x60 , // Char 119 w
0x20 , 0x80 , 0x0 , 0x60 , 0xc0 , 0x0 , 0xe0 , 0x30 , 0x0 , 0xe0 , 0x1b , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1f , 0x0 , 0xe0 , 0xf8 , 0x0 , 0x20 , 0xf0 , 0x0 , 0x20 , 0xc0 , 0x0 , 0x0 , 0x80 , // Char 120 x
0x20 , 0x0 , 0x18 , 0xe0 , 0x0 , 0x18 , 0xe0 , 0x3 , 0x18 , 0x20 , 0x1f , 0xc , 0x0 , 0x7c , 0x7 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x7 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x20 , // Char 121 y
0xe0 , 0xc0 , 0x0 , 0x20 , 0xe0 , 0x0 , 0x20 , 0xf8 , 0x0 , 0x20 , 0x9c , 0x0 , 0x20 , 0x8f , 0x0 , 0xe0 , 0x83 , 0x0 , 0xe0 , 0x81 , 0x0 , 0x60 , 0x80 , 0x0 , 0x20 , 0xe0 , // Char 122 z
0x0 , 0x4 , 0x0 , 0xfc , 0xff , 0x3 , 0xfe , 0xfb , 0xf , 0x3 , 0x0 , 0x8 , 0x1 , 0x0 , 0x10 , // Char 123 {
0xff , 0xff , 0x3f , // Char 124 |
0x1 , 0x0 , 0x8 , 0xff , 0xf1 , 0xf , 0xfe , 0xfb , 0x7 , 0x0 , 0x6 , 0x0 , 0x0 , 0x4 , // Char 125 }
0x0 , 0x2 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x2 , // Char 126 ~
};