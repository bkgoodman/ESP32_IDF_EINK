#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Bookman_Demi_12[] PROGMEM = {
8 , // Width 
12 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 8, // Char 32   - Nodata
 0x0, 0x0, 0x3, 0x4, // Char 33 ! 
 0x0, 0x3, 0x7, 0x6, // Char 34 " 
 0x0, 0xa, 0xb, 0x8, // Char 35 # 
 0x0, 0x15, 0xb, 0x8, // Char 36 $ 
 0x0, 0x20, 0x15, 0xd, // Char 37 % 
 0x0, 0x35, 0x11, 0xb, // Char 38 & 
 0x0, 0x46, 0x1, 0x3, // Char 39 ' 
 0x0, 0x47, 0x4, 0x4, // Char 40 ( 
 0x0, 0x4b, 0x5, 0x5, // Char 41 ) 
 0x0, 0x50, 0x7, 0x6, // Char 42 * 
 0x0, 0x57, 0xb, 0x8, // Char 43 + 
 0x0, 0x62, 0x4, 0x4, // Char 44 , 
 0x0, 0x66, 0x5, 0x5, // Char 45 - 
 0x0, 0x6b, 0x3, 0x4, // Char 46 . 
 0x0, 0x6e, 0x9, 0x7, // Char 47 / 
 0x0, 0x77, 0xf, 0xa, // Char 48 0 
 0x0, 0x86, 0x9, 0x7, // Char 49 1 
 0x0, 0x8f, 0xb, 0x8, // Char 50 2 
 0x0, 0x9a, 0xd, 0x9, // Char 51 3 
 0x0, 0xa7, 0xf, 0xa, // Char 52 4 
 0x0, 0xb6, 0xb, 0x8, // Char 53 5 
 0x0, 0xc1, 0xf, 0xa, // Char 54 6 
 0x0, 0xd0, 0xd, 0x9, // Char 55 7 
 0x0, 0xdd, 0xf, 0xa, // Char 56 8 
 0x0, 0xec, 0xf, 0xa, // Char 57 9 
 0x0, 0xfb, 0x3, 0x4, // Char 58 : 
 0x0, 0xfe, 0x4, 0x4, // Char 59 ; 
 0x1, 0x2, 0xb, 0x8, // Char 60 < 
 0x1, 0xd, 0xb, 0x8, // Char 61 = 
 0x1, 0x18, 0xd, 0x9, // Char 62 > 
 0x1, 0x25, 0xb, 0x8, // Char 63 ? 
 0x1, 0x30, 0xf, 0xa, // Char 64 @ 
 0x1, 0x3f, 0x11, 0xb, // Char 65 A 
 0x1, 0x50, 0xf, 0xa, // Char 66 B 
 0x1, 0x5f, 0xf, 0xa, // Char 67 C 
 0x1, 0x6e, 0x11, 0xb, // Char 68 D 
 0x1, 0x7f, 0x11, 0xb, // Char 69 E 
 0x1, 0x90, 0xf, 0xa, // Char 70 F 
 0x1, 0x9f, 0x11, 0xb, // Char 71 G 
 0x1, 0xb0, 0x13, 0xc, // Char 72 H 
 0x1, 0xc3, 0x9, 0x7, // Char 73 I 
 0x1, 0xcc, 0xf, 0xa, // Char 74 J 
 0x1, 0xdb, 0x13, 0xc, // Char 75 K 
 0x1, 0xee, 0xf, 0xa, // Char 76 L 
 0x1, 0xfd, 0x15, 0xd, // Char 77 M 
 0x2, 0x12, 0x11, 0xb, // Char 78 N 
 0x2, 0x23, 0x11, 0xb, // Char 79 O 
 0x2, 0x34, 0xf, 0xa, // Char 80 P 
 0x2, 0x43, 0x12, 0xb, // Char 81 Q 
 0x2, 0x55, 0x11, 0xb, // Char 82 R 
 0x2, 0x66, 0xf, 0xa, // Char 83 S 
 0x2, 0x75, 0xf, 0xa, // Char 84 T 
 0x2, 0x84, 0x11, 0xb, // Char 85 U 
 0x2, 0x95, 0x11, 0xb, // Char 86 V 
 0x2, 0xa6, 0x17, 0xe, // Char 87 W 
 0x2, 0xbd, 0x11, 0xb, // Char 88 X 
 0x2, 0xce, 0x11, 0xb, // Char 89 Y 
 0x2, 0xdf, 0xd, 0x9, // Char 90 Z 
 0x2, 0xec, 0x4, 0x4, // Char 91 [ 
 0x2, 0xf0, 0x7, 0x6, // Char 92 Backslash 
 0x2, 0xf7, 0x6, 0x5, // Char 93 ] 
 0x2, 0xfd, 0x9, 0x7, // Char 94 ^ 
 0x3, 0x6, 0xc, 0x8, // Char 95 _ 
 0x3, 0x12, 0x5, 0x5, // Char 96 ` 
 0x3, 0x17, 0xd, 0x9, // Char 97 a 
 0x3, 0x24, 0xd, 0x9, // Char 98 b 
 0x3, 0x31, 0xb, 0x8, // Char 99 c 
 0x3, 0x3c, 0xf, 0xa, // Char 100 d 
 0x3, 0x4b, 0xb, 0x8, // Char 101 e 
 0x3, 0x56, 0x9, 0x7, // Char 102 f 
 0x3, 0x5f, 0xe, 0x9, // Char 103 g 
 0x3, 0x6d, 0xf, 0xa, // Char 104 h 
 0x3, 0x7c, 0x7, 0x6, // Char 105 i 
 0x3, 0x83, 0x8, 0x6, // Char 106 j 
 0x3, 0x8b, 0xf, 0xa, // Char 107 k 
 0x3, 0x9a, 0x7, 0x6, // Char 108 l 
 0x3, 0xa1, 0x17, 0xe, // Char 109 m 
 0x3, 0xb8, 0xf, 0xa, // Char 110 n 
 0x3, 0xc7, 0xd, 0x9, // Char 111 o 
 0x3, 0xd4, 0xd, 0x9, // Char 112 p 
 0x3, 0xe1, 0x10, 0xa, // Char 113 q 
 0x3, 0xf1, 0x9, 0x7, // Char 114 r 
 0x3, 0xfa, 0xb, 0x8, // Char 115 s 
 0x4, 0x5, 0x9, 0x7, // Char 116 t 
 0x4, 0xe, 0xf, 0xa, // Char 117 u 
 0x4, 0x1d, 0xd, 0x9, // Char 118 v 
 0x4, 0x2a, 0x13, 0xc, // Char 119 w 
 0x4, 0x3d, 0xd, 0x9, // Char 120 x 
 0x4, 0x4a, 0xd, 0x9, // Char 121 y 
 0x4, 0x57, 0xb, 0x8, // Char 122 z 
 0x4, 0x62, 0x4, 0x4, // Char 123 { 
 0x4, 0x66, 0x2, 0x3, // Char 124 | 
 0x4, 0x68, 0x5, 0x5, // Char 125 } 
 0x4, 0x6d, 0x9, 0x7, // Char 126 ~ 

