#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Utopia_16[] PROGMEM = {
9 , // Width 
20 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 9, // Char 32   - Nodata
 0x0, 0x0, 0x5, 0x4, // Char 33 ! 
 0x0, 0x5, 0xa, 0x6, // Char 34 " 
 0x0, 0xf, 0x17, 0xa, // Char 35 # 
 0x0, 0x26, 0x14, 0x9, // Char 36 $ 
 0x0, 0x3a, 0x23, 0xe, // Char 37 % 
 0x0, 0x5d, 0x1d, 0xc, // Char 38 & 
 0x0, 0x7a, 0x4, 0x4, // Char 39 ' 
 0x0, 0x7e, 0x9, 0x5, // Char 40 ( 
 0x0, 0x87, 0x8, 0x5, // Char 41 ) 
 0x0, 0x8f, 0xd, 0x7, // Char 42 * 
 0x0, 0x9c, 0x14, 0x9, // Char 43 + 
 0x0, 0xb0, 0x5, 0x4, // Char 44 , 
 0x0, 0xb5, 0xb, 0x6, // Char 45 - 
 0x0, 0xc0, 0x5, 0x4, // Char 46 . 
 0x0, 0xc5, 0xa, 0x6, // Char 47 / 
 0x0, 0xcf, 0x14, 0x9, // Char 48 0 
 0x0, 0xe3, 0xe, 0x7, // Char 49 1 
 0x0, 0xf1, 0x14, 0x9, // Char 50 2 
 0x1, 0x5, 0x14, 0x9, // Char 51 3 
 0x1, 0x19, 0x17, 0xa, // Char 52 4 
 0x1, 0x30, 0x14, 0x9, // Char 53 5 
 0x1, 0x44, 0x14, 0x9, // Char 54 6 
 0x1, 0x58, 0x13, 0x9, // Char 55 7 
 0x1, 0x6b, 0x14, 0x9, // Char 56 8 
 0x1, 0x7f, 0x14, 0x9, // Char 57 9 
 0x1, 0x93, 0x5, 0x4, // Char 58 : 
 0x1, 0x98, 0x5, 0x4, // Char 59 ; 
 0x1, 0x9d, 0x14, 0x9, // Char 60 < 
 0x1, 0xb1, 0x14, 0x9, // Char 61 = 
 0x1, 0xc5, 0x14, 0x9, // Char 62 > 
 0x1, 0xd9, 0x10, 0x8, // Char 63 ? 
 0x1, 0xe9, 0x20, 0xd, // Char 64 @ 
 0x2, 0x9, 0x1d, 0xc, // Char 65 A 
 0x2, 0x26, 0x1a, 0xb, // Char 66 B 
 0x2, 0x40, 0x1a, 0xb, // Char 67 C 
 0x2, 0x5a, 0x20, 0xd, // Char 68 D 
 0x2, 0x7a, 0x17, 0xa, // Char 69 E 
 0x2, 0x91, 0x16, 0xa, // Char 70 F 
 0x2, 0xa7, 0x1d, 0xc, // Char 71 G 
 0x2, 0xc4, 0x20, 0xd, // Char 72 H 
 0x2, 0xe4, 0xb, 0x6, // Char 73 I 
 0x2, 0xef, 0xd, 0x7, // Char 74 J 
 0x2, 0xfc, 0x1c, 0xc, // Char 75 K 
 0x3, 0x18, 0x17, 0xa, // Char 76 L 
 0x3, 0x2f, 0x26, 0xf, // Char 77 M 
 0x3, 0x55, 0x1f, 0xd, // Char 78 N 
 0x3, 0x74, 0x1d, 0xc, // Char 79 O 
 0x3, 0x91, 0x17, 0xa, // Char 80 P 
 0x3, 0xa8, 0x1d, 0xc, // Char 81 Q 
 0x3, 0xc5, 0x1a, 0xb, // Char 82 R 
 0x3, 0xdf, 0x14, 0x9, // Char 83 S 
 0x3, 0xf3, 0x1c, 0xc, // Char 84 T 
 0x4, 0xf, 0x1f, 0xd, // Char 85 U 
 0x4, 0x2e, 0x1c, 0xc, // Char 86 V 
 0x4, 0x4a, 0x2b, 0x11, // Char 87 W 
 0x4, 0x75, 0x1d, 0xc, // Char 88 X 
 0x4, 0x92, 0x19, 0xb, // Char 89 Y 
 0x4, 0xab, 0x1d, 0xc, // Char 90 Z 
 0x4, 0xc8, 0x6, 0x4, // Char 91 [ 
 0x4, 0xce, 0xe, 0x7, // Char 92 Backslash 
 0x4, 0xdc, 0x6, 0x4, // Char 93 ] 
 0x4, 0xe2, 0x14, 0x9, // Char 94 ^ 
 0x4, 0xf6, 0x18, 0xa, // Char 95 _ 
 0x5, 0xe, 0x7, 0x5, // Char 96 ` 
 0x5, 0x15, 0x14, 0x9, // Char 97 a 
 0x5, 0x29, 0x17, 0xa, // Char 98 b 
 0x5, 0x40, 0x11, 0x8, // Char 99 c 
 0x5, 0x51, 0x17, 0xa, // Char 100 d 
 0x5, 0x68, 0x14, 0x9, // Char 101 e 
 0x5, 0x7c, 0xa, 0x6, // Char 102 f 
 0x5, 0x86, 0x15, 0x9, // Char 103 g 
 0x5, 0x9b, 0x17, 0xa, // Char 104 h 
 0x5, 0xb2, 0x8, 0x5, // Char 105 i 
 0x5, 0xba, 0x9, 0x5, // Char 106 j 
 0x5, 0xc3, 0x14, 0x9, // Char 107 k 
 0x5, 0xd7, 0x8, 0x5, // Char 108 l 
 0x5, 0xdf, 0x26, 0xf, // Char 109 m 
 0x6, 0x5, 0x17, 0xa, // Char 110 n 
 0x6, 0x1c, 0x14, 0x9, // Char 111 o 
 0x6, 0x30, 0x17, 0xa, // Char 112 p 
 0x6, 0x47, 0x18, 0xa, // Char 113 q 
 0x6, 0x5f, 0xe, 0x7, // Char 114 r 
 0x6, 0x6d, 0xe, 0x7, // Char 115 s 
 0x6, 0x7b, 0xb, 0x6, // Char 116 t 
 0x6, 0x86, 0x17, 0xa, // Char 117 u 
 0x6, 0x9d, 0x16, 0xa, // Char 118 v 
 0x6, 0xb3, 0x23, 0xe, // Char 119 w 
 0x6, 0xd6, 0x17, 0xa, // Char 120 x 
 0x6, 0xed, 0x16, 0xa, // Char 121 y 
 0x7, 0x3, 0x14, 0x9, // Char 122 z 
 0x7, 0x17, 0xc, 0x6, // Char 123 { 
 0x7, 0x23, 0x6, 0x4, // Char 124 | 
 0x7, 0x29, 0x8, 0x5, // Char 125 } 
 0x7, 0x31, 0x14, 0x9, // Char 126 ~ 

