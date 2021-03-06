#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Standard_Symbols_PS_18[] PROGMEM = {
8 , // Width 
26 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 8, // Char 32   - Nodata
 0x0, 0x0, 0x7, 0x4, // Char 33 ! 
 0x0, 0x7, 0x18, 0x8, // Char 34 " 
 0x0, 0x1f, 0x22, 0xb, // Char 35 # 
 0x0, 0x41, 0x18, 0x8, // Char 36 $ 
 0x0, 0x59, 0x32, 0xf, // Char 37 % 
 0x0, 0x8b, 0x2f, 0xe, // Char 38 & 
 0x0, 0xba, 0x18, 0x8, // Char 39 ' 
 0x0, 0xd2, 0xf, 0x6, // Char 40 ( 
 0x0, 0xe1, 0xf, 0x6, // Char 41 ) 
 0x0, 0xf0, 0x18, 0x8, // Char 42 * 
 0x1, 0x8, 0x26, 0xc, // Char 43 + 
 0x1, 0x2e, 0xb, 0x5, // Char 44 , 
 0x1, 0x39, 0x18, 0x8, // Char 45 - 
 0x1, 0x51, 0x7, 0x4, // Char 46 . 
 0x1, 0x58, 0x11, 0x7, // Char 47 / 
 0x1, 0x69, 0x22, 0xb, // Char 48 0 
 0x1, 0x8b, 0x13, 0x7, // Char 49 1 
 0x1, 0x9e, 0x1b, 0x9, // Char 50 2 
 0x1, 0xb9, 0x1a, 0x9, // Char 51 3 
 0x1, 0xd3, 0x22, 0xb, // Char 52 4 
 0x1, 0xf5, 0x19, 0x9, // Char 53 5 
 0x2, 0xe, 0x1b, 0x9, // Char 54 6 
 0x2, 0x29, 0x1a, 0x9, // Char 55 7 
 0x2, 0x43, 0x1b, 0x9, // Char 56 8 
 0x2, 0x5e, 0x1a, 0x9, // Char 57 9 
 0x2, 0x78, 0x3, 0x3, // Char 58 : 
 0x2, 0x7b, 0x7, 0x4, // Char 59 ; 
 0x2, 0x82, 0x23, 0xb, // Char 60 < 
 0x2, 0xa5, 0x26, 0xc, // Char 61 = 
 0x2, 0xcb, 0x22, 0xb, // Char 62 > 
 0x2, 0xed, 0x16, 0x8, // Char 63 ? 
 0x3, 0x3, 0x18, 0x8, // Char 64 @ 
 0x3, 0x1b, 0x18, 0x8, // Char 65 A 
 0x3, 0x33, 0x18, 0x8, // Char 66 B 
 0x3, 0x4b, 0x18, 0x8, // Char 67 C 
 0x3, 0x63, 0x18, 0x8, // Char 68 D 
 0x3, 0x7b, 0x18, 0x8, // Char 69 E 
 0x3, 0x93, 0x18, 0x8, // Char 70 F 
 0x3, 0xab, 0x18, 0x8, // Char 71 G 
 0x3, 0xc3, 0x18, 0x8, // Char 72 H 
 0x3, 0xdb, 0x18, 0x8, // Char 73 I 
 0x3, 0xf3, 0x18, 0x8, // Char 74 J 
 0x4, 0xb, 0x18, 0x8, // Char 75 K 
 0x4, 0x23, 0x18, 0x8, // Char 76 L 
 0x4, 0x3b, 0x18, 0x8, // Char 77 M 
 0x4, 0x53, 0x18, 0x8, // Char 78 N 
 0x4, 0x6b, 0x18, 0x8, // Char 79 O 
 0x4, 0x83, 0x18, 0x8, // Char 80 P 
 0x4, 0x9b, 0x18, 0x8, // Char 81 Q 
 0x4, 0xb3, 0x18, 0x8, // Char 82 R 
 0x4, 0xcb, 0x18, 0x8, // Char 83 S 
 0x4, 0xe3, 0x18, 0x8, // Char 84 T 
 0x4, 0xfb, 0x18, 0x8, // Char 85 U 
 0x5, 0x13, 0x18, 0x8, // Char 86 V 
 0x5, 0x2b, 0x18, 0x8, // Char 87 W 
 0x5, 0x43, 0x18, 0x8, // Char 88 X 
 0x5, 0x5b, 0x18, 0x8, // Char 89 Y 
 0x5, 0x73, 0x18, 0x8, // Char 90 Z 
 0x5, 0x8b, 0xb, 0x5, // Char 91 [ 
 0x5, 0x96, 0x18, 0x8, // Char 92 Backslash 
 0x5, 0xae, 0xb, 0x5, // Char 93 ] 
 0x5, 0xb9, 0x18, 0x8, // Char 94 ^ 
 0x5, 0xd1, 0x23, 0xb, // Char 95 _ 
 0x5, 0xf4, 0x18, 0x8, // Char 96 ` 
 0x6, 0xc, 0x18, 0x8, // Char 97 a 
 0x6, 0x24, 0x18, 0x8, // Char 98 b 
 0x6, 0x3c, 0x18, 0x8, // Char 99 c 
 0x6, 0x54, 0x18, 0x8, // Char 100 d 
 0x6, 0x6c, 0x18, 0x8, // Char 101 e 
 0x6, 0x84, 0x18, 0x8, // Char 102 f 
 0x6, 0x9c, 0x18, 0x8, // Char 103 g 
 0x6, 0xb4, 0x18, 0x8, // Char 104 h 
 0x6, 0xcc, 0x18, 0x8, // Char 105 i 
 0x6, 0xe4, 0x18, 0x8, // Char 106 j 
 0x6, 0xfc, 0x18, 0x8, // Char 107 k 
 0x7, 0x14, 0x18, 0x8, // Char 108 l 
 0x7, 0x2c, 0x18, 0x8, // Char 109 m 
 0x7, 0x44, 0x18, 0x8, // Char 110 n 
 0x7, 0x5c, 0x18, 0x8, // Char 111 o 
 0x7, 0x74, 0x18, 0x8, // Char 112 p 
 0x7, 0x8c, 0x18, 0x8, // Char 113 q 
 0x7, 0xa4, 0x18, 0x8, // Char 114 r 
 0x7, 0xbc, 0x18, 0x8, // Char 115 s 
 0x7, 0xd4, 0x18, 0x8, // Char 116 t 
 0x7, 0xec, 0x18, 0x8, // Char 117 u 
 0x8, 0x4, 0x18, 0x8, // Char 118 v 
 0x8, 0x1c, 0x18, 0x8, // Char 119 w 
 0x8, 0x34, 0x18, 0x8, // Char 120 x 
 0x8, 0x4c, 0x18, 0x8, // Char 121 y 
 0x8, 0x64, 0x18, 0x8, // Char 122 z 
 0x8, 0x7c, 0x17, 0x8, // Char 123 { 
 0x8, 0x93, 0x7, 0x4, // Char 124 | 
 0x8, 0x9a, 0x12, 0x7, // Char 125 } 
 0x8, 0xac, 0x18, 0x8, // Char 126 ~ 

