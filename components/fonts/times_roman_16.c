#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Times_Roman_16[] PROGMEM = {
8 , // Width 
16 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 8, // Char 32   - Nodata
 0x0, 0x0, 0x4, 0x4, // Char 33 ! 
 0x0, 0x4, 0x7, 0x6, // Char 34 " 
 0x0, 0xb, 0xf, 0xa, // Char 35 # 
 0x0, 0x1a, 0xc, 0x8, // Char 36 $ 
 0x0, 0x26, 0x16, 0xd, // Char 37 % 
 0x0, 0x3c, 0x16, 0xd, // Char 38 & 
 0x0, 0x52, 0x1, 0x3, // Char 39 ' 
 0x0, 0x53, 0x6, 0x5, // Char 40 ( 
 0x0, 0x59, 0x7, 0x6, // Char 41 ) 
 0x0, 0x60, 0xb, 0x8, // Char 42 * 
 0x0, 0x6b, 0xf, 0xa, // Char 43 + 
 0x0, 0x7a, 0x4, 0x4, // Char 44 , 
 0x0, 0x7e, 0x7, 0x6, // Char 45 - 
 0x0, 0x85, 0x4, 0x4, // Char 46 . 
 0x0, 0x89, 0x9, 0x7, // Char 47 / 
 0x0, 0x92, 0xf, 0xa, // Char 48 0 
 0x0, 0xa1, 0x4, 0x4, // Char 49 1 
 0x0, 0xa5, 0xc, 0x8, // Char 50 2 
 0x0, 0xb1, 0xb, 0x8, // Char 51 3 
 0x0, 0xbc, 0xf, 0xa, // Char 52 4 
 0x0, 0xcb, 0xb, 0x8, // Char 53 5 
 0x0, 0xd6, 0xf, 0xa, // Char 54 6 
 0x0, 0xe5, 0xb, 0x8, // Char 55 7 
 0x0, 0xf0, 0xc, 0x8, // Char 56 8 
 0x0, 0xfc, 0xd, 0x9, // Char 57 9 
 0x1, 0x9, 0x4, 0x4, // Char 58 : 
 0x1, 0xd, 0x6, 0x5, // Char 59 ; 
 0x1, 0x13, 0xc, 0x8, // Char 60 < 
 0x1, 0x1f, 0x11, 0xb, // Char 61 = 
 0x1, 0x30, 0xb, 0x8, // Char 62 > 
 0x1, 0x3b, 0xb, 0x8, // Char 63 ? 
 0x1, 0x46, 0x15, 0xd, // Char 64 @ 
 0x1, 0x5b, 0x14, 0xc, // Char 65 A 
 0x1, 0x6f, 0x10, 0xa, // Char 66 B 
 0x1, 0x7f, 0x14, 0xc, // Char 67 C 
 0x1, 0x93, 0x13, 0xc, // Char 68 D 
 0x1, 0xa6, 0x10, 0xa, // Char 69 E 
 0x1, 0xb6, 0xf, 0xa, // Char 70 F 
 0x1, 0xc5, 0x15, 0xd, // Char 71 G 
 0x1, 0xda, 0x14, 0xc, // Char 72 H 
 0x1, 0xee, 0x6, 0x5, // Char 73 I 
 0x1, 0xf4, 0x9, 0x7, // Char 74 J 
 0x1, 0xfd, 0x14, 0xc, // Char 75 K 
 0x2, 0x11, 0x10, 0xa, // Char 76 L 
 0x2, 0x21, 0x18, 0xe, // Char 77 M 
 0x2, 0x39, 0x13, 0xc, // Char 78 N 
 0x2, 0x4c, 0x13, 0xc, // Char 79 O 
 0x2, 0x5f, 0xf, 0xa, // Char 80 P 
 0x2, 0x6e, 0x13, 0xc, // Char 81 Q 
 0x2, 0x81, 0x12, 0xb, // Char 82 R 
 0x2, 0x93, 0xe, 0x9, // Char 83 S 
 0x2, 0xa1, 0x13, 0xc, // Char 84 T 
 0x2, 0xb4, 0x13, 0xc, // Char 85 U 
 0x2, 0xc7, 0x13, 0xc, // Char 86 V 
 0x2, 0xda, 0x1b, 0x10, // Char 87 W 
 0x2, 0xf5, 0x14, 0xc, // Char 88 X 
 0x3, 0x9, 0x13, 0xc, // Char 89 Y 
 0x3, 0x1c, 0x12, 0xb, // Char 90 Z 
 0x3, 0x2e, 0x7, 0x6, // Char 91 [ 
 0x3, 0x35, 0x7, 0x6, // Char 92 Backslash 
 0x3, 0x3c, 0x4, 0x4, // Char 93 ] 
 0x3, 0x40, 0xb, 0x8, // Char 94 ^ 
 0x3, 0x4b, 0x10, 0xa, // Char 95 _ 
 0x3, 0x5b, 0x3, 0x4, // Char 96 ` 
 0x3, 0x5e, 0xc, 0x8, // Char 97 a 
 0x3, 0x6a, 0xc, 0x8, // Char 98 b 
 0x3, 0x76, 0xc, 0x8, // Char 99 c 
 0x3, 0x82, 0xe, 0x9, // Char 100 d 
 0x3, 0x90, 0xc, 0x8, // Char 101 e 
 0x3, 0x9c, 0x9, 0x7, // Char 102 f 
 0x3, 0xa5, 0xe, 0x9, // Char 103 g 
 0x3, 0xb3, 0xc, 0x8, // Char 104 h 
 0x3, 0xbf, 0x4, 0x4, // Char 105 i 
 0x3, 0xc3, 0x8, 0x6, // Char 106 j 
 0x3, 0xcb, 0xe, 0x9, // Char 107 k 
 0x3, 0xd9, 0x4, 0x4, // Char 108 l 
 0x3, 0xdd, 0x16, 0xd, // Char 109 m 
 0x3, 0xf3, 0xc, 0x8, // Char 110 n 
 0x3, 0xff, 0xf, 0xa, // Char 111 o 
 0x4, 0xe, 0xd, 0x9, // Char 112 p 
 0x4, 0x1b, 0xe, 0x9, // Char 113 q 
 0x4, 0x29, 0x7, 0x6, // Char 114 r 
 0x4, 0x30, 0xa, 0x7, // Char 115 s 
 0x4, 0x3a, 0x6, 0x5, // Char 116 t 
 0x4, 0x40, 0xc, 0x8, // Char 117 u 
 0x4, 0x4c, 0xb, 0x8, // Char 118 v 
 0x4, 0x57, 0x13, 0xc, // Char 119 w 
 0x4, 0x6a, 0xc, 0x8, // Char 120 x 
 0x4, 0x76, 0xb, 0x8, // Char 121 y 
 0x4, 0x81, 0xc, 0x8, // Char 122 z 
 0x4, 0x8d, 0x6, 0x5, // Char 123 { 
 0x4, 0x93, 0x2, 0x3, // Char 124 | 
 0x4, 0x95, 0x7, 0x6, // Char 125 } 
 0x4, 0x9c, 0xd, 0x9, // Char 126 ~ 