// Data Table:
0xf0 , 0x67 , 0x0 , 0xf0 , 0x63 , // Char 33 !
0x78 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x38 , // Char 34 "
0x0 , 0x4 , 0x0 , 0x0 , 0x75 , 0x0 , 0x0 , 0x1f , 0x0 , 0xf0 , 0x5 , 0x0 , 0x0 , 0x75 , 0x0 , 0x0 , 0x1f , 0x0 , 0xf0 , 0x5 , 0x0 , 0x0 , 0x1 , // Char 35 #
0xc0 , 0x21 , 0x0 , 0x20 , 0x63 , 0x0 , 0x20 , 0x43 , 0x0 , 0xf8 , 0xff , 0x0 , 0x20 , 0x46 , 0x0 , 0x60 , 0x7c , 0x0 , 0x0 , 0x18 , // Char 36 $
0xe0 , 0x1 , 0x0 , 0x10 , 0x2 , 0x0 , 0x10 , 0x42 , 0x0 , 0xf0 , 0x33 , 0x0 , 0xf0 , 0xd , 0x0 , 0x10 , 0x6 , 0x0 , 0x90 , 0x11 , 0x0 , 0x70 , 0x7c , 0x0 , 0x30 , 0x42 , 0x0 , 0x0 , 0x42 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x18 , // Char 37 %
0x0 , 0x3c , 0x0 , 0xe0 , 0x76 , 0x0 , 0xb0 , 0x43 , 0x0 , 0x10 , 0x47 , 0x0 , 0x90 , 0x4c , 0x0 , 0xe0 , 0x18 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x67 , 0x0 , 0x0 , 0x40 , // Char 38 &
0x18 , 0x0 , 0x0 , 0x78 , // Char 39 '
0xc0 , 0x7f , 0x0 , 0x20 , 0x80 , 0x0 , 0x10 , 0x0 , 0x1 , // Char 40 (
0x10 , 0x0 , 0x1 , 0xe0 , 0xf0 , 0x0 , 0x80 , 0x3f , // Char 41 )
0xa0 , 0x1 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xa0 , // Char 42 *
0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , // Char 43 +
0x0 , 0x60 , 0x1 , 0x0 , 0xe0 , // Char 44 ,
0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x4 , // Char 45 -
0x0 , 0x60 , 0x0 , 0x0 , 0x60 , // Char 46 .
0x0 , 0x78 , 0x0 , 0x0 , 0xf , 0x0 , 0xe0 , 0x1 , 0x0 , 0x30 , // Char 47 /
0xe0 , 0x3f , 0x0 , 0x70 , 0x70 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x30 , 0x60 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x80 , 0xf , // Char 48 0
0x0 , 0x40 , 0x0 , 0x30 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , // Char 49 1
0x60 , 0x60 , 0x0 , 0x30 , 0x50 , 0x0 , 0x10 , 0x48 , 0x0 , 0x10 , 0x46 , 0x0 , 0xb0 , 0x43 , 0x0 , 0xe0 , 0x41 , 0x0 , 0x0 , 0x20 , // Char 50 2
0x20 , 0x70 , 0x0 , 0x30 , 0x41 , 0x0 , 0x10 , 0x41 , 0x0 , 0x10 , 0x41 , 0x0 , 0xf0 , 0x63 , 0x0 , 0xe0 , 0x3e , 0x0 , 0x0 , 0x8 , // Char 51 3
0x0 , 0x8 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x9 , 0x0 , 0xc0 , 0x8 , 0x0 , 0x20 , 0x48 , 0x0 , 0xf0 , 0x7f , 0x0 , 0x0 , 0x48 , 0x0 , 0x0 , 0x8 , // Char 52 4
0xe0 , 0x33 , 0x0 , 0x30 , 0x40 , 0x0 , 0x10 , 0x41 , 0x0 , 0x10 , 0x41 , 0x0 , 0x10 , 0x63 , 0x0 , 0x10 , 0x3e , 0x0 , 0x0 , 0x1c , // Char 53 5
0xc0 , 0x3f , 0x0 , 0xe0 , 0x72 , 0x0 , 0x10 , 0x41 , 0x0 , 0x10 , 0x41 , 0x0 , 0x10 , 0x41 , 0x0 , 0x30 , 0x3e , 0x0 , 0x0 , 0x1c , // Char 54 6
0x30 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x78 , 0x0 , 0x10 , 0x1e , 0x0 , 0x10 , 0x1 , 0x0 , 0x70 , 0x0 , 0x0 , 0x10 , // Char 55 7
0xe0 , 0x3c , 0x0 , 0xf0 , 0x67 , 0x0 , 0x10 , 0x42 , 0x0 , 0x10 , 0x42 , 0x0 , 0x30 , 0x43 , 0x0 , 0xe0 , 0x3d , 0x0 , 0x0 , 0x18 , // Char 56 8
0xe0 , 0x23 , 0x0 , 0x30 , 0x46 , 0x0 , 0x10 , 0x44 , 0x0 , 0x10 , 0x44 , 0x0 , 0x30 , 0x62 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x80 , 0x7 , // Char 57 9
0x80 , 0x61 , 0x0 , 0x80 , 0x61 , // Char 58 :
0x80 , 0xe1 , 0x1 , 0x80 , 0xe1 , // Char 59 ;
0x0 , 0xc , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x12 , 0x0 , 0x0 , 0x12 , 0x0 , 0x0 , 0x23 , 0x0 , 0x0 , 0x21 , 0x0 , 0x80 , 0x61 , // Char 60 <
0x0 , 0x11 , 0x0 , 0x0 , 0x11 , 0x0 , 0x0 , 0x11 , 0x0 , 0x0 , 0x11 , 0x0 , 0x0 , 0x11 , 0x0 , 0x0 , 0x11 , 0x0 , 0x0 , 0x11 , // Char 61 =
0x80 , 0x61 , 0x0 , 0x0 , 0x21 , 0x0 , 0x0 , 0x21 , 0x0 , 0x0 , 0x12 , 0x0 , 0x0 , 0x12 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xc , // Char 62 >
0x20 , 0x0 , 0x0 , 0x30 , 0x4 , 0x0 , 0x10 , 0x6e , 0x0 , 0x10 , 0x69 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x60 , // Char 63 ?
0x80 , 0x1f , 0x0 , 0xc0 , 0x30 , 0x0 , 0x20 , 0x20 , 0x0 , 0x30 , 0x4f , 0x0 , 0x90 , 0x49 , 0x0 , 0x50 , 0x44 , 0x0 , 0x50 , 0x46 , 0x0 , 0xd0 , 0x4f , 0x0 , 0x10 , 0x8 , 0x0 , 0x20 , 0x4 , 0x0 , 0xc0 , 0x3 , // Char 64 @
0x0 , 0x40 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x4e , 0x0 , 0xc0 , 0x5 , 0x0 , 0x30 , 0x4 , 0x0 , 0xf0 , 0x4 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x40 , // Char 65 A
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x42 , 0x0 , 0x10 , 0x42 , 0x0 , 0x10 , 0x42 , 0x0 , 0xf0 , 0x67 , 0x0 , 0xe0 , 0x3c , 0x0 , 0x0 , 0x10 , // Char 66 B
0x80 , 0x1f , 0x0 , 0xe0 , 0x3f , 0x0 , 0x20 , 0x60 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x70 , 0x70 , // Char 67 C
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x30 , 0x60 , 0x0 , 0x60 , 0x30 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x80 , 0x7 , // Char 68 D
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x42 , 0x0 , 0x10 , 0x42 , 0x0 , 0x10 , 0x42 , 0x0 , 0x10 , 0x47 , 0x0 , 0x30 , 0x60 , // Char 69 E
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x42 , 0x0 , 0x10 , 0x2 , 0x0 , 0x10 , 0x2 , 0x0 , 0x10 , 0x7 , 0x0 , 0x30 , // Char 70 F
0x80 , 0x1f , 0x0 , 0xe0 , 0x3f , 0x0 , 0x20 , 0x20 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x44 , 0x0 , 0x10 , 0x44 , 0x0 , 0x30 , 0x7c , 0x0 , 0x0 , 0x3c , // Char 71 G
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x42 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x10 , 0x42 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x40 , // Char 72 H
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x40 , // Char 73 I
0x0 , 0x0 , 0x1 , 0x10 , 0x0 , 0x1 , 0xf0 , 0xff , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , // Char 74 J
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x47 , 0x0 , 0x80 , 0xe , 0x0 , 0x40 , 0x18 , 0x0 , 0x30 , 0x30 , 0x0 , 0x10 , 0x60 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , // Char 75 K
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x70 , // Char 76 L
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0x70 , 0x40 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x3 , 0x0 , 0xc0 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x40 , // Char 77 M
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0x70 , 0x40 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x38 , 0x0 , 0x10 , 0x70 , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , // Char 78 N
0xc0 , 0x1f , 0x0 , 0xe0 , 0x3f , 0x0 , 0x30 , 0x60 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x30 , 0x60 , 0x0 , 0xe0 , 0x3d , 0x0 , 0xc0 , 0x1f , // Char 79 O
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x44 , 0x0 , 0x10 , 0x4 , 0x0 , 0x10 , 0x6 , 0x0 , 0xf0 , 0x3 , 0x0 , 0xe0 , 0x1 , // Char 80 P
0xc0 , 0x1f , 0x0 , 0xe0 , 0x3f , 0x0 , 0x30 , 0x60 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0xc0 , 0x0 , 0x10 , 0xc0 , 0x1 , 0x30 , 0x60 , 0x3 , 0xe0 , 0x3d , 0x2 , 0xc0 , 0x1f , // Char 81 Q
0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x42 , 0x0 , 0x10 , 0x2 , 0x0 , 0x10 , 0x6 , 0x0 , 0xf0 , 0x3d , 0x0 , 0xe0 , 0x70 , 0x0 , 0x0 , 0x40 , // Char 82 R
0xe0 , 0x31 , 0x0 , 0xf0 , 0x41 , 0x0 , 0x10 , 0x43 , 0x0 , 0x10 , 0x43 , 0x0 , 0x10 , 0x46 , 0x0 , 0x30 , 0x7e , 0x0 , 0x0 , 0x3c , // Char 83 S
0x30 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x10 , 0x40 , 0x0 , 0x10 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x30 , // Char 84 T
0x10 , 0x0 , 0x0 , 0xf0 , 0x1f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x10 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x10 , 0x60 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xf0 , 0x1f , 0x0 , 0x10 , // Char 85 U
0x10 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x90 , 0xf , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x3 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x10 , // Char 86 V
0x10 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x3c , 0x0 , 0x80 , 0x3 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x70 , 0x0 , 0x10 , 0xf , 0x0 , 0xf0 , 0x0 , 0x0 , 0x10 , // Char 87 W
0x10 , 0x40 , 0x0 , 0x10 , 0x60 , 0x0 , 0x70 , 0x70 , 0x0 , 0xf0 , 0x8 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xf , 0x0 , 0xc0 , 0x5c , 0x0 , 0x30 , 0x70 , 0x0 , 0x10 , 0x60 , 0x0 , 0x10 , 0x40 , // Char 88 X
0x10 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xd0 , 0x43 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x7e , 0x0 , 0x80 , 0x41 , 0x0 , 0x70 , 0x0 , 0x0 , 0x30 , // Char 89 Y
0x0 , 0x40 , 0x0 , 0x70 , 0x60 , 0x0 , 0x10 , 0x78 , 0x0 , 0x10 , 0x5c , 0x0 , 0x10 , 0x47 , 0x0 , 0x90 , 0x43 , 0x0 , 0xd0 , 0x40 , 0x0 , 0x70 , 0x40 , 0x0 , 0x30 , 0x60 , 0x0 , 0x0 , 0x20 , // Char 90 Z
0xf0 , 0xff , 0x1 , 0x10 , 0x0 , 0x1 , // Char 91 [
0x10 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x60 , // Char 92 Backslash
0x10 , 0x0 , 0x1 , 0xf0 , 0xff , 0x1 , // Char 93 ]
0x0 , 0x6 , 0x0 , 0x80 , 0x3 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x6 , // Char 94 ^
0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 95 _
0x18 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x20 , // Char 96 `
0x0 , 0x39 , 0x0 , 0x80 , 0x79 , 0x0 , 0x80 , 0x44 , 0x0 , 0x80 , 0x44 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 97 a
0xf8 , 0x7f , 0x0 , 0xf8 , 0x7f , 0x0 , 0x0 , 0x41 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x61 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x1e , // Char 98 b
0x0 , 0x3f , 0x0 , 0x0 , 0x7f , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x21 , // Char 99 c
0x0 , 0x3e , 0x0 , 0x0 , 0x7f , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x98 , 0x61 , 0x0 , 0xf8 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 100 d
0x0 , 0x3f , 0x0 , 0x80 , 0x7f , 0x0 , 0x80 , 0x44 , 0x0 , 0x80 , 0x44 , 0x0 , 0x80 , 0x44 , 0x0 , 0x0 , 0x27 , 0x0 , 0x0 , 0x6 , // Char 101 e
0x80 , 0x40 , 0x0 , 0xf0 , 0x7f , 0x0 , 0x88 , 0x40 , 0x0 , 0x88 , // Char 102 f
0x0 , 0xaf , 0x3 , 0x80 , 0xff , 0x6 , 0x80 , 0x50 , 0x4 , 0x80 , 0x50 , 0x4 , 0x80 , 0x59 , 0x4 , 0x80 , 0xcf , 0x6 , 0x80 , 0x80 , 0x3 , // Char 103 g
0xf8 , 0x7f , 0x0 , 0xf8 , 0x7f , 0x0 , 0x0 , 0x41 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x41 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 104 h
0x0 , 0x40 , 0x0 , 0xb0 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 105 i
0x0 , 0x0 , 0x4 , 0x0 , 0x1 , 0x6 , 0xb0 , 0xff , 0x3 , // Char 106 j
0xf8 , 0x7f , 0x0 , 0xf8 , 0x7f , 0x0 , 0x0 , 0x4c , 0x0 , 0x0 , 0x1e , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x60 , 0x0 , 0x80 , 0x40 , // Char 107 k
0xf8 , 0x7f , 0x0 , 0xf8 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 108 l
0x80 , 0x40 , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0x41 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x41 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x41 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x41 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 109 m
0x80 , 0x40 , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0x41 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0x7c , // Char 110 n
0x0 , 0x3f , 0x0 , 0x80 , 0x7f , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x61 , 0x0 , 0x0 , 0x3f , // Char 111 o
0x80 , 0x0 , 0x4 , 0x80 , 0xff , 0x7 , 0x0 , 0x41 , 0x4 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x41 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0x1e , // Char 112 p
0x0 , 0x3e , 0x0 , 0x0 , 0x7f , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x61 , 0x4 , 0x80 , 0xff , 0x7 , 0x0 , 0x0 , 0x4 , // Char 113 q
0x80 , 0x40 , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0x41 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x1 , // Char 114 r
0x0 , 0x67 , 0x0 , 0x80 , 0x46 , 0x0 , 0x80 , 0x4c , 0x0 , 0x80 , 0x4c , 0x0 , 0x80 , 0x39 , // Char 115 s
0x80 , 0x0 , 0x0 , 0xe0 , 0x7f , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x40 , // Char 116 t
0x80 , 0x1 , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x80 , 0x20 , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 117 u
0x80 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x18 , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , // Char 118 v
0x80 , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x7 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x70 , 0x0 , 0x80 , 0xf , 0x0 , 0x80 , 0x1 , // Char 119 w
0x80 , 0x40 , 0x0 , 0x80 , 0x40 , 0x0 , 0x80 , 0x73 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x1e , 0x0 , 0x80 , 0x71 , 0x0 , 0x80 , 0x60 , 0x0 , 0x0 , 0x40 , // Char 120 x
0x80 , 0x0 , 0x0 , 0x80 , 0x3 , 0x6 , 0x80 , 0xf , 0x4 , 0x0 , 0x7c , 0x3 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x80 , 0x7 , 0x0 , 0x80 , // Char 121 y
0x0 , 0x40 , 0x0 , 0x80 , 0x61 , 0x0 , 0x80 , 0x78 , 0x0 , 0x80 , 0x5c , 0x0 , 0x80 , 0x46 , 0x0 , 0x80 , 0x43 , 0x0 , 0x80 , 0x60 , // Char 122 z
0x0 , 0x4 , 0x0 , 0xe0 , 0xff , 0x0 , 0xf0 , 0xfb , 0x1 , 0x10 , 0x0 , 0x1 , // Char 123 {
0xf8 , 0xff , 0x7 , 0xf8 , 0xff , 0x7 , // Char 124 |
0x10 , 0x0 , 0x1 , 0xe0 , 0xfb , 0x0 , 0x0 , 0x4 , // Char 125 }
0x0 , 0x8 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x4 , // Char 126 ~
};
