#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Times_Roman_12[] PROGMEM = {
6 , // Width 
12 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 6, // Char 32   - Nodata
 0x0, 0x0, 0x4, 0x4, // Char 33 ! 
 0x0, 0x4, 0x5, 0x5, // Char 34 " 
 0x0, 0x9, 0xb, 0x8, // Char 35 # 
 0x0, 0x14, 0xb, 0x8, // Char 36 $ 
 0x0, 0x1f, 0xf, 0xa, // Char 37 % 
 0x0, 0x2e, 0x10, 0xa, // Char 38 & 
 0x0, 0x3e, 0x3, 0x4, // Char 39 ' 
 0x0, 0x41, 0x6, 0x5, // Char 40 ( 
 0x0, 0x47, 0x5, 0x5, // Char 41 ) 
 0x0, 0x4c, 0x7, 0x6, // Char 42 * 
 0x0, 0x53, 0xb, 0x8, // Char 43 + 
 0x0, 0x5e, 0x2, 0x3, // Char 44 , 
 0x0, 0x60, 0x5, 0x5, // Char 45 - 
 0x0, 0x65, 0x2, 0x3, // Char 46 . 
 0x0, 0x67, 0x5, 0x5, // Char 47 / 
 0x0, 0x6c, 0xb, 0x8, // Char 48 0 
 0x0, 0x77, 0x4, 0x4, // Char 49 1 
 0x0, 0x7b, 0x8, 0x6, // Char 50 2 
 0x0, 0x83, 0x7, 0x6, // Char 51 3 
 0x0, 0x8a, 0xb, 0x8, // Char 52 4 
 0x0, 0x95, 0x7, 0x6, // Char 53 5 
 0x0, 0x9c, 0xb, 0x8, // Char 54 6 
 0x0, 0xa7, 0x9, 0x7, // Char 55 7 
 0x0, 0xb0, 0x8, 0x6, // Char 56 8 
 0x0, 0xb8, 0xb, 0x8, // Char 57 9 
 0x0, 0xc3, 0x2, 0x3, // Char 58 : 
 0x0, 0xc5, 0x4, 0x4, // Char 59 ; 
 0x0, 0xc9, 0x9, 0x7, // Char 60 < 
 0x0, 0xd2, 0xb, 0x8, // Char 61 = 
 0x0, 0xdd, 0x9, 0x7, // Char 62 > 
 0x0, 0xe6, 0x7, 0x6, // Char 63 ? 
 0x0, 0xed, 0x11, 0xb, // Char 64 @ 
 0x0, 0xfe, 0x10, 0xa, // Char 65 A 
 0x1, 0xe, 0xb, 0x8, // Char 66 B 
 0x1, 0x19, 0xf, 0xa, // Char 67 C 
 0x1, 0x28, 0xd, 0x9, // Char 68 D 
 0x1, 0x35, 0xc, 0x8, // Char 69 E 
 0x1, 0x41, 0xb, 0x8, // Char 70 F 
 0x1, 0x4c, 0xf, 0xa, // Char 71 G 
 0x1, 0x5b, 0xe, 0x9, // Char 72 H 
 0x1, 0x69, 0x4, 0x4, // Char 73 I 
 0x1, 0x6d, 0x7, 0x6, // Char 74 J 
 0x1, 0x74, 0xe, 0x9, // Char 75 K 
 0x1, 0x82, 0xc, 0x8, // Char 76 L 
 0x1, 0x8e, 0x12, 0xb, // Char 77 M 
 0x1, 0xa0, 0xd, 0x9, // Char 78 N 
 0x1, 0xad, 0xf, 0xa, // Char 79 O 
 0x1, 0xbc, 0xb, 0x8, // Char 80 P 
 0x1, 0xc7, 0xf, 0xa, // Char 81 Q 
 0x1, 0xd6, 0xc, 0x8, // Char 82 R 
 0x1, 0xe2, 0x9, 0x7, // Char 83 S 
 0x1, 0xeb, 0xd, 0x9, // Char 84 T 
 0x1, 0xf8, 0xd, 0x9, // Char 85 U 
 0x2, 0x5, 0xd, 0x9, // Char 86 V 
 0x2, 0x12, 0x15, 0xd, // Char 87 W 
 0x2, 0x27, 0xe, 0x9, // Char 88 X 
 0x2, 0x35, 0xd, 0x9, // Char 89 Y 
 0x2, 0x42, 0xe, 0x9, // Char 90 Z 
 0x2, 0x50, 0x2, 0x3, // Char 91 [ 
 0x2, 0x52, 0x6, 0x5, // Char 92 Backslash 
 0x2, 0x58, 0x2, 0x3, // Char 93 ] 
 0x2, 0x5a, 0x9, 0x7, // Char 94 ^ 
 0x2, 0x63, 0xc, 0x8, // Char 95 _ 
 0x2, 0x6f, 0x5, 0x5, // Char 96 ` 
 0x2, 0x74, 0xa, 0x7, // Char 97 a 
 0x2, 0x7e, 0xb, 0x8, // Char 98 b 
 0x2, 0x89, 0x9, 0x7, // Char 99 c 
 0x2, 0x92, 0xa, 0x7, // Char 100 d 
 0x2, 0x9c, 0x9, 0x7, // Char 101 e 
 0x2, 0xa5, 0x5, 0x5, // Char 102 f 
 0x2, 0xaa, 0xa, 0x7, // Char 103 g 
 0x2, 0xb4, 0x8, 0x6, // Char 104 h 
 0x2, 0xbc, 0x4, 0x4, // Char 105 i 
 0x2, 0xc0, 0x6, 0x5, // Char 106 j 
 0x2, 0xc6, 0x8, 0x6, // Char 107 k 
 0x2, 0xce, 0x4, 0x4, // Char 108 l 
 0x2, 0xd2, 0x10, 0xa, // Char 109 m 
 0x2, 0xe2, 0x8, 0x6, // Char 110 n 
 0x2, 0xea, 0xb, 0x8, // Char 111 o 
 0x2, 0xf5, 0xb, 0x8, // Char 112 p 
 0x3, 0x0, 0xa, 0x7, // Char 113 q 
 0x3, 0xa, 0x5, 0x5, // Char 114 r 
 0x3, 0xf, 0x8, 0x6, // Char 115 s 
 0x3, 0x17, 0x4, 0x4, // Char 116 t 
 0x3, 0x1b, 0xa, 0x7, // Char 117 u 
 0x3, 0x25, 0x7, 0x6, // Char 118 v 
 0x3, 0x2c, 0xf, 0xa, // Char 119 w 
 0x3, 0x3b, 0x8, 0x6, // Char 120 x 
 0x3, 0x43, 0x9, 0x7, // Char 121 y 
 0x3, 0x4c, 0xa, 0x7, // Char 122 z 
 0x3, 0x56, 0x6, 0x5, // Char 123 { 
 0x3, 0x5c, 0x2, 0x3, // Char 124 | 
 0x3, 0x5e, 0x4, 0x4, // Char 125 } 
 0x3, 0x62, 0x9, 0x7, // Char 126 ~ 

