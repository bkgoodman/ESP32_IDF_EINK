#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_URW_Bookman_Demi_16[] PROGMEM = {
10 , // Width 
24 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 10, // Char 32   - Nodata
 0x0, 0x0, 0x9, 0x5, // Char 33 ! 
 0x0, 0x9, 0x11, 0x8, // Char 34 " 
 0x0, 0x1a, 0x17, 0xa, // Char 35 # 
 0x0, 0x31, 0x1a, 0xb, // Char 36 $ 
 0x0, 0x4b, 0x2c, 0x11, // Char 37 % 
 0x0, 0x77, 0x24, 0xe, // Char 38 & 
 0x0, 0x9b, 0x5, 0x4, // Char 39 ' 
 0x0, 0xa0, 0xc, 0x6, // Char 40 ( 
 0x0, 0xac, 0xc, 0x6, // Char 41 ) 
 0x0, 0xb8, 0xe, 0x7, // Char 42 * 
 0x0, 0xc6, 0x17, 0xa, // Char 43 + 
 0x0, 0xdd, 0x9, 0x5, // Char 44 , 
 0x0, 0xe6, 0xe, 0x7, // Char 45 - 
 0x0, 0xf4, 0x9, 0x5, // Char 46 . 
 0x0, 0xfd, 0x16, 0xa, // Char 47 / 
 0x1, 0x13, 0x1d, 0xc, // Char 48 0 
 0x1, 0x30, 0x15, 0x9, // Char 49 1 
 0x1, 0x45, 0x1b, 0xb, // Char 50 2 
 0x1, 0x60, 0x1a, 0xb, // Char 51 3 
 0x1, 0x7a, 0x1e, 0xc, // Char 52 4 
 0x1, 0x98, 0x1a, 0xb, // Char 53 5 
 0x1, 0xb2, 0x1a, 0xb, // Char 54 6 
 0x1, 0xcc, 0x1a, 0xb, // Char 55 7 
 0x1, 0xe6, 0x1a, 0xb, // Char 56 8 
 0x2, 0x0, 0x1a, 0xb, // Char 57 9 
 0x2, 0x1a, 0x9, 0x5, // Char 58 : 
 0x2, 0x23, 0x9, 0x5, // Char 59 ; 
 0x2, 0x2c, 0x18, 0xa, // Char 60 < 
 0x2, 0x44, 0x17, 0xa, // Char 61 = 
 0x2, 0x5b, 0x17, 0xa, // Char 62 > 
 0x2, 0x72, 0x1a, 0xb, // Char 63 ? 
 0x2, 0x8c, 0x20, 0xd, // Char 64 @ 
 0x2, 0xac, 0x27, 0xf, // Char 65 A 
 0x2, 0xd3, 0x21, 0xd, // Char 66 B 
 0x2, 0xf4, 0x1d, 0xc, // Char 67 C 
 0x3, 0x11, 0x23, 0xe, // Char 68 D 
 0x3, 0x34, 0x21, 0xd, // Char 69 E 
 0x3, 0x55, 0x20, 0xd, // Char 70 F 
 0x3, 0x75, 0x20, 0xd, // Char 71 G 
 0x3, 0x95, 0x27, 0xf, // Char 72 H 
 0x3, 0xbc, 0x12, 0x8, // Char 73 I 
 0x3, 0xce, 0x1c, 0xc, // Char 74 J 
 0x3, 0xea, 0x27, 0xf, // Char 75 K 
 0x4, 0x11, 0x1e, 0xc, // Char 76 L 
 0x4, 0x2f, 0x2d, 0x11, // Char 77 M 
 0x4, 0x5c, 0x22, 0xe, // Char 78 N 
 0x4, 0x7e, 0x20, 0xd, // Char 79 O 
 0x4, 0x9e, 0x1d, 0xc, // Char 80 P 
 0x4, 0xbb, 0x21, 0xd, // Char 81 Q 
 0x4, 0xdc, 0x24, 0xe, // Char 82 R 
 0x5, 0x0, 0x1d, 0xc, // Char 83 S 
 0x5, 0x1d, 0x20, 0xd, // Char 84 T 
 0x5, 0x3d, 0x22, 0xe, // Char 85 U 
 0x5, 0x5f, 0x22, 0xe, // Char 86 V 
 0x5, 0x81, 0x2c, 0x11, // Char 87 W 
 0x5, 0xad, 0x24, 0xe, // Char 88 X 
 0x5, 0xd1, 0x20, 0xd, // Char 89 Y 
 0x5, 0xf1, 0x1d, 0xc, // Char 90 Z 
 0x6, 0xe, 0xc, 0x6, // Char 91 [ 
 0x6, 0x1a, 0x18, 0xa, // Char 92 Backslash 
 0x6, 0x32, 0xc, 0x6, // Char 93 ] 
 0x6, 0x3e, 0x17, 0xa, // Char 94 ^ 
 0x6, 0x55, 0x18, 0xa, // Char 95 _ 
 0x6, 0x6d, 0xb, 0x6, // Char 96 ` 
 0x6, 0x78, 0x1b, 0xb, // Char 97 a 
 0x6, 0x93, 0x1a, 0xb, // Char 98 b 
 0x6, 0xad, 0x15, 0x9, // Char 99 c 
 0x6, 0xc2, 0x1b, 0xb, // Char 100 d 
 0x6, 0xdd, 0x17, 0xa, // Char 101 e 
 0x6, 0xf4, 0x11, 0x8, // Char 102 f 
 0x7, 0x5, 0x1b, 0xb, // Char 103 g 
 0x7, 0x20, 0x1e, 0xc, // Char 104 h 
 0x7, 0x3e, 0xf, 0x7, // Char 105 i 
 0x7, 0x4d, 0xf, 0x7, // Char 106 j 
 0x7, 0x5c, 0x1e, 0xc, // Char 107 k 
 0x7, 0x7a, 0xf, 0x7, // Char 108 l 
 0x7, 0x89, 0x30, 0x12, // Char 109 m 
 0x7, 0xb9, 0x1e, 0xc, // Char 110 n 
 0x7, 0xd7, 0x17, 0xa, // Char 111 o 
 0x7, 0xee, 0x1d, 0xc, // Char 112 p 
 0x8, 0xb, 0x1b, 0xb, // Char 113 q 
 0x8, 0x26, 0x14, 0x9, // Char 114 r 
 0x8, 0x3a, 0x14, 0x9, // Char 115 s 
 0x8, 0x4e, 0x15, 0x9, // Char 116 t 
 0x8, 0x63, 0x1e, 0xc, // Char 117 u 
 0x8, 0x81, 0x1d, 0xc, // Char 118 v 
 0x8, 0x9e, 0x26, 0xf, // Char 119 w 
 0x8, 0xc4, 0x1b, 0xb, // Char 120 x 
 0x8, 0xdf, 0x1d, 0xc, // Char 121 y 
 0x8, 0xfc, 0x17, 0xa, // Char 122 z 
 0x9, 0x13, 0x9, 0x5, // Char 123 { 
 0x9, 0x1c, 0x6, 0x4, // Char 124 | 
 0x9, 0x22, 0x8, 0x5, // Char 125 } 
 0x9, 0x2a, 0x17, 0xa, // Char 126 ~ 

