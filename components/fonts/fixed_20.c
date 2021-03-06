#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_fixed_20[] PROGMEM = {
10 , // Width 
20 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 10, // Char 32   - Nodata
 0x0, 0x0, 0x5, 0x4, // Char 33 ! 
 0x0, 0x5, 0xd, 0x7, // Char 34 " 
 0x0, 0x12, 0x1f, 0xd, // Char 35 # 
 0x0, 0x31, 0x1d, 0xc, // Char 36 $ 
 0x0, 0x4e, 0x2f, 0x12, // Char 37 % 
 0x0, 0x7d, 0x20, 0xd, // Char 38 & 
 0x0, 0x9d, 0x4, 0x4, // Char 39 ' 
 0x0, 0xa1, 0xf, 0x7, // Char 40 ( 
 0x0, 0xb0, 0xb, 0x6, // Char 41 ) 
 0x0, 0xbb, 0x10, 0x8, // Char 42 * 
 0x0, 0xcb, 0x1d, 0xc, // Char 43 + 
 0x0, 0xe8, 0x6, 0x4, // Char 44 , 
 0x0, 0xee, 0xe, 0x7, // Char 45 - 
 0x0, 0xfc, 0x5, 0x4, // Char 46 . 
 0x1, 0x1, 0x10, 0x8, // Char 47 / 
 0x1, 0x11, 0x1a, 0xb, // Char 48 0 
 0x1, 0x2b, 0xe, 0x7, // Char 49 1 
 0x1, 0x39, 0x1a, 0xb, // Char 50 2 
 0x1, 0x53, 0x1a, 0xb, // Char 51 3 
 0x1, 0x6d, 0x1a, 0xb, // Char 52 4 
 0x1, 0x87, 0x1a, 0xb, // Char 53 5 
 0x1, 0xa1, 0x1a, 0xb, // Char 54 6 
 0x1, 0xbb, 0x19, 0xb, // Char 55 7 
 0x1, 0xd4, 0x1a, 0xb, // Char 56 8 
 0x1, 0xee, 0x1a, 0xb, // Char 57 9 
 0x2, 0x8, 0x5, 0x4, // Char 58 : 
 0x2, 0xd, 0x6, 0x4, // Char 59 ; 
 0x2, 0x13, 0x1d, 0xc, // Char 60 < 
 0x2, 0x30, 0x1d, 0xc, // Char 61 = 
 0x2, 0x4d, 0x1d, 0xc, // Char 62 > 
 0x2, 0x6a, 0x16, 0xa, // Char 63 ? 
 0x2, 0x80, 0x35, 0x14, // Char 64 @ 
 0x2, 0xb5, 0x26, 0xf, // Char 65 A 
 0x2, 0xdb, 0x1d, 0xc, // Char 66 B 
 0x2, 0xf8, 0x23, 0xe, // Char 67 C 
 0x3, 0x1b, 0x20, 0xd, // Char 68 D 
 0x3, 0x3b, 0x1d, 0xc, // Char 69 E 
 0x3, 0x58, 0x1c, 0xc, // Char 70 F 
 0x3, 0x74, 0x26, 0xf, // Char 71 G 
 0x3, 0x9a, 0x20, 0xd, // Char 72 H 
 0x3, 0xba, 0x5, 0x4, // Char 73 I 
 0x3, 0xbf, 0x1a, 0xb, // Char 74 J 
 0x3, 0xd9, 0x20, 0xd, // Char 75 K 
 0x3, 0xf9, 0x1a, 0xb, // Char 76 L 
 0x4, 0x13, 0x29, 0x10, // Char 77 M 
 0x4, 0x3c, 0x23, 0xe, // Char 78 N 
 0x4, 0x5f, 0x29, 0x10, // Char 79 O 
 0x4, 0x88, 0x1c, 0xc, // Char 80 P 
 0x4, 0xa4, 0x29, 0x10, // Char 81 Q 
 0x4, 0xcd, 0x23, 0xe, // Char 82 R 
 0x4, 0xf0, 0x20, 0xd, // Char 83 S 
 0x5, 0x10, 0x22, 0xe, // Char 84 T 
 0x5, 0x32, 0x20, 0xd, // Char 85 U 
 0x5, 0x52, 0x22, 0xe, // Char 86 V 
 0x5, 0x74, 0x31, 0x13, // Char 87 W 
 0x5, 0xa5, 0x23, 0xe, // Char 88 X 
 0x5, 0xc8, 0x22, 0xe, // Char 89 Y 
 0x5, 0xea, 0x23, 0xe, // Char 90 Z 
 0x6, 0xd, 0xc, 0x6, // Char 91 [ 
 0x6, 0x19, 0x11, 0x8, // Char 92 Backslash 
 0x6, 0x2a, 0xc, 0x6, // Char 93 ] 
 0x6, 0x36, 0x13, 0x9, // Char 94 ^ 
 0x6, 0x49, 0x24, 0xe, // Char 95 _ 
 0x6, 0x6d, 0x7, 0x5, // Char 96 ` 
 0x6, 0x74, 0x1d, 0xc, // Char 97 a 
 0x6, 0x91, 0x1a, 0xb, // Char 98 b 
 0x6, 0xab, 0x17, 0xa, // Char 99 c 
 0x6, 0xc2, 0x1d, 0xc, // Char 100 d 
 0x6, 0xdf, 0x1a, 0xb, // Char 101 e 
 0x6, 0xf9, 0xd, 0x7, // Char 102 f 
 0x7, 0x6, 0x1a, 0xb, // Char 103 g 
 0x7, 0x20, 0x1a, 0xb, // Char 104 h 
 0x7, 0x3a, 0x5, 0x4, // Char 105 i 
 0x7, 0x3f, 0x9, 0x5, // Char 106 j 
 0x7, 0x48, 0x1a, 0xb, // Char 107 k 
 0x7, 0x62, 0x5, 0x4, // Char 108 l 
 0x7, 0x67, 0x29, 0x10, // Char 109 m 
 0x7, 0x90, 0x1a, 0xb, // Char 110 n 
 0x7, 0xaa, 0x1a, 0xb, // Char 111 o 
 0x7, 0xc4, 0x1a, 0xb, // Char 112 p 
 0x7, 0xde, 0x1e, 0xc, // Char 113 q 
 0x7, 0xfc, 0x10, 0x8, // Char 114 r 
 0x8, 0xc, 0x17, 0xa, // Char 115 s 
 0x8, 0x23, 0xe, 0x7, // Char 116 t 
 0x8, 0x31, 0x1a, 0xb, // Char 117 u 
 0x8, 0x4b, 0x1c, 0xc, // Char 118 v 
 0x8, 0x67, 0x28, 0x10, // Char 119 w 
 0x8, 0x8f, 0x17, 0xa, // Char 120 x 
 0x8, 0xa6, 0x16, 0xa, // Char 121 y 
 0x8, 0xbc, 0x17, 0xa, // Char 122 z 
 0x8, 0xd3, 0xf, 0x7, // Char 123 { 
 0x8, 0xe2, 0x3, 0x3, // Char 124 | 
 0x8, 0xe5, 0xe, 0x7, // Char 125 } 
 0x8, 0xf3, 0x17, 0xa, // Char 126 ~ 