// Data Table:
0x3f , 0x3 , 0x1f , 0x2 , // Char 33 !
0x7 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x7 , // Char 34 "
0x48 , 0x0 , 0x48 , 0x3 , 0xfc , 0x1 , 0x4f , 0x0 , 0x48 , 0x2 , 0xfc , 0x1 , 0x4f , 0x0 , 0x48 , // Char 35 #
0xe , 0x3 , 0x19 , 0x2 , 0x39 , 0x2 , 0x31 , 0x2 , 0x61 , 0x2 , 0xc2 , 0x1 , // Char 36 $
0x1c , 0x0 , 0x26 , 0x0 , 0x21 , 0x2 , 0x11 , 0x1 , 0xc1 , 0x0 , 0x31 , 0x0 , 0xdc , 0x1 , 0xe7 , 0x3 , 0x31 , 0x2 , 0x10 , 0x2 , 0x90 , 0x1 , // Char 37 %
0xe0 , 0x1 , 0x20 , 0x3 , 0x16 , 0x2 , 0x3f , 0x2 , 0x71 , 0x2 , 0xe1 , 0x1 , 0xc6 , 0x1 , 0x68 , 0x3 , 0x18 , 0x2 , 0x8 , 0x2 , 0x0 , 0x1 , // Char 38 &
0x7 , // Char 39 '
0xf8 , 0x1 , 0xe , 0x6 , 0x0 , 0x8 , // Char 40 (
0x1 , 0x8 , 0x6 , 0x4 , 0xf8 , 0x3 , 0x60 , // Char 41 )
0x16 , 0x0 , 0x1c , 0x0 , 0x3f , 0x0 , 0x3f , 0x0 , 0x1c , 0x0 , 0x16 , // Char 42 *
0x40 , 0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0xfc , 0x3 , 0x40 , 0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0x40 , // Char 43 +
0x0 , 0x3 , 0x0 , 0x6 , // Char 44 ,
0x40 , 0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0x40 , // Char 45 -
0x0 , 0x3 , 0x0 , 0x3 , // Char 46 .
0x0 , 0x3 , 0xe0 , 0x1 , 0x3c , 0x0 , 0x7 , 0x0 , 0x1 , // Char 47 /
0x30 , 0x0 , 0xfe , 0x1 , 0x3 , 0x3 , 0x1 , 0x2 , 0x1 , 0x2 , 0x3 , 0x3 , 0xfe , 0x1 , 0x38 , // Char 48 0
0xff , 0x3 , 0xff , 0x3 , // Char 49 1
0x2 , 0x2 , 0x1 , 0x3 , 0x1 , 0x2 , 0x63 , 0x2 , 0x1f , 0x2 , 0xe , 0x2 , // Char 50 2
0x2 , 0x2 , 0x1 , 0x2 , 0x11 , 0x2 , 0x31 , 0x0 , 0x7f , 0x1 , 0xe0 , // Char 51 3
0x40 , 0x0 , 0x50 , 0x0 , 0x48 , 0x0 , 0x44 , 0x0 , 0x42 , 0x0 , 0xff , 0x3 , 0x40 , 0x0 , 0x40 , // Char 52 4
0xc , 0x2 , 0xf , 0x2 , 0x9 , 0x2 , 0x19 , 0x2 , 0x31 , 0x1 , 0xe1 , // Char 53 5
0x20 , 0x0 , 0xfc , 0x1 , 0xe , 0x3 , 0xb , 0x2 , 0x9 , 0x2 , 0x18 , 0x2 , 0xf0 , 0x1 , 0x40 , // Char 54 6
0x3 , 0x0 , 0x1 , 0x0 , 0x1 , 0x3 , 0xe1 , 0x0 , 0x1d , 0x0 , 0x3 , // Char 55 7
0xce , 0x1 , 0x3d , 0x2 , 0x31 , 0x2 , 0x31 , 0x2 , 0x6f , 0x2 , 0xc6 , 0x1 , // Char 56 8
0x8 , 0x0 , 0x3e , 0x0 , 0x61 , 0x4 , 0x41 , 0x2 , 0x41 , 0x3 , 0xe7 , 0x1 , 0xfe , // Char 57 9
0x8 , 0x2 , 0x18 , 0x3 , // Char 58 :
0x8 , 0x2 , 0x18 , 0x3 , 0x0 , 0x2 , // Char 59 ;
0x30 , 0x0 , 0x68 , 0x0 , 0x68 , 0x0 , 0xc4 , 0x0 , 0x80 , 0x0 , 0x82 , 0x1 , // Char 60 <
0x90 , 0x0 , 0x90 , 0x0 , 0x90 , 0x0 , 0x90 , 0x0 , 0x90 , 0x0 , 0x90 , 0x0 , 0x90 , 0x0 , 0x90 , 0x0 , 0x90 , // Char 61 =
0x6 , 0x1 , 0x4 , 0x1 , 0x8c , 0x0 , 0x58 , 0x0 , 0x50 , 0x0 , 0x30 , // Char 62 >
0x6 , 0x0 , 0x1 , 0x0 , 0x1 , 0x3 , 0x31 , 0x2 , 0x1f , 0x0 , 0x6 , // Char 63 ?
0x78 , 0x0 , 0xce , 0x1 , 0x2 , 0x1 , 0x71 , 0x2 , 0xd9 , 0x2 , 0x85 , 0x2 , 0x45 , 0x2 , 0xf9 , 0x2 , 0x8a , 0x2 , 0x46 , 0x0 , 0x3c , // Char 64 @
0x0 , 0x3 , 0xc0 , 0x3 , 0x70 , 0x0 , 0x4c , 0x0 , 0x47 , 0x0 , 0x5e , 0x0 , 0x78 , 0x0 , 0xe0 , 0x3 , 0x80 , 0x3 , 0x0 , 0x2 , // Char 65 A
0x1 , 0x2 , 0xff , 0x3 , 0xff , 0x3 , 0x11 , 0x2 , 0x11 , 0x2 , 0x11 , 0x2 , 0xff , 0x3 , 0xee , 0x1 , // Char 66 B
0x30 , 0x0 , 0xfc , 0x0 , 0xee , 0x1 , 0x3 , 0x3 , 0x1 , 0x2 , 0x1 , 0x2 , 0x1 , 0x2 , 0x1 , 0x2 , 0x3 , 0x0 , 0x7 , 0x1 , // Char 67 C
0x1 , 0x2 , 0xff , 0x3 , 0x1 , 0x2 , 0x1 , 0x2 , 0x1 , 0x2 , 0x1 , 0x2 , 0x3 , 0x2 , 0x6 , 0x1 , 0xfe , 0x0 , 0x78 , // Char 68 D
0xff , 0x3 , 0xff , 0x3 , 0x11 , 0x2 , 0x11 , 0x2 , 0x11 , 0x2 , 0x11 , 0x2 , 0x39 , 0x2 , 0x3 , 0x3 , // Char 69 E
0xff , 0x3 , 0xff , 0x3 , 0x11 , 0x2 , 0x11 , 0x0 , 0x11 , 0x0 , 0x11 , 0x0 , 0x39 , 0x0 , 0x3 , // Char 70 F
0x20 , 0x0 , 0xfc , 0x0 , 0xfe , 0x1 , 0x3 , 0x3 , 0x1 , 0x2 , 0x1 , 0x2 , 0x1 , 0x2 , 0x1 , 0x2 , 0x33 , 0x3 , 0xf7 , 0x1 , 0x10 , // Char 71 G
0x1 , 0x2 , 0xff , 0x3 , 0x11 , 0x2 , 0x10 , 0x0 , 0x10 , 0x0 , 0x10 , 0x0 , 0x10 , 0x0 , 0xff , 0x3 , 0xff , 0x3 , 0x1 , 0x2 , // Char 72 H
0x1 , 0x2 , 0xff , 0x3 , 0xff , 0x3 , // Char 73 I
0x0 , 0x1 , 0x0 , 0x2 , 0x1 , 0x2 , 0xff , 0x1 , 0x3 , // Char 74 J
0x1 , 0x2 , 0xff , 0x3 , 0xff , 0x3 , 0x31 , 0x2 , 0x78 , 0x0 , 0xe4 , 0x0 , 0xc3 , 0x3 , 0x81 , 0x3 , 0x1 , 0x3 , 0x0 , 0x2 , // Char 75 K
0x3 , 0x3 , 0xff , 0x3 , 0x1 , 0x2 , 0x0 , 0x2 , 0x0 , 0x2 , 0x0 , 0x2 , 0x0 , 0x2 , 0x0 , 0x3 , // Char 76 L
0x1 , 0x2 , 0xff , 0x3 , 0xf , 0x0 , 0x3c , 0x0 , 0xf0 , 0x0 , 0xc0 , 0x3 , 0x80 , 0x0 , 0x30 , 0x0 , 0xc , 0x0 , 0x7 , 0x2 , 0xff , 0x3 , 0x3 , 0x3 , // Char 77 M
0x1 , 0x2 , 0xff , 0x3 , 0x6 , 0x0 , 0xc , 0x0 , 0x18 , 0x0 , 0x70 , 0x0 , 0xe0 , 0x0 , 0x81 , 0x1 , 0xff , 0x3 , 0x1 , // Char 78 N
0xfc , 0x0 , 0xfe , 0x1 , 0x3 , 0x3 , 0x1 , 0x2 , 0x1 , 0x2 , 0x1 , 0x2 , 0x1 , 0x2 , 0x2 , 0x1 , 0xfe , 0x1 , 0x78 , // Char 79 O
0x3 , 0x3 , 0xff , 0x3 , 0x21 , 0x2 , 0x21 , 0x0 , 0x21 , 0x0 , 0x33 , 0x0 , 0x1e , 0x0 , 0xc , // Char 80 P
0xfc , 0x0 , 0xfe , 0x1 , 0x3 , 0x3 , 0x1 , 0x2 , 0x1 , 0x4 , 0x1 , 0xe , 0x1 , 0xa , 0x2 , 0x13 , 0xfe , 0x11 , 0x78 , // Char 81 Q
0x1 , 0x2 , 0xff , 0x3 , 0x21 , 0x2 , 0x21 , 0x0 , 0x61 , 0x0 , 0xd1 , 0x0 , 0x9e , 0x3 , 0xc , 0x3 , 0x0 , 0x2 , // Char 82 R
0xe , 0x3 , 0x1f , 0x2 , 0x19 , 0x2 , 0x31 , 0x2 , 0x61 , 0x2 , 0xe3 , 0x3 , 0xc4 , 0x1 , // Char 83 S
0x3 , 0x0 , 0x1 , 0x0 , 0x1 , 0x0 , 0x1 , 0x2 , 0xff , 0x3 , 0xff , 0x3 , 0x1 , 0x2 , 0x1 , 0x0 , 0x1 , 0x0 , 0x2 , // Char 84 T
0x1 , 0x0 , 0xff , 0x1 , 0x81 , 0x3 , 0x0 , 0x2 , 0x0 , 0x2 , 0x0 , 0x2 , 0x0 , 0x2 , 0x1 , 0x1 , 0xff , 0x0 , 0x1 , // Char 85 U
0x1 , 0x0 , 0x7 , 0x0 , 0x1f , 0x0 , 0x78 , 0x0 , 0xe0 , 0x1 , 0x80 , 0x1 , 0x60 , 0x0 , 0x1d , 0x0 , 0x3 , 0x0 , 0x1 , // Char 86 V
0x1 , 0x0 , 0x3 , 0x0 , 0xf , 0x0 , 0x7c , 0x0 , 0xe0 , 0x1 , 0xc1 , 0x1 , 0x73 , 0x0 , 0xf , 0x0 , 0x3d , 0x0 , 0xf0 , 0x1 , 0xc0 , 0x3 , 0x60 , 0x0 , 0xd , 0x0 , 0x3 , // Char 87 W
0x1 , 0x2 , 0x3 , 0x3 , 0x87 , 0x0 , 0x5e , 0x0 , 0x38 , 0x0 , 0x78 , 0x0 , 0xc4 , 0x3 , 0x83 , 0x3 , 0x1 , 0x3 , 0x1 , 0x2 , // Char 88 X
0x1 , 0x0 , 0x3 , 0x0 , 0xf , 0x0 , 0x1c , 0x2 , 0xf8 , 0x3 , 0xf0 , 0x3 , 0x8 , 0x2 , 0x7 , 0x0 , 0x3 , 0x0 , 0x1 , // Char 89 Y
0x0 , 0x2 , 0x1 , 0x3 , 0x81 , 0x3 , 0xe1 , 0x2 , 0x71 , 0x2 , 0x19 , 0x2 , 0xf , 0x2 , 0x7 , 0x2 , 0x1 , 0x2 , // Char 90 Z
0xff , 0x1f , 0xff , 0x1f , 0x1 , 0x10 , 0x1 , // Char 91 [
0x7 , 0x0 , 0x3 , 0x0 , 0x0 , 0x0 , 0x7 , // Char 92 Backslash
0x1 , 0x10 , 0xff , 0x1f , // Char 93 ]
0x30 , 0x0 , 0xc , 0x0 , 0x3 , 0x0 , 0x6 , 0x0 , 0x18 , 0x0 , 0x20 , // Char 94 ^
0x0 , 0x8 , 0x0 , 0x8 , 0x0 , 0x8 , 0x0 , 0x8 , 0x0 , 0x8 , 0x0 , 0x8 , 0x0 , 0x8 , 0x0 , 0x8 , // Char 95 _
0x1 , 0x0 , 0x2 , // Char 96 `
0x90 , 0x3 , 0x48 , 0x2 , 0x8 , 0x2 , 0xf8 , 0x1 , 0xf0 , 0x3 , 0x0 , 0x2 , // Char 97 a
0xff , 0x1 , 0xff , 0x3 , 0x8 , 0x2 , 0x8 , 0x2 , 0x18 , 0x2 , 0xf0 , 0x1 , // Char 98 b
0xc0 , 0x0 , 0xf0 , 0x1 , 0x8 , 0x3 , 0x8 , 0x2 , 0x8 , 0x2 , 0x18 , 0x1 , // Char 99 c
0xc0 , 0x0 , 0xf0 , 0x1 , 0x8 , 0x3 , 0x8 , 0x2 , 0x8 , 0x2 , 0xff , 0x3 , 0xff , 0x3 , // Char 100 d
0xc0 , 0x0 , 0xf0 , 0x1 , 0x28 , 0x3 , 0x28 , 0x2 , 0x38 , 0x2 , 0x30 , 0x1 , // Char 101 e
0x8 , 0x2 , 0xfe , 0x3 , 0x9 , 0x2 , 0x9 , 0x0 , 0x1 , // Char 102 f
0x0 , 0x8 , 0x70 , 0x1f , 0xf8 , 0x13 , 0x88 , 0x12 , 0x88 , 0x12 , 0x78 , 0x12 , 0x28 , 0xa , // Char 103 g
0xff , 0x3 , 0xff , 0x3 , 0x8 , 0x0 , 0x8 , 0x0 , 0xf8 , 0x3 , 0xf0 , 0x3 , // Char 104 h
0xf1 , 0x3 , 0xf9 , 0x3 , // Char 105 i
0x0 , 0x10 , 0x0 , 0x10 , 0x10 , 0x10 , 0xf9 , 0xf , // Char 106 j
0xff , 0x3 , 0xff , 0x3 , 0x60 , 0x0 , 0xd0 , 0x1 , 0x8 , 0x3 , 0x8 , 0x2 , 0x0 , 0x2 , // Char 107 k
0x3 , 0x2 , 0xff , 0x3 , // Char 108 l
0xf8 , 0x3 , 0xf8 , 0x3 , 0x0 , 0x0 , 0x8 , 0x0 , 0x18 , 0x2 , 0xf0 , 0x3 , 0x0 , 0x2 , 0x8 , 0x0 , 0x8 , 0x2 , 0xf8 , 0x3 , 0x0 , 0x2 , // Char 109 m
0xf8 , 0x3 , 0xf8 , 0x3 , 0x8 , 0x0 , 0x8 , 0x0 , 0xf8 , 0x3 , 0xf0 , 0x3 , // Char 110 n
0x40 , 0x0 , 0xf0 , 0x1 , 0x8 , 0x3 , 0x8 , 0x2 , 0x8 , 0x2 , 0x18 , 0x2 , 0xf0 , 0x1 , 0x40 , // Char 111 o
0xf8 , 0x1f , 0xf8 , 0x1f , 0x8 , 0x2 , 0x8 , 0x2 , 0x18 , 0x2 , 0xf0 , 0x1 , 0x60 , // Char 112 p
0xc0 , 0x0 , 0xf0 , 0x3 , 0x8 , 0x3 , 0x8 , 0x2 , 0x8 , 0x12 , 0xf8 , 0x1f , 0xf8 , 0x1f , // Char 113 q
0xf8 , 0x3 , 0xf8 , 0x3 , 0x8 , 0x0 , 0x8 , // Char 114 r
0x38 , 0x3 , 0x68 , 0x2 , 0xc8 , 0x2 , 0xd8 , 0x3 , 0x0 , 0x1 , // Char 115 s
0xfc , 0x3 , 0xfc , 0x3 , 0x8 , 0x2 , // Char 116 t
0xf8 , 0x1 , 0xf8 , 0x3 , 0x0 , 0x2 , 0x0 , 0x2 , 0xf8 , 0x3 , 0xf8 , 0x3 , // Char 117 u
0x18 , 0x0 , 0x78 , 0x0 , 0xc0 , 0x1 , 0x80 , 0x3 , 0x60 , 0x0 , 0x18 , // Char 118 v
0x18 , 0x0 , 0xf8 , 0x0 , 0xc0 , 0x3 , 0x80 , 0x1 , 0x78 , 0x0 , 0x78 , 0x0 , 0xc0 , 0x3 , 0x80 , 0x1 , 0x78 , 0x0 , 0x8 , // Char 119 w
0x8 , 0x2 , 0x98 , 0x1 , 0x70 , 0x0 , 0xf0 , 0x0 , 0x88 , 0x3 , 0x0 , 0x2 , // Char 120 x
0x18 , 0x18 , 0x78 , 0x18 , 0xe0 , 0xd , 0x80 , 0x3 , 0xe0 , 0x0 , 0x18 , // Char 121 y
0x8 , 0x3 , 0x88 , 0x3 , 0xe8 , 0x2 , 0x38 , 0x2 , 0x18 , 0x2 , 0x0 , 0x3 , // Char 122 z
0x40 , 0x0 , 0xbe , 0xf , 0x1 , 0x10 , // Char 123 {
0xff , 0x3f , // Char 124 |
0x1 , 0x10 , 0x1f , 0x1f , 0xfe , 0xf , 0x40 , // Char 125 }
0x60 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x60 , 0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0x20 , // Char 126 ~
};