// Data Table:
0x0 , 0x3 , 0x1 , 0x80 , 0xbf , 0x3 , 0x80 , 0xbf , 0x3 , // Char 33 !
0x80 , 0x3 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x80 , 0x7 , // Char 34 "
0x0 , 0x20 , 0x0 , 0x0 , 0x28 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x80 , 0x7f , 0x0 , 0x0 , 0x68 , 0x3 , 0x0 , 0xfe , 0x3 , 0x80 , 0x3f , 0x0 , 0x0 , 0x28 , // Char 35 #
0x0 , 0xc6 , 0x0 , 0x0 , 0xcf , 0x1 , 0x80 , 0x9f , 0x1 , 0x80 , 0x1c , 0x1 , 0xe0 , 0x18 , 0x7 , 0x80 , 0x18 , 0x1 , 0x80 , 0xfb , 0x1 , 0x0 , 0xf3 , 0x0 , 0x0 , 0x70 , // Char 36 $
0x0 , 0xe , 0x0 , 0x0 , 0x1f , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x20 , 0x0 , 0x80 , 0x3f , 0x3 , 0x0 , 0xdf , 0x1 , 0x0 , 0x60 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xf3 , 0x1 , 0x80 , 0xf9 , 0x3 , 0x0 , 0x8 , 0x2 , 0x0 , 0x18 , 0x3 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xe0 , // Char 37 %
0x0 , 0xc0 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xff , 0x3 , 0x80 , 0x1f , 0x3 , 0x80 , 0x1f , 0x3 , 0x80 , 0x3d , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0xe3 , 0x1 , 0x0 , 0xec , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0x4 , 0x3 , // Char 38 &
0x80 , 0xf , 0x0 , 0x80 , 0x7 , // Char 39 '
0x0 , 0xfe , 0x7 , 0x0 , 0xff , 0xf , 0x80 , 0x1 , 0x18 , 0x80 , 0x0 , 0x10 , // Char 40 (
0x80 , 0x0 , 0x10 , 0x80 , 0x1 , 0x1c , 0x0 , 0xff , 0xf , 0x0 , 0xfe , 0x7 , // Char 41 )
0x0 , 0xd , 0x0 , 0x0 , 0x7 , 0x0 , 0x80 , 0x1f , 0x0 , 0x80 , 0x6 , 0x0 , 0x0 , 0xf , // Char 42 *
0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , // Char 43 +
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x7 , 0x0 , 0x80 , 0x3 , // Char 44 ,
0x0 , 0x40 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , // Char 45 -
0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0x3 , // Char 46 .
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x1e , 0x0 , 0xc0 , 0x7 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x7c , 0x0 , 0x0 , 0xf , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , // Char 47 /
0x0 , 0x10 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0xff , 0x1 , 0x80 , 0xff , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0xff , 0x1 , 0x0 , 0xfe , // Char 48 0
0x0 , 0x1 , 0x2 , 0x0 , 0x1 , 0x3 , 0x0 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x2 , // Char 49 1
0x0 , 0x7 , 0x3 , 0x0 , 0x8f , 0x3 , 0x80 , 0xc1 , 0x3 , 0x80 , 0xe0 , 0x3 , 0x80 , 0x71 , 0x3 , 0x80 , 0x3f , 0x3 , 0x0 , 0x3f , 0x3 , 0x0 , 0x8f , 0x3 , 0x0 , 0xc0 , 0x1 , // Char 50 2
0x0 , 0xc3 , 0x1 , 0x0 , 0xc7 , 0x3 , 0x80 , 0x3 , 0x3 , 0x80 , 0x9 , 0x3 , 0x80 , 0x9 , 0x3 , 0x80 , 0x1f , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0xf7 , 0x1 , 0x0 , 0xe2 , // Char 51 3
0x0 , 0x40 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0xdc , 0x0 , 0x0 , 0xc7 , 0x2 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x40 , 0x2 , // Char 52 4
0x80 , 0xdf , 0x1 , 0x80 , 0xdf , 0x3 , 0x80 , 0x99 , 0x3 , 0x80 , 0x9 , 0x2 , 0x80 , 0xd , 0x3 , 0x80 , 0x99 , 0x3 , 0x80 , 0xf9 , 0x3 , 0x80 , 0xf9 , 0x1 , 0x0 , 0xf0 , // Char 53 5
0x0 , 0xfe , 0x0 , 0x0 , 0xff , 0x1 , 0x80 , 0xff , 0x3 , 0x80 , 0x19 , 0x3 , 0x80 , 0x19 , 0x3 , 0x80 , 0x19 , 0x3 , 0x80 , 0xfb , 0x3 , 0x0 , 0xf3 , 0x1 , 0x0 , 0xe2 , // Char 54 6
0x80 , 0x3 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x81 , 0x3 , 0x80 , 0xe1 , 0x3 , 0x80 , 0xf1 , 0x3 , 0x80 , 0x7d , 0x0 , 0x80 , 0xf , 0x0 , 0x80 , 0x7 , 0x0 , 0x80 , 0x1 , // Char 55 7
0x0 , 0xee , 0x1 , 0x0 , 0xff , 0x3 , 0x80 , 0x3f , 0x3 , 0x80 , 0x1d , 0x3 , 0x80 , 0x39 , 0x3 , 0x80 , 0x39 , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0xf7 , 0x1 , 0x0 , 0xe0 , // Char 56 8
0x0 , 0x9f , 0x1 , 0x0 , 0xbf , 0x3 , 0x80 , 0xbb , 0x3 , 0x80 , 0x31 , 0x3 , 0x80 , 0x31 , 0x3 , 0x80 , 0x31 , 0x3 , 0x80 , 0xff , 0x1 , 0x0 , 0xff , 0x1 , 0x0 , 0xfe , // Char 57 9
0x0 , 0x8 , 0x1 , 0x0 , 0x9c , 0x3 , 0x0 , 0x8c , 0x3 , // Char 58 :
0x0 , 0x8 , 0x1 , 0x0 , 0x9c , 0xf , 0x0 , 0xc , 0x7 , // Char 59 ;
0x0 , 0x38 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0xee , 0x0 , 0x0 , 0xc6 , 0x0 , 0x0 , 0xc6 , 0x1 , 0x0 , 0x83 , 0x1 , // Char 60 <
0x0 , 0x6c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x6c , // Char 61 =
0x0 , 0x83 , 0x1 , 0x0 , 0xc6 , 0x0 , 0x0 , 0xc6 , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x6c , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x38 , // Char 62 >
0x0 , 0x6 , 0x0 , 0x0 , 0x7 , 0x0 , 0x80 , 0x7 , 0x0 , 0x80 , 0x1 , 0x1 , 0x80 , 0xb0 , 0x3 , 0x80 , 0x39 , 0x3 , 0x80 , 0x1f , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x6 , // Char 63 ?
0x0 , 0x7c , 0x0 , 0x0 , 0xc6 , 0x0 , 0x0 , 0x31 , 0x1 , 0x80 , 0x79 , 0x3 , 0x80 , 0x4c , 0x2 , 0x80 , 0x44 , 0x2 , 0x80 , 0x7c , 0x2 , 0x80 , 0x7c , 0x2 , 0x0 , 0x45 , 0x1 , 0x0 , 0xe3 , 0x1 , 0x0 , 0xbe , // Char 64 @
0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x7c , 0x3 , 0x0 , 0x2f , 0x0 , 0x80 , 0x23 , 0x0 , 0x80 , 0x3f , 0x2 , 0x0 , 0xff , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 65 A
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x11 , 0x3 , 0x80 , 0x11 , 0x2 , 0x80 , 0x39 , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0xef , 0x3 , 0x0 , 0xe6 , 0x1 , // Char 66 B
0x0 , 0xfe , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0xff , 0x1 , 0x80 , 0x81 , 0x3 , 0x80 , 0x0 , 0x3 , 0x80 , 0x0 , 0x3 , 0x80 , 0x0 , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x83 , 0x1 , 0x0 , 0xc7 , // Char 67 C
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0xc7 , 0x3 , 0x0 , 0xff , 0x1 , 0x0 , 0xfe , 0x0 , 0x0 , 0x7c , // Char 68 D
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x11 , 0x2 , 0x80 , 0x79 , 0x3 , 0x80 , 0x7d , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x87 , 0x3 , 0x0 , 0xc6 , 0x1 , // Char 69 E
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x19 , 0x2 , 0x80 , 0x7d , 0x0 , 0x80 , 0x7d , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0x6 , // Char 70 F
0x0 , 0xfe , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0xff , 0x3 , 0x80 , 0x81 , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x0 , 0x3 , 0x80 , 0x11 , 0x3 , 0x80 , 0xf1 , 0x1 , 0x80 , 0xf3 , 0x3 , 0x0 , 0xf6 , 0x3 , 0x0 , 0x30 , // Char 71 G
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x18 , 0x2 , 0x0 , 0x18 , 0x0 , 0x80 , 0x18 , 0x2 , 0x80 , 0x19 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x0 , 0x2 , // Char 72 H
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x0 , 0x2 , // Char 73 I
0x0 , 0xe0 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x40 , 0x3 , 0x0 , 0x0 , 0x3 , 0x80 , 0x0 , 0x3 , 0x80 , 0x81 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x1 , 0x80 , 0x7f , 0x0 , 0x80 , // Char 74 J
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x18 , 0x2 , 0x0 , 0x3c , 0x0 , 0x80 , 0x7f , 0x3 , 0x80 , 0xf3 , 0x3 , 0x80 , 0xe1 , 0x3 , 0x80 , 0x81 , 0x3 , 0x80 , 0x1 , 0x3 , 0x0 , 0x0 , 0x2 , // Char 75 K
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0xc0 , 0x1 , // Char 76 L
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x7 , 0x3 , 0x80 , 0x1f , 0x2 , 0x0 , 0xff , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x1f , 0x2 , 0x80 , 0x7 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x0 , 0x2 , // Char 77 M
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x3 , 0x3 , 0x80 , 0xf , 0x2 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7c , 0x0 , 0x80 , 0xf8 , 0x1 , 0x80 , 0xf1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x1 , 0x0 , 0x80 , // Char 78 N
0x0 , 0xfc , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0xff , 0x1 , 0x80 , 0x83 , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x83 , 0x3 , 0x0 , 0xff , 0x1 , 0x0 , 0xff , 0x0 , 0x0 , 0x7e , // Char 79 O
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x11 , 0x3 , 0x80 , 0x11 , 0x0 , 0x80 , 0x1f , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xf , // Char 80 P
0x0 , 0xfc , 0xc , 0x0 , 0xff , 0xd , 0x0 , 0xff , 0x19 , 0x80 , 0x83 , 0x1b , 0x80 , 0xc1 , 0x13 , 0x80 , 0x61 , 0x13 , 0x80 , 0xe1 , 0x1b , 0x80 , 0xc3 , 0x1b , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0xf , 0x0 , 0xfe , 0x7 , // Char 81 Q
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x31 , 0x2 , 0x80 , 0x71 , 0x0 , 0x80 , 0xf9 , 0x0 , 0x80 , 0xff , 0x3 , 0x80 , 0xdf , 0x3 , 0x0 , 0x8f , 0x3 , 0x0 , 0x0 , 0x3 , // Char 82 R
0x0 , 0x40 , 0x0 , 0x0 , 0xcf , 0x3 , 0x0 , 0x9f , 0x3 , 0x80 , 0x1d , 0x3 , 0x80 , 0x39 , 0x3 , 0x80 , 0x39 , 0x3 , 0x80 , 0x39 , 0x3 , 0x80 , 0x7b , 0x3 , 0x80 , 0xf7 , 0x1 , 0x0 , 0xf0 , // Char 83 S
0x0 , 0x6 , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x1 , 0x2 , 0x80 , 0x3 , 0x0 , 0x0 , 0x7 , // Char 84 T
0x80 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0xff , 0x1 , 0x80 , 0xff , 0x1 , 0x80 , 0xc3 , 0x3 , 0x80 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x80 , 0x0 , 0x3 , 0x80 , 0x81 , 0x1 , 0x80 , 0xff , 0x1 , 0x80 , 0x1 , 0x0 , 0x80 , // Char 85 U
0x80 , 0x1 , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0xf , 0x0 , 0x80 , 0x7f , 0x0 , 0x80 , 0xfd , 0x3 , 0x80 , 0xf0 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x80 , 0xf0 , 0x0 , 0x80 , 0x3f , 0x0 , 0x80 , 0x7 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , // Char 86 V
0x80 , 0x1 , 0x0 , 0x80 , 0x7 , 0x0 , 0x80 , 0x3f , 0x0 , 0x80 , 0xff , 0x3 , 0x80 , 0xf8 , 0x3 , 0x80 , 0xc1 , 0x3 , 0x80 , 0xff , 0x0 , 0x80 , 0x3f , 0x0 , 0x80 , 0xff , 0x1 , 0x80 , 0xf8 , 0x3 , 0x0 , 0xc0 , 0x3 , 0x80 , 0xf9 , 0x0 , 0x80 , 0x1f , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0x1 , // Char 87 W
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0x83 , 0x3 , 0x80 , 0xc7 , 0x3 , 0x80 , 0x7f , 0x2 , 0x80 , 0x3f , 0x0 , 0x0 , 0x7c , 0x2 , 0x80 , 0xfc , 0x3 , 0x80 , 0xe7 , 0x3 , 0x80 , 0x83 , 0x3 , 0x80 , 0x1 , 0x3 , 0x80 , 0x0 , 0x3 , // Char 88 X
0x80 , 0x1 , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0x7 , 0x0 , 0x80 , 0x1f , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xf8 , 0x3 , 0x0 , 0xf8 , 0x3 , 0x80 , 0xf , 0x3 , 0x80 , 0x7 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x1 , // Char 89 Y
0x0 , 0x4 , 0x3 , 0x80 , 0x87 , 0x3 , 0x80 , 0xc1 , 0x3 , 0x80 , 0xf1 , 0x3 , 0x80 , 0x79 , 0x2 , 0x80 , 0x3e , 0x2 , 0x80 , 0x1f , 0x3 , 0x80 , 0x7 , 0x3 , 0x80 , 0x83 , 0x3 , 0x80 , 0xc0 , // Char 90 Z
0x80 , 0xff , 0xf , 0x80 , 0xff , 0xf , 0x80 , 0x1 , 0xc , 0x80 , 0x0 , 0x8 , // Char 91 [
0x80 , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x2 , // Char 92 Backslash
0x80 , 0x0 , 0x8 , 0x80 , 0xff , 0xf , 0x80 , 0xff , 0xf , 0x80 , 0xff , 0xf , // Char 93 ]
0x0 , 0x10 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0xf , 0x0 , 0xc0 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x10 , // Char 94 ^
0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , // Char 95 _
0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x1 , // Char 96 `
0x0 , 0x80 , 0x0 , 0x0 , 0xd8 , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0x6c , 0x3 , 0x0 , 0x6c , 0x3 , 0x0 , 0xfc , 0x1 , 0x0 , 0xfc , 0x3 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 97 a
0x80 , 0x1 , 0x0 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xf0 , // Char 98 b
0x0 , 0xf8 , 0x1 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x9c , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0x1c , 0x3 , 0x0 , 0x98 , 0x1 , // Char 99 c
0x0 , 0xf8 , 0x1 , 0x0 , 0xfc , 0x3 , 0x0 , 0x9c , 0x3 , 0x0 , 0xc , 0x3 , 0x80 , 0xd , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0x0 , 0x3 , // Char 100 d
0x0 , 0xf8 , 0x1 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xfc , 0x3 , 0x0 , 0x2c , 0x3 , 0x0 , 0x2c , 0x3 , 0x0 , 0x3c , 0x3 , 0x0 , 0xb8 , 0x1 , 0x0 , 0x20 , // Char 101 e
0x0 , 0x4 , 0x2 , 0x0 , 0x8c , 0x3 , 0x0 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0x5 , 0x3 , 0x80 , 0x5 , // Char 102 f
0x0 , 0x0 , 0xd , 0x0 , 0xb8 , 0x1f , 0x0 , 0xfc , 0x1b , 0x0 , 0x7c , 0x13 , 0x0 , 0x4c , 0x13 , 0x0 , 0x7c , 0x17 , 0x0 , 0x7e , 0x1f , 0x0 , 0x3b , 0xf , 0x0 , 0x3 , 0xe , // Char 103 g
0x80 , 0x0 , 0x2 , 0x80 , 0x1 , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 104 h
0x0 , 0x8 , 0x2 , 0x0 , 0x1d , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0x0 , 0x3 , // Char 105 i
0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0xc , 0x18 , 0x80 , 0xff , 0x1f , 0x80 , 0xff , 0xf , // Char 106 j
0x80 , 0x0 , 0x2 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0x60 , 0x3 , 0x0 , 0xfc , 0x2 , 0x0 , 0xfc , 0x3 , 0x0 , 0xcc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0x4 , 0x3 , // Char 107 k
0x0 , 0x1 , 0x2 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0x0 , 0x2 , // Char 108 l
0x0 , 0x8 , 0x2 , 0x0 , 0x1c , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x8 , 0x3 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x2 , // Char 109 m
0x0 , 0x8 , 0x2 , 0x0 , 0xfc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 110 n
0x0 , 0xf8 , 0x1 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xfc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xf0 , // Char 111 o
0x0 , 0x8 , 0x10 , 0x0 , 0xfc , 0x1f , 0x0 , 0xfc , 0x1f , 0x0 , 0xfc , 0x1f , 0x0 , 0xc , 0x1b , 0x0 , 0x4 , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x70 , // Char 112 p
0x0 , 0xf8 , 0x1 , 0x0 , 0xfc , 0x3 , 0x0 , 0x9c , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xc , 0x13 , 0x0 , 0xfc , 0x1f , 0x0 , 0xfc , 0x1f , 0x0 , 0xfc , 0x1f , 0x0 , 0x0 , 0x10 , // Char 113 q
0x0 , 0x8 , 0x2 , 0x0 , 0xfc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , // Char 114 r
0x0 , 0xb8 , 0x3 , 0x0 , 0x7c , 0x3 , 0x0 , 0x74 , 0x3 , 0x0 , 0x64 , 0x3 , 0x0 , 0xec , 0x3 , 0x0 , 0xec , 0x1 , 0x0 , 0xc0 , // Char 115 s
0x0 , 0x4 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xff , 0x3 , 0x80 , 0xff , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0x4 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 116 t
0x0 , 0x8 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0xfc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x8c , 0x1 , 0x0 , 0xfc , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0x0 , 0x3 , // Char 117 u
0x0 , 0xc , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0xe4 , 0x3 , 0x0 , 0xc4 , 0x3 , 0x0 , 0xfc , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x4 , // Char 118 v
0x0 , 0xc , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0xfc , 0x3 , 0x0 , 0xc4 , 0x3 , 0x0 , 0xfc , 0x1 , 0x0 , 0x7c , 0x0 , 0x0 , 0xfc , 0x3 , 0x0 , 0xc4 , 0x3 , 0x0 , 0xe4 , 0x3 , 0x0 , 0x7c , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0xc , // Char 119 w
0x0 , 0x4 , 0x2 , 0x0 , 0xc , 0x3 , 0x0 , 0x9c , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0x7c , 0x2 , 0x0 , 0xf4 , 0x3 , 0x0 , 0xdc , 0x3 , 0x0 , 0xc , 0x3 , 0x0 , 0xc , 0x3 , // Char 120 x
0x0 , 0x4 , 0x8 , 0x0 , 0x1c , 0x1c , 0x0 , 0x7c , 0x18 , 0x0 , 0xfc , 0x1d , 0x0 , 0xe4 , 0xf , 0x0 , 0xc4 , 0x3 , 0x0 , 0xfc , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x4 , // Char 121 y
0x0 , 0x9c , 0x3 , 0x0 , 0xcc , 0x3 , 0x0 , 0xec , 0x3 , 0x0 , 0xfc , 0x3 , 0x0 , 0x7c , 0x3 , 0x0 , 0x1c , 0x3 , 0x0 , 0x8c , 0x3 , 0x0 , 0x80 , // Char 122 z
0x0 , 0x60 , 0x0 , 0x80 , 0xff , 0xf , 0x80 , 0x1 , 0x8 , // Char 123 {
0x80 , 0xff , 0x3f , 0x80 , 0xff , 0x3f , // Char 124 |
0x80 , 0x1 , 0x8 , 0x80 , 0xff , 0xf , 0x0 , 0x70 , // Char 125 }
0x0 , 0x30 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x10 , // Char 126 ~
};