// Data Table:
0x7f , 0x60 , 0x0 , 0xff , 0x67 , // Char 33 !
0x1f , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1f , // Char 34 "
0x0 , 0x2 , 0x0 , 0x10 , 0x2 , 0x0 , 0x10 , 0x7e , 0x0 , 0xf0 , 0xf , 0x0 , 0x7e , 0x2 , 0x0 , 0x10 , 0x2 , 0x0 , 0x10 , 0x7e , 0x0 , 0xf0 , 0x1f , 0x0 , 0x7e , 0x2 , 0x0 , 0x12 , 0x2 , 0x0 , 0x10 , // Char 35 #
0x3c , 0x1c , 0x0 , 0x7e , 0x38 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xff , 0xff , 0x1 , 0xc3 , 0x61 , 0x0 , 0x83 , 0x61 , 0x0 , 0x8e , 0x33 , 0x0 , 0xc , 0x3f , 0x0 , 0x0 , 0x4 , // Char 36 $
0x3c , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x42 , 0x0 , 0x0 , 0x42 , 0x40 , 0x0 , 0x66 , 0x60 , 0x0 , 0x3c , 0x18 , 0x0 , 0x0 , 0xe , 0x0 , 0x80 , 0x3 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x38 , 0x1c , 0x0 , 0xe , 0x3e , 0x0 , 0x3 , 0x63 , 0x0 , 0x0 , 0x61 , 0x0 , 0x0 , 0x63 , 0x0 , 0x0 , 0x77 , 0x0 , 0x0 , 0x3e , // Char 37 %
0x0 , 0x1e , 0x0 , 0x0 , 0x3f , 0x0 , 0xbe , 0x63 , 0x0 , 0xf7 , 0x61 , 0x0 , 0xe3 , 0x61 , 0x0 , 0xe3 , 0x63 , 0x0 , 0x73 , 0x37 , 0x0 , 0x3e , 0x3e , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x60 , // Char 38 &
0x1f , 0x0 , 0x0 , 0xf , // Char 39 '
0x0 , 0x7 , 0x0 , 0xf0 , 0x7f , 0x0 , 0x3c , 0xe0 , 0x1 , 0x7 , 0x0 , 0x7 , 0x1 , 0x0 , 0x4 , // Char 40 (
0x3 , 0x0 , 0x6 , 0xe , 0x80 , 0x3 , 0xf8 , 0xff , 0x0 , 0xe0 , 0x3f , // Char 41 )
0x4 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x1d , 0x0 , 0x0 , 0x34 , 0x0 , 0x0 , 0x4 , // Char 42 *
0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0xe0 , 0x7f , 0x0 , 0xe0 , 0x7f , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 43 +
0x0 , 0x60 , 0x2 , 0x0 , 0xe0 , 0x1 , // Char 44 ,
0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 45 -
0x0 , 0x60 , 0x0 , 0x0 , 0x60 , // Char 46 .
0x0 , 0x60 , 0x0 , 0x0 , 0x3e , 0x0 , 0xc0 , 0x3 , 0x0 , 0x78 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1 , // Char 47 /
0xf8 , 0xf , 0x0 , 0xfe , 0x3f , 0x0 , 0x6 , 0x70 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x6 , 0x70 , 0x0 , 0xfe , 0x3f , 0x0 , 0xf8 , 0xf , // Char 48 0
0x8 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xfe , 0x7f , 0x0 , 0xff , 0x7f , // Char 49 1
0x1c , 0x78 , 0x0 , 0x1e , 0x7c , 0x0 , 0x7 , 0x6e , 0x0 , 0x3 , 0x66 , 0x0 , 0x3 , 0x63 , 0x0 , 0x83 , 0x61 , 0x0 , 0xc3 , 0x61 , 0x0 , 0xfe , 0x60 , 0x0 , 0x7c , 0x60 , // Char 50 2
0x1c , 0x1c , 0x0 , 0xe , 0x38 , 0x0 , 0x3 , 0x60 , 0x0 , 0x43 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xe7 , 0x70 , 0x0 , 0xbe , 0x3f , 0x0 , 0x1c , 0x1f , // Char 51 3
0x0 , 0xf , 0x0 , 0x80 , 0xd , 0x0 , 0xe0 , 0xc , 0x0 , 0x30 , 0xc , 0x0 , 0x1c , 0xc , 0x0 , 0x1e , 0xc , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , // Char 52 4
0xe0 , 0x18 , 0x0 , 0xff , 0x38 , 0x0 , 0x67 , 0x60 , 0x0 , 0x63 , 0x60 , 0x0 , 0x63 , 0x60 , 0x0 , 0x63 , 0x60 , 0x0 , 0xe3 , 0x70 , 0x0 , 0xc3 , 0x3f , 0x0 , 0x81 , 0x1f , // Char 53 5
0xf8 , 0xf , 0x0 , 0xfc , 0x3f , 0x0 , 0xc6 , 0x70 , 0x0 , 0x43 , 0x60 , 0x0 , 0x63 , 0x60 , 0x0 , 0x63 , 0x60 , 0x0 , 0xc3 , 0x70 , 0x0 , 0xce , 0x3f , 0x0 , 0x8c , 0x1f , // Char 54 6
0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x70 , 0x0 , 0x3 , 0x7e , 0x0 , 0x83 , 0x7 , 0x0 , 0xe3 , 0x1 , 0x0 , 0x3b , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7 , // Char 55 7
0x1c , 0x1f , 0x0 , 0xbe , 0x3f , 0x0 , 0xe7 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xe7 , 0x60 , 0x0 , 0xbe , 0x3f , 0x0 , 0x1c , 0x1f , // Char 56 8
0xfc , 0x18 , 0x0 , 0xfe , 0x39 , 0x0 , 0x87 , 0x61 , 0x0 , 0x3 , 0x63 , 0x0 , 0x3 , 0x63 , 0x0 , 0x3 , 0x61 , 0x0 , 0x87 , 0x31 , 0x0 , 0xfe , 0x1f , 0x0 , 0xf8 , 0xf , // Char 57 9
0x30 , 0x60 , 0x0 , 0x30 , 0x60 , // Char 58 :
0x30 , 0x60 , 0x2 , 0x30 , 0xe0 , 0x1 , // Char 59 ;
0x0 , 0x6 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1b , 0x0 , 0x80 , 0x19 , 0x0 , 0x80 , 0x11 , 0x0 , 0x80 , 0x30 , 0x0 , 0xc0 , 0x20 , 0x0 , 0xc0 , 0x60 , 0x0 , 0x40 , 0x40 , // Char 60 <
0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , 0x0 , 0x80 , 0x8 , // Char 61 =
0x60 , 0x60 , 0x0 , 0xc0 , 0x60 , 0x0 , 0xc0 , 0x30 , 0x0 , 0x80 , 0x31 , 0x0 , 0x80 , 0x11 , 0x0 , 0x0 , 0x19 , 0x0 , 0x0 , 0xb , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x6 , // Char 62 >
0x1e , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x67 , 0x0 , 0x83 , 0x67 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x3c , // Char 63 ?
0xc0 , 0x1f , 0x0 , 0xf0 , 0x3d , 0x0 , 0x38 , 0x60 , 0x0 , 0xc , 0xc0 , 0x0 , 0x6 , 0x87 , 0x1 , 0xc6 , 0x8f , 0x1 , 0xe3 , 0x18 , 0x1 , 0x33 , 0x10 , 0x3 , 0x33 , 0x10 , 0x3 , 0x13 , 0x18 , 0x3 , 0x33 , 0xc , 0x1 , 0xe3 , 0x1f , 0x1 , 0xf3 , 0x91 , 0x1 , 0x36 , 0x10 , 0x0 , 0xe , 0x18 , 0x0 , 0x1c , 0xc , 0x0 , 0xf8 , 0x7 , 0x0 , 0xe0 , 0x3 , // Char 64 @
0x0 , 0x40 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x7e , 0x0 , 0xc0 , 0xf , 0x0 , 0xf8 , 0x7 , 0x0 , 0x3f , 0x6 , 0x0 , 0x7 , 0x6 , 0x0 , 0x1f , 0x6 , 0x0 , 0xfe , 0x6 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x60 , // Char 65 A
0xff , 0x7f , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xe7 , 0x61 , 0x0 , 0xfe , 0x3b , 0x0 , 0x1c , 0x1f , // Char 66 B
0xf0 , 0x7 , 0x0 , 0xfc , 0x1f , 0x0 , 0xe , 0x3c , 0x0 , 0x6 , 0x30 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x6 , 0x30 , 0x0 , 0x1e , 0x3c , 0x0 , 0x18 , 0x1e , // Char 67 C
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x7 , 0x70 , 0x0 , 0xe , 0x38 , 0x0 , 0xfc , 0x1f , 0x0 , 0xf8 , 0xf , // Char 68 D
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0x83 , 0x60 , // Char 69 E
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x83 , 0x0 , 0x0 , 0x1 , // Char 70 F
0xf0 , 0x7 , 0x0 , 0xfc , 0x1f , 0x0 , 0xe , 0x3c , 0x0 , 0x6 , 0x30 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x83 , 0x61 , 0x0 , 0x83 , 0x61 , 0x0 , 0x83 , 0x21 , 0x0 , 0x8e , 0x31 , 0x0 , 0x9c , 0x1f , 0x0 , 0x98 , 0x7f , // Char 71 G
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , // Char 72 H
0xff , 0x7f , 0x0 , 0xff , 0x7f , // Char 73 I
0x0 , 0xc , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x78 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0xf , // Char 74 J
0xff , 0x7f , 0x0 , 0x80 , 0x3 , 0x0 , 0xc0 , 0x1 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xb8 , 0x3 , 0x0 , 0x1c , 0x7 , 0x0 , 0xe , 0x1c , 0x0 , 0x7 , 0x38 , 0x0 , 0x3 , 0x70 , 0x0 , 0x1 , 0x40 , // Char 75 K
0xff , 0x7f , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x40 , // Char 76 L
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0xf , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x7c , 0x0 , 0xc0 , 0xf , 0x0 , 0xf8 , 0x1 , 0x0 , 0x1f , 0x0 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , // Char 77 M
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0xf , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x78 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , // Char 78 N
0xf0 , 0x7 , 0x0 , 0xfc , 0x1f , 0x0 , 0xe , 0x38 , 0x0 , 0x6 , 0x30 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x7 , 0x70 , 0x0 , 0x6 , 0x30 , 0x0 , 0x1c , 0x1c , 0x0 , 0xf8 , 0xf , 0x0 , 0xe0 , 0x3 , // Char 79 O
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0xc3 , 0x1 , 0x0 , 0xfe , 0x0 , 0x0 , 0x7c , // Char 80 P
0xf0 , 0x7 , 0x0 , 0xfc , 0x1f , 0x0 , 0xe , 0x38 , 0x0 , 0x6 , 0x30 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x60 , 0x0 , 0x3 , 0x68 , 0x0 , 0x7 , 0x78 , 0x0 , 0x6 , 0x38 , 0x0 , 0x1c , 0x7c , 0x0 , 0xf8 , 0xcf , 0x0 , 0xe0 , 0x3 , // Char 81 Q
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0xc7 , 0x3 , 0x0 , 0x7e , 0x7f , 0x0 , 0x3c , 0x7c , 0x0 , 0x0 , 0x40 , // Char 82 R
0x18 , 0xc , 0x0 , 0x7e , 0x3c , 0x0 , 0x66 , 0x30 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0xc3 , 0x60 , 0x0 , 0x83 , 0x60 , 0x0 , 0x83 , 0x61 , 0x0 , 0x86 , 0x61 , 0x0 , 0xe , 0x3f , 0x0 , 0xc , 0x1f , // Char 83 S
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 84 T
0xff , 0x1f , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0xf , // Char 85 U
0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x78 , 0x0 , 0x80 , 0x1f , 0x0 , 0xf0 , 0x3 , 0x0 , 0x7e , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1 , // Char 86 V
0xf , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x78 , 0x0 , 0x80 , 0x3f , 0x0 , 0xf0 , 0x3 , 0x0 , 0x7f , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x7e , 0x0 , 0xf0 , 0x1f , 0x0 , 0xff , 0x1 , 0x0 , 0x1f , // Char 87 W
0x1 , 0x60 , 0x0 , 0x7 , 0x70 , 0x0 , 0xe , 0x3c , 0x0 , 0x3c , 0xe , 0x0 , 0xf0 , 0x7 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x38 , 0xf , 0x0 , 0x1e , 0x1c , 0x0 , 0x7 , 0x78 , 0x0 , 0x3 , 0x60 , 0x0 , 0x0 , 0x40 , // Char 88 X
0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x80 , 0x7f , 0x0 , 0xc0 , 0x7f , 0x0 , 0xf0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 89 Y
0x0 , 0x40 , 0x0 , 0x3 , 0x70 , 0x0 , 0x3 , 0x78 , 0x0 , 0x3 , 0x7e , 0x0 , 0x3 , 0x67 , 0x0 , 0x83 , 0x63 , 0x0 , 0xe3 , 0x61 , 0x0 , 0x73 , 0x60 , 0x0 , 0x3b , 0x60 , 0x0 , 0x1f , 0x60 , 0x0 , 0x7 , 0x60 , 0x0 , 0x3 , 0x60 , // Char 90 Z
0xff , 0xff , 0x7 , 0xff , 0xff , 0x7 , 0x3 , 0x0 , 0x6 , 0x3 , 0x0 , 0x6 , // Char 91 [
0x3 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x40 , // Char 92 Backslash
0x1 , 0x0 , 0x4 , 0x1 , 0x0 , 0x4 , 0xff , 0xff , 0x7 , 0xff , 0xff , 0x7 , // Char 93 ]
0xc0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe0 , // Char 94 ^
0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 95 _
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x6 , // Char 96 `
0x40 , 0x3c , 0x0 , 0x60 , 0x7e , 0x0 , 0x30 , 0x66 , 0x0 , 0x30 , 0x62 , 0x0 , 0x30 , 0x62 , 0x0 , 0x30 , 0x23 , 0x0 , 0x70 , 0x33 , 0x0 , 0xe0 , 0x7f , 0x0 , 0x80 , 0x7f , 0x0 , 0x0 , 0x40 , // Char 97 a
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x60 , 0x30 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0xe0 , 0x38 , 0x0 , 0xc0 , 0x1f , // Char 98 b
0xc0 , 0x1f , 0x0 , 0xe0 , 0x3d , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x60 , 0x30 , 0x0 , 0xe0 , 0x38 , // Char 99 c
0x0 , 0x2 , 0x0 , 0xc0 , 0x1f , 0x0 , 0xe0 , 0x38 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x60 , 0x30 , 0x0 , 0xff , 0x7f , 0x0 , 0xff , 0x7f , // Char 100 d
0xc0 , 0x1f , 0x0 , 0xe0 , 0x3f , 0x0 , 0x30 , 0x71 , 0x0 , 0x30 , 0x61 , 0x0 , 0x30 , 0x61 , 0x0 , 0x30 , 0x61 , 0x0 , 0x30 , 0x71 , 0x0 , 0xe0 , 0x39 , 0x0 , 0xc0 , 0x19 , // Char 101 e
0x10 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xfe , 0x7f , 0x0 , 0x37 , 0x0 , 0x0 , 0x13 , // Char 102 f
0xc0 , 0x1f , 0x1 , 0xe0 , 0x3f , 0x3 , 0x30 , 0x60 , 0x6 , 0x30 , 0x60 , 0x6 , 0x30 , 0x60 , 0x6 , 0x30 , 0x60 , 0x6 , 0xe0 , 0x38 , 0x3 , 0xf0 , 0xff , 0x3 , 0xf0 , 0x7f , // Char 103 g
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xe0 , 0x7f , 0x0 , 0xc0 , 0x7f , // Char 104 h
0xf3 , 0x7f , 0x0 , 0xf3 , 0x7f , // Char 105 i
0x0 , 0x0 , 0x6 , 0xf3 , 0xff , 0x7 , 0xf3 , 0xff , 0x3 , // Char 106 j
0xff , 0x7f , 0x0 , 0xff , 0x7f , 0x0 , 0x0 , 0x3 , 0x0 , 0x80 , 0x1 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x60 , 0x1e , 0x0 , 0x30 , 0x38 , 0x0 , 0x10 , 0x70 , 0x0 , 0x0 , 0x40 , // Char 107 k
0xff , 0x7f , 0x0 , 0xff , 0x7f , // Char 108 l
0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xe0 , 0x7f , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xe0 , 0x7f , // Char 109 m
0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xe0 , 0x7f , 0x0 , 0xc0 , 0x7f , // Char 110 n
0xc0 , 0x1f , 0x0 , 0xe0 , 0x3f , 0x0 , 0x70 , 0x70 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x70 , 0x70 , 0x0 , 0xe0 , 0x3f , 0x0 , 0xc0 , 0x1f , // Char 111 o
0xf0 , 0xff , 0x7 , 0xf0 , 0xff , 0x7 , 0x60 , 0x30 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0xe0 , 0x38 , 0x0 , 0xc0 , 0x1f , // Char 112 p
0x0 , 0x2 , 0x0 , 0xc0 , 0x1f , 0x0 , 0xe0 , 0x38 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x30 , 0x60 , 0x0 , 0x60 , 0x30 , 0x0 , 0xf0 , 0xff , 0x7 , 0xf0 , 0xff , 0x7 , // Char 113 q
0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , 0x0 , 0xe0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x10 , // Char 114 r
0xe0 , 0x39 , 0x0 , 0xe0 , 0x73 , 0x0 , 0x30 , 0x63 , 0x0 , 0x30 , 0x63 , 0x0 , 0x30 , 0x62 , 0x0 , 0x30 , 0x66 , 0x0 , 0x60 , 0x3e , 0x0 , 0x40 , 0x3c , // Char 115 s
0x10 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xfe , 0x7f , 0x0 , 0x30 , 0x60 , 0x0 , 0x10 , 0x60 , // Char 116 t
0xf0 , 0x1f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0xf0 , 0x7f , 0x0 , 0xf0 , 0x7f , // Char 117 u
0x10 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x1f , 0x0 , 0xe0 , 0x3 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x10 , // Char 118 v
0x30 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x78 , 0x0 , 0xc0 , 0x1f , 0x0 , 0xf0 , 0x1 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x78 , 0x0 , 0x80 , 0x3f , 0x0 , 0xf0 , 0x3 , 0x0 , 0x70 , // Char 119 w
0x30 , 0x60 , 0x0 , 0x70 , 0x70 , 0x0 , 0xc0 , 0x1d , 0x0 , 0x80 , 0xf , 0x0 , 0x80 , 0xf , 0x0 , 0xe0 , 0x1c , 0x0 , 0x70 , 0x70 , 0x0 , 0x10 , 0x60 , // Char 120 x
0x70 , 0x0 , 0x6 , 0xe0 , 0x7 , 0x6 , 0x0 , 0x3f , 0x7 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x7c , 0x0 , 0x80 , 0x1f , 0x0 , 0xe0 , 0x3 , 0x0 , 0x70 , // Char 121 y
0x10 , 0x70 , 0x0 , 0x30 , 0x78 , 0x0 , 0x30 , 0x6c , 0x0 , 0x30 , 0x67 , 0x0 , 0xb0 , 0x63 , 0x0 , 0xf0 , 0x61 , 0x0 , 0x70 , 0x60 , 0x0 , 0x30 , 0x60 , // Char 122 z
0x0 , 0x7 , 0x0 , 0xfc , 0xff , 0x1 , 0xff , 0xfd , 0x7 , 0x3 , 0x0 , 0x6 , 0x1 , 0x0 , 0x4 , // Char 123 {
0xff , 0xff , 0x7 , // Char 124 |
0x1 , 0x0 , 0x4 , 0x3 , 0x0 , 0x6 , 0xff , 0xf8 , 0x7 , 0xfe , 0xff , 0x3 , 0x0 , 0x7 , // Char 125 }
0xc0 , 0x1 , 0x0 , 0x40 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0xc0 , 0x1 , // Char 126 ~
};
