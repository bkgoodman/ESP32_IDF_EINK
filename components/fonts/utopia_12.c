#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t Utopia_12[] PROGMEM = {
9 , // Width 
15 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 9, // Char 32   - Nodata
 0, 0, 2, 6, // 9
 0, 2, 5, 9, // 9
 0, 7, 11, 9, // 9
 0, 18, 10, 9, // 9
 0, 28, 20, 13, // 9
 0, 48, 16, 11, // 9
 0, 64, 1, 6, // 9
 0, 65, 5, 7, // 9
 0, 70, 4, 7, // 9
 0, 74, 5, 8, // 9
 0, 79, 10, 10, // 9
 0, 89, 2, 6, // 9
 0, 91, 5, 8, // 9
 0, 96, 2, 6, // 9
 0, 98, 5, 9, // 9
 0, 103, 12, 9, // 9
 0, 115, 4, 9, // 9
 0, 119, 12, 9, // 9
 0, 131, 12, 9, // 9
 0, 143, 12, 9, // 9
 0, 155, 10, 9, // 9
 0, 165, 12, 9, // 9
 0, 177, 9, 9, // 9
 0, 186, 12, 9, // 9
 0, 198, 12, 9, // 9
 0, 210, 2, 6, // 9
 0, 212, 2, 6, // 9
 0, 214, 10, 10, // 9
 0, 224, 10, 10, // 9
 0, 234, 12, 10, // 9
 0, 246, 7, 8, // 9
 0, 253, 17, 13, // 9
 1, 14, 14, 11, // 9
 1, 28, 12, 11, // 9
 1, 40, 14, 11, // 9
 1, 54, 16, 12, // 9
 1, 70, 12, 10, // 9
 1, 82, 11, 10, // 9
 1, 93, 14, 12, // 9
 1, 107, 16, 13, // 9
 1, 123, 4, 7, // 9
 1, 127, 4, 7, // 9
 1, 131, 14, 11, // 9
 1, 145, 12, 10, // 9
 1, 157, 19, 14, // 9
 1, 176, 15, 12, // 9
 1, 191, 15, 12, // 9
 1, 206, 11, 10, // 9
 1, 217, 15, 12, // 9
 1, 232, 12, 11, // 9
 1, 244, 10, 9, // 9
 1, 254, 13, 10, // 9
 2, 11, 15, 12, // 9
 2, 26, 15, 11, // 9
 2, 41, 21, 14, // 9
 2, 62, 14, 10, // 9
 2, 76, 13, 10, // 9
 2, 89, 14, 10, // 9
 2, 103, 4, 7, // 9
 0xff, 0xff, 0x00, 9, // Char 92 \ - Nodata
 2, 107, 4, 7, // 9
 2, 111, 9, 10, // 9
 2, 120, 12, 9, // 9
 2, 132, 3, 8, // 9
 2, 135, 10, 9, // 9
 2, 145, 12, 10, // 9
 2, 157, 8, 9, // 9
 2, 165, 12, 10, // 9
 2, 177, 9, 9, // 9
 2, 186, 5, 7, // 9
 2, 191, 12, 9, // 9
 2, 203, 12, 10, // 9
 2, 215, 4, 6, // 9
 2, 219, 4, 6, // 9
 2, 223, 10, 9, // 9
 2, 233, 4, 6, // 9
 2, 237, 20, 14, // 9
 3, 1, 12, 10, // 9
 3, 13, 10, 10, // 9
 3, 23, 12, 10, // 9
 3, 35, 12, 10, // 9
 3, 47, 7, 8, // 9
 3, 54, 10, 8, // 9
 3, 64, 6, 7, // 9
 3, 70, 12, 10, // 9
 3, 82, 11, 9, // 9
 3, 93, 17, 12, // 9
 3, 110, 12, 9, // 9
 3, 122, 11, 9, // 9
 3, 133, 12, 9, // 9
 3, 145, 4, 7, // 9
 3, 149, 2, 6, // 9
 3, 151, 3, 7, // 9
 3, 154, 9, 10, // 9

