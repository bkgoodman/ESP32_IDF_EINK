#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Nimbus_Roman_20[] PROGMEM = {
10 , // Width 
29 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 10, // Char 32   - Nodata
 0x0, 0x0, 0x7, 0x4, // Char 33 ! 
 0x0, 0x7, 0x12, 0x7, // Char 34 " 
 0x0, 0x19, 0x26, 0xc, // Char 35 # 
 0x0, 0x3f, 0x1f, 0xa, // Char 36 $ 
 0x0, 0x5e, 0x3b, 0x11, // Char 37 % 
 0x0, 0x99, 0x37, 0x10, // Char 38 & 
 0x0, 0xd0, 0x6, 0x4, // Char 39 ' 
 0x0, 0xd6, 0x12, 0x7, // Char 40 ( 
 0x0, 0xe8, 0x13, 0x7, // Char 41 ) 
 0x0, 0xfb, 0x1e, 0xa, // Char 42 * 
 0x1, 0x19, 0x27, 0xc, // Char 43 + 
 0x1, 0x40, 0xb, 0x5, // Char 44 , 
 0x1, 0x4b, 0x13, 0x7, // Char 45 - 
 0x1, 0x5e, 0x3, 0x3, // Char 46 . 
 0x1, 0x61, 0x16, 0x8, // Char 47 / 
 0x1, 0x77, 0x27, 0xc, // Char 48 0 
 0x1, 0x9e, 0xf, 0x6, // Char 49 1 
 0x1, 0xad, 0x1f, 0xa, // Char 50 2 
 0x1, 0xcc, 0x1f, 0xa, // Char 51 3 
 0x1, 0xeb, 0x23, 0xb, // Char 52 4 
 0x2, 0xe, 0x1f, 0xa, // Char 53 5 
 0x2, 0x2d, 0x1f, 0xa, // Char 54 6 
 0x2, 0x4c, 0x1e, 0xa, // Char 55 7 
 0x2, 0x6a, 0x1f, 0xa, // Char 56 8 
 0x2, 0x89, 0x1f, 0xa, // Char 57 9 
 0x2, 0xa8, 0x7, 0x4, // Char 58 : 
 0x2, 0xaf, 0x7, 0x4, // Char 59 ; 
 0x2, 0xb6, 0x1f, 0xa, // Char 60 < 
 0x2, 0xd5, 0x27, 0xc, // Char 61 = 
 0x2, 0xfc, 0x1f, 0xa, // Char 62 > 
 0x3, 0x1b, 0x1a, 0x9, // Char 63 ? 
 0x3, 0x35, 0x37, 0x10, // Char 64 @ 
 0x3, 0x6c, 0x33, 0xf, // Char 65 A 
 0x3, 0x9f, 0x2b, 0xd, // Char 66 B 
 0x3, 0xca, 0x2b, 0xd, // Char 67 C 
 0x3, 0xf5, 0x33, 0xf, // Char 68 D 
 0x4, 0x28, 0x2b, 0xd, // Char 69 E 
 0x4, 0x53, 0x26, 0xc, // Char 70 F 
 0x4, 0x79, 0x32, 0xf, // Char 71 G 
 0x4, 0xab, 0x33, 0xf, // Char 72 H 
 0x4, 0xde, 0x13, 0x7, // Char 73 I 
 0x4, 0xf1, 0x1a, 0x9, // Char 74 J 
 0x5, 0xb, 0x33, 0xf, // Char 75 K 
 0x5, 0x3e, 0x2b, 0xd, // Char 76 L 
 0x5, 0x69, 0x3f, 0x12, // Char 77 M 
 0x5, 0xa8, 0x32, 0xf, // Char 78 N 
 0x5, 0xda, 0x33, 0xf, // Char 79 O 
 0x6, 0xd, 0x26, 0xc, // Char 80 P 
 0x6, 0x33, 0x33, 0xf, // Char 81 Q 
 0x6, 0x66, 0x2f, 0xe, // Char 82 R 
 0x6, 0x95, 0x23, 0xb, // Char 83 S 
 0x6, 0xb8, 0x2e, 0xe, // Char 84 T 
 0x6, 0xe6, 0x32, 0xf, // Char 85 U 
 0x7, 0x18, 0x32, 0xf, // Char 86 V 
 0x7, 0x4a, 0x46, 0x14, // Char 87 W 
 0x7, 0x90, 0x33, 0xf, // Char 88 X 
 0x7, 0xc3, 0x32, 0xf, // Char 89 Y 
 0x7, 0xf5, 0x2f, 0xe, // Char 90 Z 
 0x8, 0x24, 0xe, 0x6, // Char 91 [ 
 0x8, 0x32, 0x17, 0x8, // Char 92 Backslash 
 0x8, 0x49, 0x10, 0x6, // Char 93 ] 
 0x8, 0x59, 0x1e, 0xa, // Char 94 ^ 
 0x8, 0x77, 0x28, 0xc, // Char 95 _ 
 0x8, 0x9f, 0xe, 0x6, // Char 96 ` 
 0x8, 0xad, 0x1b, 0x9, // Char 97 a 
 0x8, 0xc8, 0x23, 0xb, // Char 98 b 
 0x8, 0xeb, 0x1f, 0xa, // Char 99 c 
 0x9, 0xa, 0x1f, 0xa, // Char 100 d 
 0x9, 0x29, 0x1f, 0xa, // Char 101 e 
 0x9, 0x48, 0x16, 0x8, // Char 102 f 
 0x9, 0x5e, 0x1f, 0xa, // Char 103 g 
 0x9, 0x7d, 0x1f, 0xa, // Char 104 h 
 0x9, 0x9c, 0xf, 0x6, // Char 105 i 
 0x9, 0xab, 0x13, 0x7, // Char 106 j 
 0x9, 0xbe, 0x23, 0xb, // Char 107 k 
 0x9, 0xe1, 0xf, 0x6, // Char 108 l 
 0x9, 0xf0, 0x37, 0x10, // Char 109 m 
 0xa, 0x27, 0x1f, 0xa, // Char 110 n 
 0xa, 0x46, 0x1f, 0xa, // Char 111 o 
 0xa, 0x65, 0x1f, 0xa, // Char 112 p 
 0xa, 0x84, 0x20, 0xa, // Char 113 q 
 0xa, 0xa4, 0x16, 0x8, // Char 114 r 
 0xa, 0xba, 0x17, 0x8, // Char 115 s 
 0xa, 0xd1, 0xf, 0x6, // Char 116 t 
 0xa, 0xe0, 0x1f, 0xa, // Char 117 u 
 0xa, 0xff, 0x1e, 0xa, // Char 118 v 
 0xb, 0x1d, 0x32, 0xf, // Char 119 w 
 0xb, 0x4f, 0x1f, 0xa, // Char 120 x 
 0xb, 0x6e, 0x1e, 0xa, // Char 121 y 
 0xb, 0x8c, 0x1b, 0x9, // Char 122 z 
 0xb, 0xa7, 0xc, 0x5, // Char 123 { 
 0xb, 0xb3, 0x8, 0x4, // Char 124 | 
 0xb, 0xbb, 0xf, 0x6, // Char 125 } 
 0xb, 0xca, 0x23, 0xb, // Char 126 ~ 