// Data Table:
0x2 , 0x0 , 0x3f , 0x1 , // Char 33 !
0x7 , 0x0 , 0x0 , 0x0 , 0x7 , // Char 34 "
0x28 , 0x0 , 0xf8 , 0x1 , 0x2f , 0x0 , 0xe8 , 0x1 , 0x3f , 0x0 , 0x28 , // Char 35 #
0x80 , 0x0 , 0xe , 0x1 , 0x19 , 0x1 , 0x31 , 0x1 , 0xe2 , 0x1 , 0x40 , // Char 36 $
0x1e , 0x0 , 0x11 , 0x1 , 0x89 , 0x0 , 0x26 , 0x0 , 0xca , 0x0 , 0xe6 , 0x1 , 0x11 , 0x1 , 0x90 , // Char 37 %
0x80 , 0x0 , 0xe0 , 0x1 , 0x16 , 0x1 , 0x1f , 0x1 , 0xf1 , 0x0 , 0xc6 , 0x0 , 0xb8 , 0x1 , 0x8 , 0x1 , // Char 38 &
0x3 , 0x0 , 0x7 , // Char 39 '
0x20 , 0x0 , 0xfc , 0x1 , 0x2 , 0x2 , // Char 40 (
0x2 , 0x2 , 0xfc , 0x1 , 0x20 , // Char 41 )
0xa , 0x0 , 0x4 , 0x0 , 0x1c , 0x0 , 0xa , // Char 42 *
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xf8 , 0x1 , 0x20 , 0x0 , 0x20 , // Char 43 +
0x0 , 0x1 , // Char 44 ,
0x40 , 0x0 , 0x40 , 0x0 , 0x40 , // Char 45 -
0x0 , 0x1 , // Char 46 .
0xc0 , 0x1 , 0x78 , 0x0 , 0xf , // Char 47 /
0x7c , 0x0 , 0xff , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0xff , 0x1 , 0x7c , // Char 48 0
0xfe , 0x1 , 0xff , 0x1 , // Char 49 1
0x0 , 0x1 , 0x1 , 0x1 , 0x23 , 0x1 , 0xe , 0x1 , // Char 50 2
0x1 , 0x1 , 0x11 , 0x1 , 0x1b , 0x0 , 0xf6 , // Char 51 3
0x60 , 0x0 , 0x50 , 0x0 , 0x44 , 0x0 , 0xff , 0x1 , 0xff , 0x1 , 0x40 , // Char 52 4
0xe , 0x1 , 0xd , 0x1 , 0x9 , 0x0 , 0xf1 , // Char 53 5
0x78 , 0x0 , 0xfe , 0x0 , 0xa , 0x1 , 0x9 , 0x1 , 0xf8 , 0x1 , 0x70 , // Char 54 6
0x2 , 0x0 , 0x1 , 0x0 , 0x81 , 0x1 , 0x71 , 0x0 , 0xf , // Char 55 7
0xef , 0x1 , 0x19 , 0x1 , 0x39 , 0x1 , 0xe7 , 0x1 , // Char 56 8
0xc , 0x0 , 0x3f , 0x1 , 0x21 , 0x1 , 0xa1 , 0x0 , 0x7e , 0x0 , 0x18 , // Char 57 9
0x8 , 0x1 , // Char 58 :
0x8 , 0x1 , 0x0 , 0x1 , // Char 59 ;
0x10 , 0x0 , 0x38 , 0x0 , 0x68 , 0x0 , 0x44 , 0x0 , 0x80 , // Char 60 <
0x90 , 0x0 , 0x90 , 0x0 , 0x90 , 0x0 , 0x90 , 0x0 , 0x90 , 0x0 , 0x90 , // Char 61 =
0x84 , 0x0 , 0xc , 0x0 , 0x58 , 0x0 , 0x30 , 0x0 , 0x10 , // Char 62 >
0x7 , 0x0 , 0x1 , 0x1 , 0x19 , 0x1 , 0xe , // Char 63 ?
0x38 , 0x0 , 0xfe , 0x0 , 0x82 , 0x1 , 0x79 , 0x1 , 0x45 , 0x1 , 0x35 , 0x1 , 0x5d , 0x1 , 0x22 , 0x0 , 0x1c , // Char 64 @
0x0 , 0x1 , 0x80 , 0x1 , 0x30 , 0x0 , 0x26 , 0x0 , 0x27 , 0x0 , 0x38 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x1 , // Char 65 A
0xff , 0x1 , 0xff , 0x1 , 0x11 , 0x1 , 0x11 , 0x1 , 0xbf , 0x1 , 0xee , // Char 66 B
0x38 , 0x0 , 0xfe , 0x0 , 0x83 , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0x3 , 0x0 , 0x6 , // Char 67 C
0xff , 0x1 , 0xff , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0xc6 , 0x0 , 0x7c , // Char 68 D
0xff , 0x1 , 0xff , 0x1 , 0x11 , 0x1 , 0x11 , 0x1 , 0x39 , 0x1 , 0x83 , 0x1 , // Char 69 E
0xff , 0x1 , 0xff , 0x1 , 0x11 , 0x0 , 0x11 , 0x0 , 0x39 , 0x0 , 0x3 , // Char 70 F
0x38 , 0x0 , 0xfe , 0x0 , 0x83 , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0xf3 , 0x1 , 0xf3 , // Char 71 G
0xff , 0x1 , 0xff , 0x1 , 0x10 , 0x0 , 0x10 , 0x0 , 0x10 , 0x0 , 0xff , 0x1 , 0x83 , 0x1 , // Char 72 H
0xff , 0x1 , 0xff , 0x1 , // Char 73 I
0x0 , 0x1 , 0x0 , 0x1 , 0xff , 0x1 , 0x1 , // Char 74 J
0xff , 0x1 , 0xff , 0x1 , 0x18 , 0x0 , 0x74 , 0x0 , 0xc3 , 0x1 , 0x81 , 0x1 , 0x1 , 0x1 , // Char 75 K
0xff , 0x1 , 0xff , 0x1 , 0x0 , 0x1 , 0x0 , 0x1 , 0x0 , 0x1 , 0x80 , 0x1 , // Char 76 L
0xff , 0x1 , 0x7 , 0x0 , 0x3c , 0x0 , 0xe0 , 0x0 , 0xc0 , 0x0 , 0x10 , 0x0 , 0x6 , 0x1 , 0xff , 0x1 , 0x1 , 0x1 , // Char 77 M
0xff , 0x1 , 0x7 , 0x1 , 0xc , 0x0 , 0x38 , 0x0 , 0x60 , 0x0 , 0xc1 , 0x0 , 0x3 , // Char 78 N
0x38 , 0x0 , 0xfe , 0x0 , 0x83 , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0x1 , 0xc6 , 0x0 , 0x7c , // Char 79 O
0xff , 0x1 , 0xff , 0x1 , 0x11 , 0x0 , 0x11 , 0x0 , 0xf , 0x0 , 0x4 , // Char 80 P
0x30 , 0x0 , 0xfe , 0x0 , 0x3 , 0x1 , 0x1 , 0x2 , 0x1 , 0x6 , 0x1 , 0x7 , 0x86 , 0x1 , 0xfc , // Char 81 Q
0xff , 0x1 , 0xff , 0x1 , 0x11 , 0x0 , 0x71 , 0x0 , 0xcf , 0x0 , 0x84 , 0x1 , // Char 82 R
0x8e , 0x1 , 0x19 , 0x1 , 0x11 , 0x1 , 0xf1 , 0x1 , 0xe3 , // Char 83 S
0x3 , 0x0 , 0x1 , 0x0 , 0x1 , 0x1 , 0xff , 0x1 , 0x1 , 0x1 , 0x1 , 0x0 , 0x3 , // Char 84 T
0xff , 0x0 , 0xff , 0x1 , 0x0 , 0x1 , 0x0 , 0x1 , 0x0 , 0x1 , 0x81 , 0x0 , 0x3 , // Char 85 U
0x3 , 0x0 , 0x1f , 0x0 , 0x78 , 0x0 , 0xc0 , 0x1 , 0x70 , 0x0 , 0xf , 0x0 , 0x1 , // Char 86 V
0x1 , 0x0 , 0x7 , 0x0 , 0x3f , 0x0 , 0xf0 , 0x1 , 0x61 , 0x0 , 0xf , 0x0 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x70 , 0x0 , 0xf , 0x0 , 0x1 , // Char 87 W
0x1 , 0x1 , 0xc7 , 0x0 , 0x3c , 0x0 , 0x38 , 0x0 , 0xe4 , 0x1 , 0x83 , 0x1 , 0x1 , 0x1 , // Char 88 X
0x1 , 0x0 , 0x7 , 0x0 , 0x1c , 0x1 , 0xf0 , 0x1 , 0x8 , 0x1 , 0x3 , 0x0 , 0x1 , // Char 89 Y
0x3 , 0x1 , 0xc1 , 0x1 , 0x61 , 0x1 , 0x39 , 0x1 , 0xd , 0x1 , 0x7 , 0x1 , 0x81 , 0x1 , // Char 90 Z
0xff , 0x7 , // Char 91 [
0x7 , 0x0 , 0x3c , 0x0 , 0xe0 , 0x1 , // Char 92 Backslash
0xff , 0x7 , // Char 93 ]
0x10 , 0x0 , 0x1c , 0x0 , 0x3 , 0x0 , 0x6 , 0x0 , 0x18 , // Char 94 ^
0x0 , 0x4 , 0x0 , 0x4 , 0x0 , 0x4 , 0x0 , 0x4 , 0x0 , 0x4 , 0x0 , 0x4 , // Char 95 _
0x1 , 0x0 , 0x3 , 0x0 , 0x2 , // Char 96 `
0x80 , 0x0 , 0xd8 , 0x1 , 0x28 , 0x1 , 0xf8 , 0x1 , 0xe0 , 0x1 , // Char 97 a
0x1 , 0x0 , 0xff , 0x1 , 0x8 , 0x1 , 0x8 , 0x1 , 0xf8 , 0x0 , 0x60 , // Char 98 b
0xe0 , 0x0 , 0xd8 , 0x1 , 0x8 , 0x1 , 0x8 , 0x1 , 0x10 , // Char 99 c
0xe0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x1 , 0x8 , 0x1 , 0xff , 0x1 , // Char 100 d
0xe0 , 0x0 , 0xf8 , 0x1 , 0x28 , 0x1 , 0x38 , 0x1 , 0xb0 , // Char 101 e
0xfe , 0x1 , 0x9 , 0x1 , 0x1 , // Char 102 f
0x0 , 0x4 , 0x70 , 0xb , 0x88 , 0x9 , 0x8 , 0x9 , 0x78 , 0x1 , // Char 103 g
0xff , 0x1 , 0x0 , 0x0 , 0x8 , 0x0 , 0xf8 , 0x1 , // Char 104 h
0xf9 , 0x1 , 0x0 , 0x1 , // Char 105 i
0x0 , 0x8 , 0x0 , 0x8 , 0xf9 , 0xf , // Char 106 j
0xff , 0x1 , 0x20 , 0x0 , 0xd0 , 0x0 , 0x8 , 0x1 , // Char 107 k
0xff , 0x1 , 0x0 , 0x1 , // Char 108 l
0xf8 , 0x1 , 0x0 , 0x0 , 0x8 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x1 , 0x8 , 0x0 , 0xf8 , 0x1 , 0xe0 , 0x1 , // Char 109 m
0xf8 , 0x1 , 0x0 , 0x0 , 0x8 , 0x0 , 0xf8 , 0x1 , // Char 110 n
0x70 , 0x0 , 0xf8 , 0x1 , 0x8 , 0x1 , 0x8 , 0x1 , 0xf8 , 0x1 , 0x60 , // Char 111 o
0x0 , 0x8 , 0xf8 , 0xf , 0x8 , 0x1 , 0x8 , 0x1 , 0xf8 , 0x0 , 0x60 , // Char 112 p
0xe0 , 0x0 , 0xd0 , 0x1 , 0x0 , 0x1 , 0x8 , 0x1 , 0xf8 , 0xf , // Char 113 q
0xf8 , 0x1 , 0x0 , 0x0 , 0x8 , // Char 114 r
0x80 , 0x1 , 0x38 , 0x1 , 0x68 , 0x0 , 0xc8 , 0x1 , // Char 115 s
0xfc , 0x1 , 0x0 , 0x1 , // Char 116 t
0x8 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x1 , 0x0 , 0x0 , 0xf8 , 0x1 , // Char 117 u
0x18 , 0x0 , 0xe0 , 0x0 , 0xc0 , 0x0 , 0x38 , // Char 118 v
0x8 , 0x0 , 0x38 , 0x0 , 0xe0 , 0x0 , 0xc8 , 0x0 , 0x38 , 0x0 , 0xe0 , 0x0 , 0xc0 , 0x0 , 0x18 , // Char 119 w
0x98 , 0x1 , 0x78 , 0x0 , 0xf8 , 0x0 , 0x88 , 0x1 , // Char 120 x
0x8 , 0x8 , 0x38 , 0x8 , 0xe0 , 0x4 , 0x80 , 0x1 , 0x38 , // Char 121 y
0x0 , 0x1 , 0x88 , 0x1 , 0x68 , 0x1 , 0x38 , 0x1 , 0x8 , 0x1 , // Char 122 z
0x20 , 0x0 , 0xfe , 0x3 , 0x1 , 0x4 , // Char 123 {
0xff , 0xf , // Char 124 |
0x8f , 0x7 , 0xfe , 0x3 , // Char 125 }
0x10 , 0x0 , 0x10 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x30 , // Char 126 ~
};