// Data Table:
0xdf , 0x0 , 0xff , // Char 33 !
0x7 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0xf , // Char 34 "
0x14 , 0x0 , 0xfc , 0x0 , 0x1f , 0x0 , 0xfc , 0x0 , 0x1f , 0x0 , 0x14 , // Char 35 #
0x6e , 0x0 , 0x6f , 0x0 , 0xcd , 0x0 , 0xd9 , 0x1 , 0x5b , 0x0 , 0x7a , // Char 36 $
0xe , 0x0 , 0x1f , 0x0 , 0x11 , 0x0 , 0xdf , 0x0 , 0x6e , 0x0 , 0x18 , 0x0 , 0x24 , 0x0 , 0xfb , 0x0 , 0x88 , 0x0 , 0xf8 , 0x0 , 0x70 , // Char 37 %
0x70 , 0x0 , 0xfa , 0x0 , 0xdf , 0x0 , 0x9f , 0x0 , 0xff , 0x0 , 0x72 , 0x0 , 0xfc , 0x0 , 0xdc , 0x0 , 0x84 , // Char 38 &
0x7 , // Char 39 '
0xff , 0x1 , 0x81 , 0x1 , // Char 40 (
0x0 , 0x1 , 0xff , 0x1 , 0xff , // Char 41 )
0xe , 0x0 , 0xf , 0x0 , 0xe , 0x0 , 0xa , // Char 42 *
0x10 , 0x0 , 0x10 , 0x0 , 0x7e , 0x0 , 0x30 , 0x0 , 0x10 , 0x0 , 0x10 , // Char 43 +
0xc0 , 0x1 , 0xc0 , 0x1 , // Char 44 ,
0x10 , 0x0 , 0x10 , 0x0 , 0x10 , // Char 45 -
0xc0 , 0x0 , 0xc0 , // Char 46 .
0x80 , 0x1 , 0xe0 , 0x0 , 0x3c , 0x0 , 0xf , 0x0 , 0x3 , // Char 47 /
0x18 , 0x0 , 0x7e , 0x0 , 0xff , 0x0 , 0x81 , 0x0 , 0x81 , 0x0 , 0xff , 0x0 , 0x7e , 0x0 , 0x18 , // Char 48 0
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x80 , 0x0 , 0x80 , // Char 49 1
0xc6 , 0x0 , 0xe7 , 0x0 , 0xf1 , 0x0 , 0xdb , 0x0 , 0xdf , 0x0 , 0xee , // Char 50 2
0xe6 , 0x0 , 0xc7 , 0x0 , 0x89 , 0x0 , 0x89 , 0x0 , 0xff , 0x0 , 0x76 , 0x0 , 0x20 , // Char 51 3
0x20 , 0x0 , 0x30 , 0x0 , 0x2c , 0x0 , 0xa6 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xa0 , 0x0 , 0x20 , // Char 52 4
0xef , 0x0 , 0xcf , 0x0 , 0x87 , 0x0 , 0xcf , 0x0 , 0xff , 0x0 , 0x79 , // Char 53 5
0x18 , 0x0 , 0x7e , 0x0 , 0xff , 0x0 , 0x89 , 0x0 , 0x89 , 0x0 , 0xfb , 0x0 , 0x76 , 0x0 , 0x20 , // Char 54 6
0x3 , 0x0 , 0xc3 , 0x0 , 0xf1 , 0x0 , 0xf9 , 0x0 , 0xf , 0x0 , 0x7 , 0x0 , 0x1 , // Char 55 7
0x20 , 0x0 , 0x7e , 0x0 , 0xdf , 0x0 , 0x99 , 0x0 , 0x99 , 0x0 , 0xff , 0x0 , 0x76 , 0x0 , 0x20 , // Char 56 8
0x4 , 0x0 , 0xde , 0x0 , 0xdf , 0x0 , 0x91 , 0x0 , 0x91 , 0x0 , 0xff , 0x0 , 0x7e , 0x0 , 0x18 , // Char 57 9
0xcc , 0x0 , 0xcc , // Char 58 :
0xcc , 0x1 , 0xcc , 0x1 , // Char 59 ;
0x18 , 0x0 , 0x3c , 0x0 , 0x3c , 0x0 , 0x26 , 0x0 , 0x66 , 0x0 , 0x42 , // Char 60 <
0x14 , 0x0 , 0x14 , 0x0 , 0x14 , 0x0 , 0x14 , 0x0 , 0x14 , 0x0 , 0x14 , // Char 61 =
0x42 , 0x0 , 0x62 , 0x0 , 0x66 , 0x0 , 0x34 , 0x0 , 0x3c , 0x0 , 0x18 , 0x0 , 0x18 , // Char 62 >
0x6 , 0x0 , 0x7 , 0x0 , 0xc1 , 0x0 , 0xd9 , 0x0 , 0xf , 0x0 , 0xe , // Char 63 ?
0x3c , 0x0 , 0x42 , 0x0 , 0xbd , 0x0 , 0xa5 , 0x0 , 0xbd , 0x0 , 0xbd , 0x0 , 0x62 , 0x0 , 0x5c , // Char 64 @
0xc0 , 0x0 , 0xe0 , 0x0 , 0xbc , 0x0 , 0x17 , 0x0 , 0x17 , 0x0 , 0xbf , 0x0 , 0xf8 , 0x0 , 0xe0 , 0x0 , 0x80 , // Char 65 A
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xdb , 0x0 , 0x89 , 0x0 , 0xcb , 0x0 , 0xff , 0x0 , 0x76 , // Char 66 B
0x18 , 0x0 , 0x7e , 0x0 , 0x7f , 0x0 , 0xc3 , 0x0 , 0x81 , 0x0 , 0x81 , 0x0 , 0xc3 , 0x0 , 0x67 , // Char 67 C
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xc3 , 0x0 , 0x81 , 0x0 , 0xc1 , 0x0 , 0xe7 , 0x0 , 0x7e , 0x0 , 0x3c , // Char 68 D
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xdb , 0x0 , 0x99 , 0x0 , 0xbd , 0x0 , 0xc3 , 0x0 , 0xe6 , 0x0 , 0x20 , // Char 69 E
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xdb , 0x0 , 0x99 , 0x0 , 0x3d , 0x0 , 0x3 , 0x0 , 0x6 , // Char 70 F
0x18 , 0x0 , 0x7e , 0x0 , 0xff , 0x0 , 0xc3 , 0x0 , 0x81 , 0x0 , 0x91 , 0x0 , 0xf3 , 0x0 , 0xf7 , 0x0 , 0x30 , // Char 71 G
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xdb , 0x0 , 0x89 , 0x0 , 0x89 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x81 , // Char 72 H
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x81 , // Char 73 I
0x60 , 0x0 , 0xe0 , 0x0 , 0x80 , 0x0 , 0x81 , 0x0 , 0xff , 0x0 , 0x7f , 0x0 , 0x3 , 0x0 , 0x1 , // Char 74 J
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xdb , 0x0 , 0x1c , 0x0 , 0xbf , 0x0 , 0xf3 , 0x0 , 0xe3 , 0x0 , 0xc1 , 0x0 , 0x80 , // Char 75 K
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xc3 , 0x0 , 0x81 , 0x0 , 0xc0 , 0x0 , 0xc0 , 0x0 , 0x20 , // Char 76 L
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x9f , 0x0 , 0xfe , 0x0 , 0xf0 , 0x0 , 0x3c , 0x0 , 0x8f , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x81 , // Char 77 M
0x81 , 0x0 , 0xff , 0x0 , 0xc7 , 0x0 , 0x8f , 0x0 , 0x1e , 0x0 , 0x79 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x1 , // Char 78 N
0x18 , 0x0 , 0x7e , 0x0 , 0x7e , 0x0 , 0xc3 , 0x0 , 0x81 , 0x0 , 0x81 , 0x0 , 0xc3 , 0x0 , 0x7e , 0x0 , 0x3c , // Char 79 O
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xf3 , 0x0 , 0x11 , 0x0 , 0x1f , 0x0 , 0x1f , 0x0 , 0xe , // Char 80 P
0x18 , 0x0 , 0x7e , 0x1 , 0x7e , 0x3 , 0xc3 , 0x2 , 0xe1 , 0x2 , 0xe1 , 0x2 , 0xe3 , 0x2 , 0xfe , 0x3 , 0xfc , 0x1 , // Char 81 Q
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xdb , 0x0 , 0x19 , 0x0 , 0x39 , 0x0 , 0xff , 0x0 , 0xef , 0x0 , 0x80 , // Char 82 R
0x24 , 0x0 , 0xee , 0x0 , 0xdf , 0x0 , 0x99 , 0x0 , 0x99 , 0x0 , 0xfb , 0x0 , 0x7f , 0x0 , 0x30 , // Char 83 S
0x6 , 0x0 , 0x3 , 0x0 , 0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x81 , 0x0 , 0x3 , 0x0 , 0x7 , // Char 84 T
0x1 , 0x0 , 0x7f , 0x0 , 0xff , 0x0 , 0xc3 , 0x0 , 0x80 , 0x0 , 0xc1 , 0x0 , 0xff , 0x0 , 0x3f , 0x0 , 0x1 , // Char 85 U
0x1 , 0x0 , 0x7 , 0x0 , 0x3f , 0x0 , 0xfd , 0x0 , 0xe0 , 0x0 , 0x71 , 0x0 , 0x1f , 0x0 , 0x3 , 0x0 , 0x1 , // Char 86 V
0x3 , 0x0 , 0xf , 0x0 , 0x7f , 0x0 , 0xf1 , 0x0 , 0x73 , 0x0 , 0x1f , 0x0 , 0xff , 0x0 , 0xf1 , 0x0 , 0x79 , 0x0 , 0xf , 0x0 , 0x3 , 0x0 , 0x1 , // Char 87 W
0x81 , 0x0 , 0xc3 , 0x0 , 0xe7 , 0x0 , 0xbf , 0x0 , 0x3d , 0x0 , 0xfd , 0x0 , 0xe7 , 0x0 , 0xc3 , 0x0 , 0x81 , // Char 88 X
0x1 , 0x0 , 0x3 , 0x0 , 0x8f , 0x0 , 0xff , 0x0 , 0xf8 , 0x0 , 0x8d , 0x0 , 0x7 , 0x0 , 0x1 , 0x0 , 0x1 , // Char 89 Y
0x84 , 0x0 , 0xe3 , 0x0 , 0xf1 , 0x0 , 0xb9 , 0x0 , 0x9f , 0x0 , 0xc7 , 0x0 , 0xe3 , // Char 90 Z
0xff , 0x1 , 0xff , 0x1 , // Char 91 [
0x7 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0xf , // Char 92 Backslash
0x0 , 0x1 , 0xff , 0x1 , 0xff , 0x1 , // Char 93 ]
0xc , 0x0 , 0x7 , 0x0 , 0x3 , 0x0 , 0x7 , 0x0 , 0xc , // Char 94 ^
0x0 , 0x2 , 0x0 , 0x2 , 0x0 , 0x2 , 0x0 , 0x2 , 0x0 , 0x2 , 0x0 , 0x2 , // Char 95 _
0x1 , 0x0 , 0x1 , 0x0 , 0x1 , // Char 96 `
0x40 , 0x0 , 0xfc , 0x0 , 0xfc , 0x0 , 0xd4 , 0x0 , 0xfc , 0x0 , 0xf8 , 0x0 , 0x80 , // Char 97 a
0x3 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x84 , 0x0 , 0xcc , 0x0 , 0xfc , 0x0 , 0x30 , // Char 98 b
0x30 , 0x0 , 0x78 , 0x0 , 0xfc , 0x0 , 0x84 , 0x0 , 0x8c , 0x0 , 0xdc , // Char 99 c
0x30 , 0x0 , 0x78 , 0x0 , 0xfc , 0x0 , 0x84 , 0x0 , 0xcf , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x80 , // Char 100 d
0x30 , 0x0 , 0x78 , 0x0 , 0xfc , 0x0 , 0x94 , 0x0 , 0x9c , 0x0 , 0x58 , // Char 101 e
0x84 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x84 , 0x0 , 0x1 , // Char 102 f
0xe0 , 0x1 , 0xfc , 0x3 , 0xfc , 0x2 , 0xd4 , 0x2 , 0xdc , 0x2 , 0xcf , 0x3 , 0x81 , 0x1 , // Char 103 g
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x8c , 0x0 , 0x84 , 0x0 , 0xfc , 0x0 , 0xf8 , 0x0 , 0x80 , // Char 104 h
0x84 , 0x0 , 0xfd , 0x0 , 0xfd , 0x0 , 0x80 , // Char 105 i
0x0 , 0x3 , 0x0 , 0x2 , 0xfd , 0x3 , 0xfd , 0x1 , // Char 106 j
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0xb0 , 0x0 , 0xfc , 0x0 , 0xec , 0x0 , 0xc4 , 0x0 , 0x80 , // Char 107 k
0x81 , 0x0 , 0xff , 0x0 , 0xff , 0x0 , 0x80 , // Char 108 l
0x84 , 0x0 , 0xfc , 0x0 , 0xfc , 0x0 , 0x8c , 0x0 , 0x84 , 0x0 , 0xfc , 0x0 , 0xfc , 0x0 , 0x8c , 0x0 , 0x84 , 0x0 , 0xfc , 0x0 , 0xf8 , 0x0 , 0x80 , // Char 109 m
0x84 , 0x0 , 0xfc , 0x0 , 0xfc , 0x0 , 0x8c , 0x0 , 0x84 , 0x0 , 0xfc , 0x0 , 0xf8 , 0x0 , 0x80 , // Char 110 n
0x30 , 0x0 , 0x78 , 0x0 , 0xfc , 0x0 , 0x84 , 0x0 , 0xcc , 0x0 , 0xfc , 0x0 , 0x78 , // Char 111 o
0x4 , 0x2 , 0xfc , 0x3 , 0xfc , 0x3 , 0x84 , 0x2 , 0x84 , 0x0 , 0xfc , 0x0 , 0x78 , // Char 112 p
0x30 , 0x0 , 0x78 , 0x0 , 0xfc , 0x0 , 0x84 , 0x0 , 0xcc , 0x2 , 0xfc , 0x3 , 0xfc , 0x3 , 0x0 , 0x2 , // Char 113 q
0x84 , 0x0 , 0xfc , 0x0 , 0xfc , 0x0 , 0x8c , 0x0 , 0xc , // Char 114 r
0x58 , 0x0 , 0xfc , 0x0 , 0xb4 , 0x0 , 0xb4 , 0x0 , 0xfc , 0x0 , 0x60 , // Char 115 s
0x4 , 0x0 , 0x7e , 0x0 , 0xff , 0x0 , 0xc4 , 0x0 , 0xc4 , // Char 116 t
0x4 , 0x0 , 0x7c , 0x0 , 0xfc , 0x0 , 0xc0 , 0x0 , 0xc4 , 0x0 , 0xfc , 0x0 , 0xfc , 0x0 , 0x80 , // Char 117 u
0x4 , 0x0 , 0x1c , 0x0 , 0x7c , 0x0 , 0xe4 , 0x0 , 0x7c , 0x0 , 0x1c , 0x0 , 0x4 , // Char 118 v
0x4 , 0x0 , 0x3c , 0x0 , 0xfc , 0x0 , 0xe4 , 0x0 , 0x3c , 0x0 , 0xfc , 0x0 , 0xe4 , 0x0 , 0x7c , 0x0 , 0x1c , 0x0 , 0x4 , // Char 119 w
0x84 , 0x0 , 0xcc , 0x0 , 0xfc , 0x0 , 0xbc , 0x0 , 0xfc , 0x0 , 0xcc , 0x0 , 0x84 , // Char 120 x
0x4 , 0x3 , 0x1c , 0x3 , 0x7c , 0x3 , 0xf4 , 0x1 , 0x74 , 0x0 , 0x1c , 0x0 , 0x4 , // Char 121 y
0x80 , 0x0 , 0xcc , 0x0 , 0xf4 , 0x0 , 0xbc , 0x0 , 0x9c , 0x0 , 0xcc , // Char 122 z
0xff , 0x1 , 0xe7 , 0x1 , // Char 123 {
0xff , 0x3 , // Char 124 |
0x0 , 0x1 , 0xff , 0x1 , 0xff , // Char 125 }
0x18 , 0x0 , 0x8 , 0x0 , 0x18 , 0x0 , 0x10 , 0x0 , 0x18 , // Char 126 ~
};