// Data Table:
0xf8 , 0x4 , // Char 33 !
0x1c , 0x0 , 0x0 , 0x0 , 0x1c , // Char 34 "
0x80 , 0x0 , 0xa0 , 0x7 , 0xf8 , 0x0 , 0xa0 , 0x7 , 0xf0 , 0x0 , 0xa8 , // Char 35 #
0x78 , 0x6 , 0x48 , 0x4 , 0xfc , 0xf , 0x88 , 0x5 , 0x0 , 0x3 , // Char 36 $
0x10 , 0x0 , 0x78 , 0x0 , 0x48 , 0x4 , 0x78 , 0x3 , 0x98 , 0x1 , 0x68 , 0x0 , 0xd8 , 0x7 , 0x48 , 0x4 , 0xc0 , 0x7 , 0x0 , 0x3 , // Char 37 %
0x0 , 0x1 , 0x90 , 0x7 , 0x78 , 0x4 , 0xc8 , 0x4 , 0xb8 , 0x5 , 0x0 , 0x3 , 0x0 , 0x7 , 0xc0 , 0x4 , // Char 38 &
0x1c , // Char 39 '
0xe0 , 0x7 , 0x38 , 0xc , 0x8 , // Char 40 (
0x18 , 0x8 , 0xe0 , 0x7 , // Char 41 )
0x30 , 0x0 , 0x78 , 0x0 , 0x30 , // Char 42 *
0x0 , 0x1 , 0x0 , 0x1 , 0xe0 , 0x7 , 0x0 , 0x1 , 0x0 , 0x1 , // Char 43 +
0x0 , 0xe , // Char 44 ,
0x80 , 0x0 , 0x80 , 0x0 , 0x80 , // Char 45 -
0x0 , 0x4 , // Char 46 .
0x0 , 0x6 , 0xc0 , 0x3 , 0x38 , // Char 47 /
0xc0 , 0x0 , 0xf0 , 0x3 , 0x8 , 0x4 , 0x8 , 0x4 , 0xf8 , 0x7 , 0xf0 , 0x3 , // Char 48 0
0x8 , 0x4 , 0xf8 , 0x7 , // Char 49 1
0x0 , 0x4 , 0x18 , 0x6 , 0x8 , 0x5 , 0x88 , 0x4 , 0x78 , 0x4 , 0x20 , 0x4 , // Char 50 2
0x0 , 0x2 , 0x18 , 0x6 , 0x48 , 0x4 , 0x48 , 0x4 , 0xb8 , 0x7 , 0x0 , 0x3 , // Char 51 3
0x0 , 0x1 , 0xc0 , 0x1 , 0x20 , 0x1 , 0xf8 , 0x7 , 0xf8 , 0x7 , 0x0 , 0x1 , // Char 52 4
0x78 , 0x6 , 0x48 , 0x4 , 0x48 , 0x4 , 0xc8 , 0x7 , 0x80 , 0x3 , // Char 53 5
0x80 , 0x0 , 0xf0 , 0x3 , 0x8 , 0x4 , 0x48 , 0x4 , 0xc8 , 0x6 , 0x90 , 0x3 , // Char 54 6
0x8 , 0x0 , 0x8 , 0x7 , 0x88 , 0x1 , 0x28 , 0x0 , 0x8 , // Char 55 7
0x0 , 0x1 , 0xb8 , 0x7 , 0x48 , 0x4 , 0x48 , 0x4 , 0xf8 , 0x7 , 0x90 , 0x3 , // Char 56 8
0x60 , 0x0 , 0xf8 , 0x6 , 0x88 , 0x4 , 0x88 , 0x4 , 0xf8 , 0x7 , 0xe0 , 0x1 , // Char 57 9
0x20 , 0x4 , // Char 58 :
0x60 , 0xe , // Char 59 ;
0x80 , 0x1 , 0x80 , 0x3 , 0x40 , 0x2 , 0x40 , 0x2 , 0x20 , 0x4 , // Char 60 <
0x40 , 0x2 , 0x40 , 0x2 , 0x40 , 0x2 , 0x40 , 0x2 , 0x40 , 0x2 , // Char 61 =
0x20 , 0x4 , 0x20 , 0x4 , 0x40 , 0x2 , 0x40 , 0x2 , 0x80 , 0x1 , 0x80 , 0x1 , // Char 62 >
0x10 , 0x0 , 0x88 , 0x0 , 0xc8 , 0x5 , 0x38 , // Char 63 ?
0x80 , 0x0 , 0xe0 , 0x3 , 0x10 , 0x6 , 0xe8 , 0x5 , 0x28 , 0x4 , 0xd8 , 0x4 , 0xf8 , 0x5 , 0x8 , 0x1 , 0xf0 , // Char 64 @
0x0 , 0x4 , 0x0 , 0x7 , 0xe0 , 0x0 , 0x98 , 0x0 , 0xf8 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x6 , // Char 65 A
0xf8 , 0x7 , 0xf8 , 0x7 , 0x48 , 0x4 , 0x48 , 0x4 , 0xf8 , 0x4 , 0xb0 , 0x3 , // Char 66 B
0xf0 , 0x3 , 0x10 , 0x6 , 0x8 , 0x4 , 0x8 , 0x4 , 0x8 , 0x4 , 0x8 , 0x4 , 0x10 , 0x2 , // Char 67 C
0xf8 , 0x7 , 0xf8 , 0x7 , 0x8 , 0x4 , 0x8 , 0x4 , 0x8 , 0x4 , 0x18 , 0x6 , 0xf0 , 0x3 , 0xe0 , 0x1 , // Char 68 D
0xf8 , 0x7 , 0xf8 , 0x7 , 0x48 , 0x4 , 0x48 , 0x4 , 0xc8 , 0x4 , 0x18 , 0x6 , // Char 69 E
0xf8 , 0x7 , 0xf8 , 0x7 , 0x48 , 0x4 , 0x48 , 0x0 , 0xc8 , 0x0 , 0x8 , // Char 70 F
0xf0 , 0x3 , 0x10 , 0x6 , 0x8 , 0x4 , 0x8 , 0x4 , 0x8 , 0x4 , 0x88 , 0x4 , 0x98 , 0x7 , // Char 71 G
0xf8 , 0x7 , 0xf8 , 0x7 , 0x40 , 0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0x48 , 0x4 , 0xf8 , 0x7 , 0x8 , 0x4 , // Char 72 H
0xf8 , 0x7 , 0xf8 , 0x7 , // Char 73 I
0x8 , 0xc , 0xf8 , 0x7 , // Char 74 J
0xf8 , 0x7 , 0xf8 , 0x7 , 0xc0 , 0x0 , 0xa0 , 0x1 , 0x18 , 0x3 , 0x8 , 0x4 , 0x8 , 0x4 , // Char 75 K
0xf8 , 0x7 , 0xf8 , 0x7 , 0x8 , 0x4 , 0x0 , 0x4 , 0x0 , 0x4 , 0x0 , 0x6 , // Char 76 L
0xf8 , 0x7 , 0x18 , 0x4 , 0xf0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x7 , 0x80 , 0x1 , 0x60 , 0x0 , 0x38 , 0x4 , 0xf8 , 0x7 , 0x8 , // Char 77 M
0xf8 , 0x7 , 0x18 , 0x4 , 0x30 , 0x0 , 0xe0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x3 , 0xf8 , 0x7 , 0x8 , // Char 78 N
0xf0 , 0x3 , 0x18 , 0x6 , 0x8 , 0x4 , 0x8 , 0x4 , 0x8 , 0x4 , 0x18 , 0x6 , 0xf0 , 0x3 , 0xc0 , // Char 79 O
0xf8 , 0x7 , 0xf8 , 0x7 , 0x88 , 0x4 , 0x88 , 0x0 , 0x78 , 0x0 , 0x70 , // Char 80 P
0xf0 , 0x3 , 0x18 , 0x6 , 0x8 , 0x4 , 0x8 , 0x4 , 0x8 , 0xc , 0x18 , 0x16 , 0xf0 , 0x3 , 0xc0 , // Char 81 Q
0xf8 , 0x7 , 0xf8 , 0x7 , 0x48 , 0x0 , 0x48 , 0x0 , 0xb8 , 0x3 , 0x30 , 0x6 , // Char 82 R
0x70 , 0x6 , 0x48 , 0x4 , 0xc8 , 0x4 , 0x88 , 0x4 , 0x90 , 0x3 , // Char 83 S
0x18 , 0x0 , 0x8 , 0x0 , 0x8 , 0x4 , 0xf8 , 0x7 , 0x8 , 0x4 , 0x8 , 0x0 , 0x8 , // Char 84 T
0xf8 , 0x1 , 0xf8 , 0x7 , 0x0 , 0x4 , 0x0 , 0x4 , 0x0 , 0x4 , 0x8 , 0x6 , 0xf8 , 0x3 , 0x8 , // Char 85 U
0x8 , 0x0 , 0x38 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x7 , 0x0 , 0x6 , 0xc0 , 0x0 , 0x38 , 0x0 , 0x8 , // Char 86 V
0x8 , 0x0 , 0x78 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x6 , 0xc0 , 0x1 , 0x38 , 0x0 , 0xf8 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x6 , 0xe0 , 0x0 , 0x18 , // Char 87 W
0x8 , 0x4 , 0x18 , 0x6 , 0x38 , 0x1 , 0xe0 , 0x0 , 0xa0 , 0x1 , 0x18 , 0x7 , 0x8 , 0x4 , // Char 88 X
0x8 , 0x0 , 0x18 , 0x0 , 0x78 , 0x4 , 0xc0 , 0x7 , 0xc0 , 0x4 , 0x38 , 0x0 , 0x8 , // Char 89 Y
0x0 , 0x4 , 0x8 , 0x6 , 0x88 , 0x7 , 0xc0 , 0x0 , 0x60 , 0x4 , 0x18 , 0x4 , 0x8 , 0x4 , // Char 90 Z
0xf8 , 0x1f , 0xf8 , 0x1f , // Char 91 [
0xf8 , 0x1f , 0xf8 , 0x1f , // Char 93 ]
0xc0 , 0x0 , 0x38 , 0x0 , 0xc , 0x0 , 0x30 , 0x0 , 0xc0 , // Char 94 ^
0x0 , 0x10 , 0x0 , 0x10 , 0x0 , 0x10 , 0x0 , 0x10 , 0x0 , 0x10 , 0x0 , 0x10 , // Char 95 _
0x4 , 0x0 , 0x8 , // Char 96 `
0x60 , 0x7 , 0x20 , 0x4 , 0xa0 , 0x4 , 0xe0 , 0x7 , 0x0 , 0x4 , // Char 97 a
0xfc , 0x7 , 0x60 , 0x4 , 0x20 , 0x4 , 0x20 , 0x4 , 0xe0 , 0x3 , 0x80 , 0x1 , // Char 98 b
0xc0 , 0x3 , 0x20 , 0x4 , 0x20 , 0x4 , 0x20 , 0x4 , // Char 99 c
0xc0 , 0x3 , 0x20 , 0x4 , 0x0 , 0x4 , 0x20 , 0x0 , 0xfc , 0x7 , 0x0 , 0x4 , // Char 100 d
0xc0 , 0x3 , 0xa0 , 0x4 , 0xa0 , 0x4 , 0xe0 , 0x4 , 0xc0 , // Char 101 e
0xf8 , 0x7 , 0xec , 0x7 , 0x24 , // Char 102 f
0x0 , 0x10 , 0xe0 , 0x3f , 0x20 , 0x25 , 0x20 , 0x25 , 0xe0 , 0x24 , 0x20 , 0x18 , // Char 103 g
0xfc , 0x7 , 0x60 , 0x4 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x4 , // Char 104 h
0xe8 , 0x7 , 0x0 , 0x4 , // Char 105 i
0x0 , 0x20 , 0xc8 , 0x3f , // Char 106 j
0xfc , 0x7 , 0x80 , 0x5 , 0xc0 , 0x3 , 0x20 , 0x6 , 0x20 , 0x4 , // Char 107 k
0xfc , 0x7 , 0x0 , 0x4 , // Char 108 l
0xe0 , 0x7 , 0x60 , 0x4 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x4 , 0x20 , 0x0 , 0x20 , 0x4 , 0xe0 , 0x7 , 0x0 , 0x4 , // Char 109 m
0xe0 , 0x7 , 0xe0 , 0x7 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x4 , // Char 110 n
0xc0 , 0x3 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0xc0 , 0x3 , // Char 111 o
0xe0 , 0x3f , 0x60 , 0x26 , 0x20 , 0x4 , 0x20 , 0x4 , 0xe0 , 0x7 , 0xc0 , 0x1 , // Char 112 p
0xc0 , 0x3 , 0x20 , 0x4 , 0x0 , 0x4 , 0x20 , 0x20 , 0xe0 , 0x3f , 0x0 , 0x20 , // Char 113 q
0xe0 , 0x7 , 0xe0 , 0x7 , 0x20 , 0x0 , 0x20 , // Char 114 r
0x0 , 0x2 , 0xe0 , 0x4 , 0xa0 , 0x5 , 0x20 , 0x5 , 0x0 , 0x3 , // Char 115 s
0xf0 , 0x7 , 0x20 , 0x6 , 0x20 , 0x4 , // Char 116 t
0xe0 , 0x3 , 0x0 , 0x4 , 0x0 , 0x4 , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x4 , // Char 117 u
0x20 , 0x0 , 0xe0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x6 , 0xe0 , 0x1 , 0x20 , // Char 118 v
0x20 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x7 , 0x0 , 0x3 , 0x60 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x7 , 0x80 , 0x3 , 0x60 , // Char 119 w
0x20 , 0x4 , 0x60 , 0x6 , 0xc0 , 0x1 , 0xc0 , 0x3 , 0x20 , 0x6 , 0x0 , 0x4 , // Char 120 x
0x20 , 0x0 , 0xe0 , 0x20 , 0x80 , 0x7 , 0x0 , 0xe , 0xa0 , 0x1 , 0x20 , // Char 121 y
0x0 , 0x4 , 0x20 , 0x6 , 0xa0 , 0x7 , 0xe0 , 0x4 , 0x60 , 0x4 , 0x0 , 0x6 , // Char 122 z
0x80 , 0x0 , 0x78 , 0x1f , // Char 123 {
0xfc , 0x3f , // Char 124 |
0x78 , 0x1f , 0x80 , // Char 125 }
0x80 , 0x1 , 0x80 , 0x0 , 0x80 , 0x1 , 0x0 , 0x1 , 0x80 , // Char 126 ~
};