// Data Table:
0x80 , 0x7 , 0x2 , 0x0 , 0x80 , 0x7f , 0x6 , // Char 33 !
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 34 "
0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x48 , 0x0 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0x5f , 0x0 , 0x0 , 0x0 , 0x48 , 0x0 , 0x0 , 0x0 , 0xc8 , 0x3 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x0 , 0x48 , 0x0 , 0x0 , 0x0 , 0x8 , // Char 35 #
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 36 $
0x0 , 0xe , 0x0 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x80 , 0x11 , 0x4 , 0x0 , 0x40 , 0x10 , 0x3 , 0x0 , 0x40 , 0x88 , 0x1 , 0x0 , 0x80 , 0x67 , 0x0 , 0x0 , 0x0 , 0x11 , 0x0 , 0x0 , 0x0 , 0xcd , 0x3 , 0x0 , 0x0 , 0xe3 , 0x4 , 0x0 , 0xc0 , 0x30 , 0x4 , 0x0 , 0x40 , 0x10 , 0x0 , 0x0 , 0x0 , 0x10 , 0x3 , 0x0 , 0x0 , 0xe0 , // Char 37 %
0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x20 , 0x6 , 0x0 , 0x80 , 0x1f , 0x4 , 0x0 , 0xc0 , 0x3c , 0x4 , 0x0 , 0x40 , 0xec , 0x2 , 0x0 , 0xc0 , 0xc6 , 0x3 , 0x0 , 0x80 , 0x83 , 0x3 , 0x0 , 0x0 , 0x48 , 0x6 , 0x0 , 0x0 , 0x38 , 0x6 , 0x0 , 0x0 , 0x8 , 0x4 , 0x0 , 0x0 , 0x8 , 0x2 , // Char 38 &
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 39 '
0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x0 , 0x3 , 0x18 , 0x0 , 0x80 , 0x0 , 0x20 , // Char 40 (
0x80 , 0x0 , 0x20 , 0x0 , 0x0 , 0x3 , 0x18 , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0x0 , 0xf8 , 0x3 , // Char 41 )
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 42 *
0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0xfc , 0x7 , 0x0 , 0x0 , 0xfc , 0x7 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x40 , // Char 43 +
0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0x4 , // Char 44 ,
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 45 -
0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x0 , 0x6 , // Char 46 .
0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0x80 , // Char 47 /
0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x80 , 0x1 , 0x3 , 0x0 , 0x40 , 0x0 , 0x4 , 0x0 , 0x40 , 0x0 , 0x4 , 0x0 , 0x40 , 0x0 , 0x4 , 0x0 , 0x80 , 0x83 , 0x3 , 0x0 , 0x0 , 0xff , 0x1 , 0x0 , 0x0 , 0x10 , // Char 48 0
0x0 , 0x1 , 0x4 , 0x0 , 0x0 , 0x1 , 0x4 , 0x0 , 0x80 , 0xff , 0x7 , 0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0x4 , // Char 49 1
0x0 , 0x3 , 0x4 , 0x0 , 0x80 , 0x1 , 0x6 , 0x0 , 0x80 , 0x0 , 0x5 , 0x0 , 0x80 , 0xc1 , 0x4 , 0x0 , 0x80 , 0x33 , 0x4 , 0x0 , 0x0 , 0x1f , 0x4 , 0x0 , 0x0 , 0x0 , 0x6 , // Char 50 2
0x0 , 0x0 , 0x6 , 0x0 , 0x80 , 0x0 , 0x6 , 0x0 , 0xc0 , 0x0 , 0x4 , 0x0 , 0x40 , 0x10 , 0x4 , 0x0 , 0xc0 , 0x38 , 0x0 , 0x0 , 0x80 , 0xf7 , 0x3 , 0x0 , 0x0 , 0xe1 , // Char 51 3
0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x90 , 0x0 , 0x0 , 0x0 , 0x8c , 0x0 , 0x0 , 0x0 , 0x86 , 0x0 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , // Char 52 4
0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0xe , 0x4 , 0x0 , 0x80 , 0xd , 0x4 , 0x0 , 0x80 , 0x18 , 0x4 , 0x0 , 0x80 , 0x38 , 0x2 , 0x0 , 0x80 , 0xf0 , 0x1 , 0x0 , 0x80 , // Char 53 5
0x0 , 0xfc , 0x1 , 0x0 , 0x0 , 0x1e , 0x3 , 0x0 , 0x0 , 0xb , 0x4 , 0x0 , 0x80 , 0x8 , 0x4 , 0x0 , 0x80 , 0x8 , 0x4 , 0x0 , 0x40 , 0x38 , 0x2 , 0x0 , 0x0 , 0xf0 , 0x1 , // Char 54 6
0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x0 , 0x7 , 0x0 , 0x80 , 0xc0 , 0x1 , 0x0 , 0x80 , 0x38 , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0x80 , 0x1 , // Char 55 7
0x0 , 0xc7 , 0x3 , 0x0 , 0x80 , 0xef , 0x3 , 0x0 , 0x40 , 0x3c , 0x4 , 0x0 , 0x40 , 0x18 , 0x4 , 0x0 , 0x40 , 0x38 , 0x4 , 0x0 , 0x80 , 0xe7 , 0x3 , 0x0 , 0x0 , 0xc3 , 0x1 , // Char 56 8
0x0 , 0x3f , 0x8 , 0x0 , 0x0 , 0x71 , 0x8 , 0x0 , 0x80 , 0x40 , 0x4 , 0x0 , 0x80 , 0x40 , 0x6 , 0x0 , 0x80 , 0x40 , 0x3 , 0x0 , 0x0 , 0xe7 , 0x1 , 0x0 , 0x0 , 0xfe , // Char 57 9
0x0 , 0xc , 0x6 , // Char 58 :
0x0 , 0xc , 0x16 , 0x0 , 0x0 , 0xc , 0xe , // Char 59 ;
0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xb0 , 0x0 , 0x0 , 0x0 , 0x90 , 0x1 , 0x0 , 0x0 , 0x18 , 0x1 , 0x0 , 0x0 , 0x8 , 0x3 , 0x0 , 0x0 , 0xc , 0x2 , 0x0 , 0x0 , 0x4 , 0x6 , // Char 60 <
0x0 , 0x90 , 0x0 , 0x0 , 0x0 , 0x90 , 0x0 , 0x0 , 0x0 , 0x90 , 0x0 , 0x0 , 0x0 , 0x90 , 0x0 , 0x0 , 0x0 , 0x90 , 0x0 , 0x0 , 0x0 , 0x90 , 0x0 , 0x0 , 0x0 , 0x90 , 0x0 , 0x0 , 0x0 , 0x90 , 0x0 , 0x0 , 0x0 , 0x90 , 0x0 , 0x0 , 0x0 , 0x90 , // Char 61 =
0x0 , 0x4 , 0x4 , 0x0 , 0x0 , 0x4 , 0x6 , 0x0 , 0x0 , 0xc , 0x2 , 0x0 , 0x0 , 0x8 , 0x3 , 0x0 , 0x0 , 0x18 , 0x1 , 0x0 , 0x0 , 0x90 , 0x1 , 0x0 , 0x0 , 0xb0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x60 , // Char 62 >
0x0 , 0x3 , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x40 , 0x0 , 0x6 , 0x0 , 0x40 , 0x70 , 0x6 , 0x0 , 0xc0 , 0x1c , 0x0 , 0x0 , 0x80 , 0x7 , // Char 63 ?
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 64 @
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 65 A
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 66 B
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 67 C
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 68 D
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 69 E
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 70 F
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 71 G
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 72 H
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 73 I
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 74 J
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 75 K
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 76 L
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 77 M
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 78 N
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 79 O
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 80 P
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 81 Q
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 82 R
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 83 S
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 84 T
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 85 U
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 86 V
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 87 W
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 88 X
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 89 Y
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 90 Z
0x80 , 0xff , 0x3f , 0x0 , 0x80 , 0x0 , 0x20 , 0x0 , 0x80 , 0x0 , 0x20 , // Char 91 [
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 92 Backslash
0x80 , 0x0 , 0x20 , 0x0 , 0x80 , 0x0 , 0x20 , 0x0 , 0x80 , 0xff , 0x3f , // Char 93 ]
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 94 ^
0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , // Char 95 _
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 96 `
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 97 a
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 98 b
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 99 c
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 100 d
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 101 e
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 102 f
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 103 g
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 104 h
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 105 i
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 106 j
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 107 k
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 108 l
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 109 m
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 110 n
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 111 o
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 112 p
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 113 q
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 114 r
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 115 s
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 116 t
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 117 u
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 118 v
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 119 w
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 120 x
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 121 y
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 122 z
0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x80 , 0xdf , 0x1f , 0x0 , 0xc0 , 0xdf , 0x1f , 0x0 , 0x40 , 0x0 , 0x20 , 0x0 , 0x40 , 0x0 , 0x20 , // Char 123 {
0xc0 , 0xff , 0x3f , 0x0 , 0x80 , 0xff , 0x3f , // Char 124 |
0x40 , 0x0 , 0x20 , 0x0 , 0xc0 , 0x0 , 0x30 , 0x0 , 0x80 , 0xdf , 0x1f , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 125 }
0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , 0xff , 0xff , 0xff , 0x3 , // Char 126 ~
};