// Data Table:
0x0 , 0xfe , 0x33 , 0x0 , 0x0 , 0x1c , 0x30 , // Char 33 !
0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x6 , // Char 34 "
0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x20 , 0x2 , 0x0 , 0x0 , 0x20 , 0x3f , 0x0 , 0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0x26 , 0x2 , 0x0 , 0x0 , 0x20 , 0x22 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0x22 , 0x2 , 0x0 , 0x0 , 0x20 , // Char 35 #
0x0 , 0x38 , 0x18 , 0x0 , 0x0 , 0x7c , 0x20 , 0x0 , 0x0 , 0x62 , 0x20 , 0x0 , 0x0 , 0xfe , 0x20 , 0x0 , 0x0 , 0xc2 , 0x21 , 0x0 , 0x0 , 0x82 , 0x21 , 0x0 , 0x0 , 0x6 , 0x1f , 0x0 , 0x0 , 0xc , 0x1f , // Char 36 $
0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0x0 , 0x8c , 0x0 , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x42 , 0x18 , 0x0 , 0x0 , 0x22 , 0xc , 0x0 , 0x0 , 0x1c , 0x3 , 0x0 , 0x0 , 0xc4 , 0x0 , 0x0 , 0x0 , 0x74 , 0x1e , 0x0 , 0x0 , 0x9c , 0x3f , 0x0 , 0x0 , 0x86 , 0x21 , 0x0 , 0x0 , 0x42 , 0x20 , 0x0 , 0x0 , 0x40 , 0x10 , 0x0 , 0x0 , 0xc0 , 0xc , 0x0 , 0x0 , 0x0 , 0x1 , // Char 37 %
0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0x80 , 0x30 , 0x0 , 0x0 , 0xfc , 0x20 , 0x0 , 0x0 , 0xfe , 0x20 , 0x0 , 0x0 , 0xc2 , 0x23 , 0x0 , 0x0 , 0x82 , 0x17 , 0x0 , 0x0 , 0x16 , 0xe , 0x0 , 0x0 , 0xc , 0x1c , 0x0 , 0x0 , 0x20 , 0x3b , 0x0 , 0x0 , 0xe0 , 0x30 , 0x0 , 0x0 , 0x60 , 0x30 , 0x0 , 0x0 , 0x20 , 0x30 , 0x0 , 0x0 , 0x0 , 0x10 , // Char 38 &
0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0xe , // Char 39 '
0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x8 , 0xc0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x1 , 0x0 , 0x2 , // Char 40 (
0x0 , 0x2 , 0x0 , 0x1 , 0x0 , 0x4 , 0x80 , 0x0 , 0x0 , 0x38 , 0x60 , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x80 , 0x7 , // Char 41 )
0x0 , 0x88 , 0x0 , 0x0 , 0x0 , 0xd8 , 0x0 , 0x0 , 0x0 , 0x50 , 0x0 , 0x0 , 0x0 , 0xbe , 0x1 , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0x0 , 0x50 , 0x0 , 0x0 , 0x0 , 0xd8 , 0x0 , 0x0 , 0x0 , 0x88 , // Char 42 *
0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 43 +
0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0xb0 , 0x0 , 0x0 , 0x0 , 0x70 , // Char 44 ,
0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , // Char 45 -
0x0 , 0x0 , 0x30 , // Char 46 .
0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x2 , // Char 47 /
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0x0 , 0x6 , 0x30 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x6 , 0x30 , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0x80 , 0x1 , // Char 48 0
0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x0 , 0x20 , // Char 49 1
0x0 , 0x8 , 0x20 , 0x0 , 0x0 , 0x4 , 0x30 , 0x0 , 0x0 , 0x6 , 0x38 , 0x0 , 0x0 , 0x6 , 0x34 , 0x0 , 0x0 , 0x6 , 0x33 , 0x0 , 0x0 , 0xce , 0x31 , 0x0 , 0x0 , 0x7c , 0x30 , 0x0 , 0x0 , 0x10 , 0x30 , // Char 50 2
0x0 , 0x8 , 0x30 , 0x0 , 0x0 , 0x4 , 0x30 , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0xc6 , 0x20 , 0x0 , 0x0 , 0xfe , 0x11 , 0x0 , 0x0 , 0x9c , 0xf , 0x0 , 0x0 , 0x0 , 0x7 , // Char 51 3
0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0x5 , 0x0 , 0x0 , 0x80 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x10 , 0x4 , 0x0 , 0x0 , 0xc , 0x4 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x0 , 0x4 , // Char 52 4
0x0 , 0x20 , 0x30 , 0x0 , 0x0 , 0x38 , 0x30 , 0x0 , 0x0 , 0x36 , 0x20 , 0x0 , 0x0 , 0x66 , 0x20 , 0x0 , 0x0 , 0x66 , 0x20 , 0x0 , 0x0 , 0xe6 , 0x10 , 0x0 , 0x0 , 0xc6 , 0xf , 0x0 , 0x0 , 0x0 , 0x2 , // Char 53 5
0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0x3c , 0x30 , 0x0 , 0x0 , 0x26 , 0x20 , 0x0 , 0x0 , 0x22 , 0x20 , 0x0 , 0x0 , 0x61 , 0x20 , 0x0 , 0x0 , 0xe1 , 0x1f , 0x0 , 0x0 , 0xc0 , 0xf , // Char 54 6
0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x6 , 0x38 , 0x0 , 0x0 , 0x6 , 0xf , 0x0 , 0x0 , 0xe6 , 0x1 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x6 , // Char 55 7
0x0 , 0x18 , 0xe , 0x0 , 0x0 , 0x3c , 0x1f , 0x0 , 0x0 , 0xe2 , 0x21 , 0x0 , 0x0 , 0xc2 , 0x20 , 0x0 , 0x0 , 0xc2 , 0x21 , 0x0 , 0x0 , 0xa2 , 0x23 , 0x0 , 0x0 , 0x3c , 0x1f , 0x0 , 0x0 , 0x8 , 0xe , // Char 56 8
0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0xfc , 0x43 , 0x0 , 0x0 , 0x2 , 0x43 , 0x0 , 0x0 , 0x2 , 0x22 , 0x0 , 0x0 , 0x2 , 0x32 , 0x0 , 0x0 , 0x6 , 0x1d , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xf0 , 0x3 , // Char 57 9
0x0 , 0x60 , 0x30 , 0x0 , 0x0 , 0x60 , 0x30 , // Char 58 :
0x0 , 0x60 , 0x30 , 0x0 , 0x0 , 0x60 , 0xf0 , // Char 59 ;
0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x20 , 0x3 , 0x0 , 0x0 , 0x10 , 0x6 , 0x0 , 0x0 , 0x10 , 0xe , 0x0 , 0x0 , 0x8 , 0xc , 0x0 , 0x0 , 0x0 , 0x18 , // Char 60 <
0x0 , 0x40 , 0x4 , 0x0 , 0x0 , 0x40 , 0x4 , 0x0 , 0x0 , 0x40 , 0x4 , 0x0 , 0x0 , 0x40 , 0x4 , 0x0 , 0x0 , 0x40 , 0x4 , 0x0 , 0x0 , 0x40 , 0x4 , 0x0 , 0x0 , 0x40 , 0x4 , 0x0 , 0x0 , 0x40 , 0x4 , 0x0 , 0x0 , 0x40 , 0x4 , 0x0 , 0x0 , 0x40 , 0x4 , // Char 61 =
0x0 , 0x8 , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x0 , 0x30 , 0x8 , 0x0 , 0x0 , 0x30 , 0x4 , 0x0 , 0x0 , 0x60 , 0x4 , 0x0 , 0x0 , 0xc0 , 0x2 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , // Char 62 >
0x0 , 0x8 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , 0x30 , 0x0 , 0x0 , 0x82 , 0x31 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x0 , 0x3c , // Char 63 ?
0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0x38 , 0xc , 0x0 , 0x0 , 0xc , 0x18 , 0x0 , 0x0 , 0x4 , 0x13 , 0x0 , 0x0 , 0xc2 , 0x27 , 0x0 , 0x0 , 0x22 , 0x24 , 0x0 , 0x0 , 0x12 , 0x20 , 0x0 , 0x0 , 0x12 , 0x22 , 0x0 , 0x0 , 0xe2 , 0x27 , 0x0 , 0x0 , 0xf2 , 0x24 , 0x0 , 0x0 , 0x4 , 0x14 , 0x0 , 0x0 , 0x8 , 0x2 , 0x0 , 0x0 , 0xf0 , 0x1 , // Char 64 @
0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x26 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x70 , 0x2 , 0x0 , 0x0 , 0xc , 0x2 , 0x0 , 0x0 , 0x3e , 0x2 , 0x0 , 0x0 , 0xf8 , 0x2 , 0x0 , 0x0 , 0xc0 , 0x27 , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 65 A
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0xc6 , 0x21 , 0x0 , 0x0 , 0x7c , 0x3f , 0x0 , 0x0 , 0x38 , 0x1f , 0x0 , 0x0 , 0x0 , 0xe , // Char 66 B
0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0x1c , 0x1c , 0x0 , 0x0 , 0x4 , 0x30 , 0x0 , 0x0 , 0x2 , 0x30 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x6 , 0x10 , 0x0 , 0x0 , 0xe , 0x10 , // Char 67 C
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x4 , 0x10 , 0x0 , 0x0 , 0xc , 0x18 , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x1 , // Char 68 D
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0xe2 , 0x21 , 0x0 , 0x0 , 0xe , 0x30 , 0x0 , 0x0 , 0x0 , 0x8 , // Char 69 E
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x82 , 0x0 , 0x0 , 0x0 , 0x82 , 0x0 , 0x0 , 0x0 , 0x82 , 0x0 , 0x0 , 0x0 , 0x82 , 0x0 , 0x0 , 0x0 , 0xe2 , 0x1 , 0x0 , 0x0 , 0xe , // Char 70 F
0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0x1c , 0x1c , 0x0 , 0x0 , 0x4 , 0x10 , 0x0 , 0x0 , 0x6 , 0x30 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x46 , 0x30 , 0x0 , 0x0 , 0xce , 0x1f , 0x0 , 0x0 , 0xde , 0x1f , 0x0 , 0x0 , 0x40 , // Char 71 G
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x80 , 0x20 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , // Char 72 H
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , // Char 73 I
0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0x0 , 0x2 , // Char 74 J
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xc2 , 0x20 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xb0 , 0x3 , 0x0 , 0x0 , 0x18 , 0x7 , 0x0 , 0x0 , 0xe , 0x3e , 0x0 , 0x0 , 0x6 , 0x38 , 0x0 , 0x0 , 0x2 , 0x30 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 75 K
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x8 , // Char 76 L
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xe , 0x20 , 0x0 , 0x0 , 0x7e , 0x20 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x18 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x2 , 0x20 , // Char 77 M
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xe , 0x20 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x2 , 0xe , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , // Char 78 N
0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0x1c , 0x1c , 0x0 , 0x0 , 0x6 , 0x30 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x6 , 0x30 , 0x0 , 0x0 , 0xc , 0x18 , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0x0 , 0xf8 , 0xf , 0x0 , 0x0 , 0xc0 , 0x3 , // Char 79 O
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x82 , 0x0 , 0x0 , 0x0 , 0x82 , 0x0 , 0x0 , 0x0 , 0x82 , 0x0 , 0x0 , 0x0 , 0x6e , 0x0 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x0 , 0x38 , // Char 80 P
0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0x1c , 0x18 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x2 , 0x60 , 0x0 , 0x0 , 0x2 , 0xc0 , 0x0 , 0x0 , 0x2 , 0xc0 , 0x0 , 0x0 , 0x2 , 0xe0 , 0x1 , 0x0 , 0x6 , 0xa0 , 0x1 , 0x0 , 0xc , 0x30 , 0x1 , 0x0 , 0xfc , 0x1f , 0x2 , 0x0 , 0xf0 , 0xf , 0x2 , 0x0 , 0xc0 , 0x3 , // Char 81 Q
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x82 , 0x20 , 0x0 , 0x0 , 0x82 , 0x0 , 0x0 , 0x0 , 0x82 , 0x3 , 0x0 , 0x0 , 0xc2 , 0x7 , 0x0 , 0x0 , 0x66 , 0xe , 0x0 , 0x0 , 0x7c , 0x1c , 0x0 , 0x0 , 0x38 , 0x38 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 82 R
0x0 , 0x18 , 0x3c , 0x0 , 0x0 , 0x7c , 0x30 , 0x0 , 0x0 , 0x76 , 0x20 , 0x0 , 0x0 , 0xe2 , 0x20 , 0x0 , 0x0 , 0xc2 , 0x21 , 0x0 , 0x0 , 0x82 , 0x21 , 0x0 , 0x0 , 0x86 , 0x33 , 0x0 , 0x0 , 0xe , 0x1f , 0x0 , 0x0 , 0x0 , 0xe , // Char 83 S
0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0xe , // Char 84 T
0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0x2 , 0x38 , 0x0 , 0x0 , 0x2 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x2 , 0x10 , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , // Char 85 U
0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0xfa , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x72 , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x2 , // Char 86 V
0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0xf2 , 0x3 , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x2 , 0x7 , 0x0 , 0x0 , 0xce , 0x0 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0xfa , 0x1 , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x72 , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0x2 , // Char 87 W
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x6 , 0x30 , 0x0 , 0x0 , 0xe , 0x38 , 0x0 , 0x0 , 0x1e , 0x4 , 0x0 , 0x0 , 0x7a , 0x3 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0xa0 , 0x7 , 0x0 , 0x0 , 0x10 , 0x3e , 0x0 , 0x0 , 0xe , 0x3c , 0x0 , 0x0 , 0x6 , 0x30 , 0x0 , 0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0x2 , 0x20 , // Char 88 X
0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x70 , 0x20 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x1a , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , // Char 89 Y
0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x6 , 0x30 , 0x0 , 0x0 , 0x2 , 0x3c , 0x0 , 0x0 , 0x2 , 0x2e , 0x0 , 0x0 , 0x2 , 0x27 , 0x0 , 0x0 , 0xc2 , 0x23 , 0x0 , 0x0 , 0xe2 , 0x20 , 0x0 , 0x0 , 0x72 , 0x20 , 0x0 , 0x0 , 0x3e , 0x20 , 0x0 , 0x0 , 0xe , 0x20 , 0x0 , 0x0 , 0x6 , 0x30 , 0x0 , 0x0 , 0x0 , 0x38 , // Char 90 Z
0x0 , 0xfe , 0xff , 0x1 , 0x0 , 0x2 , 0x0 , 0x1 , 0x0 , 0x2 , 0x0 , 0x1 , 0x0 , 0x2 , // Char 91 [
0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x20 , // Char 92 Backslash
0x0 , 0x2 , 0x0 , 0x1 , 0x0 , 0x2 , 0x0 , 0x1 , 0x0 , 0xfe , 0xff , 0x1 , 0x0 , 0xfe , 0xff , 0x1 , // Char 93 ]
0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x80 , // Char 94 ^
0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 95 _
0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0x8 , // Char 96 `
0x0 , 0xc0 , 0x3c , 0x0 , 0x0 , 0xe0 , 0x3c , 0x0 , 0x0 , 0x20 , 0x22 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x60 , 0x11 , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x30 , // Char 97 a
0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0x40 , 0x20 , 0x0 , 0x0 , 0x60 , 0x20 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x60 , 0x20 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0xc0 , 0xf , // Char 98 b
0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x40 , 0x38 , 0x0 , 0x0 , 0x20 , 0x30 , 0x0 , 0x0 , 0x20 , 0x30 , 0x0 , 0x0 , 0x20 , 0x30 , 0x0 , 0x0 , 0xe0 , 0x10 , 0x0 , 0x0 , 0xc0 , 0x8 , // Char 99 c
0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xc0 , 0x3c , 0x0 , 0x0 , 0x20 , 0x30 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x62 , 0x10 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x1f , // Char 100 d
0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x40 , 0x39 , 0x0 , 0x0 , 0x20 , 0x31 , 0x0 , 0x0 , 0x20 , 0x31 , 0x0 , 0x0 , 0x60 , 0x31 , 0x0 , 0x0 , 0xc0 , 0x11 , 0x0 , 0x0 , 0x80 , 0x19 , // Char 101 e
0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0x22 , 0x20 , 0x0 , 0x0 , 0x22 , 0x0 , 0x0 , 0x0 , 0x6 , // Char 102 f
0x0 , 0x80 , 0xc1 , 0x1 , 0x0 , 0xc0 , 0x3b , 0x3 , 0x0 , 0x20 , 0x36 , 0x2 , 0x0 , 0x20 , 0x34 , 0x2 , 0x0 , 0x20 , 0x34 , 0x2 , 0x0 , 0xe0 , 0x33 , 0x2 , 0x0 , 0xe0 , 0x21 , 0x1 , 0x0 , 0x20 , 0xe0 , // Char 103 g
0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x40 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x20 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x80 , 0x3f , // Char 104 h
0x0 , 0x40 , 0x20 , 0x0 , 0x0 , 0xc6 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x20 , // Char 105 i
0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x40 , 0x0 , 0x2 , 0x0 , 0xc6 , 0xff , 0x1 , 0x0 , 0xe6 , 0xff , // Char 106 j
0x0 , 0x6 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x0 , 0x23 , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x80 , 0xe , 0x0 , 0x0 , 0x60 , 0x38 , 0x0 , 0x0 , 0x20 , 0x30 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 107 k
0x0 , 0x2 , 0x20 , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0xfe , 0x3f , 0x0 , 0x0 , 0x0 , 0x20 , // Char 108 l
0x0 , 0x60 , 0x20 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x40 , 0x20 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x40 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x20 , // Char 109 m
0x0 , 0x60 , 0x20 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x40 , 0x20 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x20 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3f , // Char 110 n
0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0xc0 , 0x1e , 0x0 , 0x0 , 0x20 , 0x30 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x60 , 0x20 , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x80 , 0xf , // Char 111 o
0x0 , 0xe0 , 0xff , 0x3 , 0x0 , 0xe0 , 0xff , 0x3 , 0x0 , 0x40 , 0x30 , 0x2 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x60 , 0x20 , 0x0 , 0x0 , 0xe0 , 0x19 , 0x0 , 0x0 , 0xc0 , 0xf , // Char 112 p
0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xc0 , 0x38 , 0x0 , 0x0 , 0x20 , 0x30 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , 0x10 , 0x2 , 0x0 , 0xe0 , 0xff , 0x3 , 0x0 , 0xc0 , 0xff , 0x3 , // Char 113 q
0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x40 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x40 , // Char 114 r
0x0 , 0xc0 , 0x39 , 0x0 , 0x0 , 0xe0 , 0x23 , 0x0 , 0x0 , 0x20 , 0x23 , 0x0 , 0x0 , 0x20 , 0x26 , 0x0 , 0x0 , 0x60 , 0x3e , 0x0 , 0x0 , 0x0 , 0x1c , // Char 115 s
0x0 , 0xf0 , 0x1f , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0x20 , 0x30 , 0x0 , 0x0 , 0x20 , 0x20 , // Char 116 t
0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x20 , 0x10 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x10 , // Char 117 u
0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x20 , // Char 118 v
0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xa0 , 0xf , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x60 , 0x6 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xa0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 119 w
0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x60 , 0x30 , 0x0 , 0x0 , 0xe0 , 0xd , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0x80 , 0xf , 0x0 , 0x0 , 0x60 , 0x3c , 0x0 , 0x0 , 0x20 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 120 x
0x0 , 0x20 , 0x0 , 0x3 , 0x0 , 0xe0 , 0x1 , 0x3 , 0x0 , 0xe0 , 0x7 , 0x1 , 0x0 , 0x0 , 0xde , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x60 , // Char 121 y
0x0 , 0x60 , 0x30 , 0x0 , 0x0 , 0x20 , 0x38 , 0x0 , 0x0 , 0x20 , 0x2e , 0x0 , 0x0 , 0x20 , 0x27 , 0x0 , 0x0 , 0xe0 , 0x21 , 0x0 , 0x0 , 0xe0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x20 , // Char 122 z
0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xfc , 0xfd , 0x1 , 0x0 , 0x2 , 0x0 , 0x2 , // Char 123 {
0x0 , 0xff , 0xff , 0x7 , 0x0 , 0xff , 0xff , 0x7 , // Char 124 |
0x0 , 0x2 , 0x0 , 0x2 , 0x0 , 0xfe , 0xf8 , 0x3 , 0x0 , 0xfc , 0xff , 0x1 , 0x0 , 0x0 , 0x2 , // Char 125 }
0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 126 ~
};
