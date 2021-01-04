convert error Command '['convert', '-font', 'Utopia', '-pointsize', '24', 'label:', 'xbm:-']' returned non-zero exit status 1
convert error Command '['convert', '-font', 'Utopia', '-pointsize', '24', 'label:\\', 'xbm:-']' returned non-zero exit status 1
#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_Utopia_24[] PROGMEM = {
15 , // Width 
29 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 15, // Char 32   - Nodata
 0x0, 0x0, 0xb, 0x9, // Char 33 !
 0x0, 0xb, 0x19, 0xe, // Char 34 "
 0x0, 0x24, 0x2e, 0x10, // Char 35 #
 0x0, 0x52, 0x2b, 0x10, // Char 36 $
 0x0, 0x7d, 0x47, 0x17, // Char 37 %
 0x0, 0xc4, 0x3b, 0x14, // Char 38 &
 0x0, 0xff, 0x6, 0xa, // Char 39 '
 0x1, 0x5, 0x15, 0xb, // Char 40 (
 0x1, 0x1a, 0x13, 0xb, // Char 41 )
 0x1, 0x2d, 0x1d, 0xd, // Char 42 *
 0x1, 0x4a, 0x2e, 0x11, // Char 43 +
 0x1, 0x78, 0xb, 0x9, // Char 44 ,
 0x1, 0x83, 0x17, 0xc, // Char 45 -
 0x1, 0x9a, 0xb, 0x9, // Char 46 .
 0x1, 0xa5, 0x19, 0xe, // Char 47 /
 0x1, 0xbe, 0x2b, 0x10, // Char 48 0
 0x1, 0xe9, 0x1b, 0x10, // Char 49 1
 0x2, 0x4, 0x2b, 0x10, // Char 50 2
 0x2, 0x2f, 0x27, 0x10, // Char 51 3
 0x2, 0x56, 0x2b, 0x10, // Char 52 4
 0x2, 0x81, 0x2b, 0x10, // Char 53 5
 0x2, 0xac, 0x2b, 0x10, // Char 54 6
 0x2, 0xd7, 0x29, 0x10, // Char 55 7
 0x3, 0x0, 0x2b, 0x10, // Char 56 8
 0x3, 0x2b, 0x27, 0x10, // Char 57 9
 0x3, 0x52, 0xb, 0x9, // Char 58 :
 0x3, 0x5d, 0xf, 0x9, // Char 59 ;
 0x3, 0x6c, 0x2f, 0x11, // Char 60 <
 0x3, 0x9b, 0x2f, 0x11, // Char 61 =
 0x3, 0xca, 0x2f, 0x11, // Char 62 >
 0x3, 0xf9, 0x1e, 0xc, // Char 63 ?
 0x4, 0x17, 0x42, 0x16, // Char 64 @
 0x4, 0x59, 0x3f, 0x12, // Char 65 A
 0x4, 0x98, 0x33, 0x13, // Char 66 B
 0x4, 0xcb, 0x3b, 0x13, // Char 67 C
 0x5, 0x6, 0x42, 0x16, // Char 68 D
 0x5, 0x48, 0x33, 0x12, // Char 69 E
 0x5, 0x7b, 0x2e, 0x11, // Char 70 F
 0x5, 0xa9, 0x3e, 0x15, // Char 71 G
 0x5, 0xe7, 0x43, 0x16, // Char 72 H
 0x6, 0x2a, 0x17, 0xb, // Char 73 I
 0x6, 0x41, 0x1d, 0xb, // Char 74 J
 0x6, 0x5e, 0x3b, 0x13, // Char 75 K
 0x6, 0x99, 0x33, 0x11, // Char 76 L
 0x6, 0xcc, 0x53, 0x1a, // Char 77 M
 0x7, 0x1f, 0x41, 0x16, // Char 78 N
 0x7, 0x60, 0x3f, 0x15, // Char 79 O
 0x7, 0x9f, 0x32, 0x11, // Char 80 P
 0x7, 0xd1, 0x3f, 0x15, // Char 81 Q
 0x8, 0x10, 0x37, 0x12, // Char 82 R
 0x8, 0x47, 0x2b, 0x10, // Char 83 S
 0x8, 0x72, 0x36, 0x12, // Char 84 T
 0x8, 0xa8, 0x41, 0x16, // Char 85 U
 0x8, 0xe9, 0x39, 0x12, // Char 86 V
 0x9, 0x22, 0x59, 0x1a, // Char 87 W
 0x9, 0x7b, 0x3b, 0x12, // Char 88 X
 0x9, 0xb6, 0x35, 0x11, // Char 89 Y
 0x9, 0xeb, 0x37, 0x12, // Char 90 Z
 0xa, 0x22, 0x10, 0xb, // Char 91 [
 0xff, 0xff, 0x00, 15, // Char 92 \ - Nodata
 0xa, 0x32, 0x10, 0xb, // Char 93 ]
 0xa, 0x42, 0x2b, 0x11, // Char 94 ^
 0xa, 0x6d, 0x30, 0xf, // Char 95 _
 0xa, 0x9d, 0x12, 0xd, // Char 96 `
 0xa, 0xaf, 0x2b, 0x10, // Char 97 a
 0xa, 0xda, 0x2f, 0x11, // Char 98 b
 0xb, 0x9, 0x27, 0xf, // Char 99 c
 0xb, 0x30, 0x33, 0x11, // Char 100 d
 0xb, 0x63, 0x2a, 0xf, // Char 101 e
 0xb, 0x8d, 0x1a, 0xb, // Char 102 f
 0xb, 0xa7, 0x2c, 0xf, // Char 103 g
 0xb, 0xd3, 0x33, 0x12, // Char 104 h
 0xc, 0x6, 0x17, 0xa, // Char 105 i
 0xc, 0x1d, 0x17, 0xa, // Char 106 j
 0xc, 0x34, 0x2f, 0x10, // Char 107 k
 0xc, 0x63, 0x13, 0xa, // Char 108 l
 0xc, 0x76, 0x53, 0x19, // Char 109 m
 0xc, 0xc9, 0x33, 0x12, // Char 110 n
 0xc, 0xfc, 0x2f, 0x11, // Char 111 o
 0xd, 0x2b, 0x2f, 0x12, // Char 112 p
 0xd, 0x5a, 0x34, 0x11, // Char 113 q
 0xd, 0x8e, 0x1e, 0xc, // Char 114 r
 0xd, 0xac, 0x23, 0xd, // Char 115 s
 0xd, 0xcf, 0x1b, 0xb, // Char 116 t
 0xd, 0xea, 0x33, 0x12, // Char 117 u
 0xe, 0x1d, 0x2e, 0xf, // Char 118 v
 0xe, 0x4b, 0x46, 0x15, // Char 119 w
 0xe, 0x91, 0x2f, 0xf, // Char 120 x
 0xe, 0xc0, 0x2e, 0xf, // Char 121 y
 0xe, 0xee, 0x27, 0xf, // Char 122 z
 0xf, 0x15, 0x14, 0xb, // Char 123 {
 0xf, 0x29, 0x8, 0x8, // Char 124 |
 0xf, 0x31, 0x12, 0xb, // Char 125 }
 0xf, 0x43, 0x26, 0x11, // Char 126 ~

// Data Table:
0x0 , 0x0 , 0x10 , 0x0 , 0xe0 , 0xff , 0x38 , 0x0 , 0xe0 , 0x7f , 0x38 , // Char 33 !
0x40 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x40 , // Char 34 "
0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x88 , 0x0 , 0x0 , 0x0 , 0x88 , 0x3e , 0x0 , 0x0 , 0xe8 , 0x7 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0xc0 , 0x8f , 0x0 , 0x0 , 0x40 , 0x88 , 0x30 , 0x0 , 0x0 , 0x88 , 0x1f , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0x9f , 0x0 , 0x0 , 0xc0 , 0x89 , 0x0 , 0x0 , 0x0 , 0x8 , // Char 35 #
0x0 , 0x6 , 0x8 , 0x0 , 0x80 , 0x1f , 0x1c , 0x0 , 0x80 , 0x3d , 0x30 , 0x0 , 0x40 , 0x30 , 0x20 , 0x0 , 0x40 , 0x70 , 0x20 , 0x0 , 0xe0 , 0xff , 0xff , 0x0 , 0x40 , 0x60 , 0x20 , 0x0 , 0xc0 , 0xe0 , 0x20 , 0x0 , 0x80 , 0xc1 , 0x1f , 0x0 , 0x80 , 0x81 , 0x1f , 0x0 , 0x0 , 0x0 , 0x7 , // Char 36 $
0x80 , 0xf , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x60 , 0x30 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , 0x20 , 0x30 , 0x0 , 0x60 , 0x30 , 0xc , 0x0 , 0xc0 , 0x1f , 0x7 , 0x0 , 0xc0 , 0x8f , 0x1 , 0x0 , 0x40 , 0x60 , 0x0 , 0x0 , 0x40 , 0x38 , 0x0 , 0x0 , 0x40 , 0xc , 0x7 , 0x0 , 0x40 , 0xc7 , 0x1f , 0x0 , 0xc0 , 0x61 , 0x30 , 0x0 , 0x60 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x0 , 0x60 , 0x30 , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x80 , 0xf , // Char 37 %
0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x80 , 0xe7 , 0x1f , 0x0 , 0xc0 , 0x3f , 0x30 , 0x0 , 0x60 , 0x3c , 0x30 , 0x0 , 0x20 , 0x78 , 0x20 , 0x0 , 0x20 , 0xe8 , 0x20 , 0x0 , 0xe0 , 0xc6 , 0x31 , 0x0 , 0xc0 , 0x87 , 0x13 , 0x0 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0xf0 , 0x19 , 0x0 , 0x0 , 0xf8 , 0x30 , 0x0 , 0x0 , 0x30 , 0x20 , // Char 38 &
0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x7 , // Char 39 '
0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0x80 , 0xf , 0x7c , 0x0 , 0xc0 , 0x0 , 0xc0 , 0x0 , 0x20 , 0x0 , 0x80 , 0x0 , 0x20 , // Char 40 (
0x20 , 0x0 , 0x80 , 0x0 , 0x60 , 0x0 , 0xc0 , 0x0 , 0xc0 , 0x3 , 0x70 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0xf8 , 0x7 , // Char 41 )
0x80 , 0xc , 0x0 , 0x0 , 0x80 , 0xc , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0x60 , 0x1b , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0x80 , 0xc , 0x0 , 0x0 , 0x80 , // Char 42 *
0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , 0x0 , 0x0 , 0x0 , 0x80 , // Char 43 +
0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x30 , // Char 44 ,
0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , // Char 45 -
0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x10 , // Char 46 .
0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x20 , // Char 47 /
0x0 , 0xfe , 0x3 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0x60 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0x0 , 0x38 , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0x0 , 0xfc , 0x1 , // Char 48 0
0x40 , 0x0 , 0x20 , 0x0 , 0xc0 , 0x0 , 0x20 , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 49 1
0x80 , 0x1 , 0x30 , 0x0 , 0xc0 , 0x3 , 0x3c , 0x0 , 0xc0 , 0x0 , 0x36 , 0x0 , 0x60 , 0x0 , 0x33 , 0x0 , 0x20 , 0x80 , 0x31 , 0x0 , 0x20 , 0xc0 , 0x30 , 0x0 , 0x20 , 0x60 , 0x30 , 0x0 , 0xe0 , 0x3f , 0x30 , 0x0 , 0xc0 , 0x1f , 0x30 , 0x0 , 0x80 , 0xf , 0x38 , 0x0 , 0x0 , 0x0 , 0x8 , // Char 50 2
0x80 , 0x0 , 0x1c , 0x0 , 0xc0 , 0x1 , 0x1c , 0x0 , 0xe0 , 0x10 , 0x30 , 0x0 , 0x20 , 0x10 , 0x20 , 0x0 , 0x20 , 0x10 , 0x20 , 0x0 , 0x20 , 0x10 , 0x20 , 0x0 , 0x60 , 0x38 , 0x30 , 0x0 , 0xe0 , 0x6f , 0x18 , 0x0 , 0xc0 , 0xe7 , 0x1f , 0x0 , 0x0 , 0xc3 , 0xf , // Char 51 3
0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x60 , 0x2 , 0x0 , 0x0 , 0x18 , 0x2 , 0x0 , 0x0 , 0x6 , 0x22 , 0x0 , 0x0 , 0x3 , 0x22 , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0x0 , 0x0 , 0x26 , 0x0 , 0x0 , 0x0 , 0x22 , 0x0 , 0x0 , 0x0 , 0x2 , // Char 52 4
0x0 , 0x0 , 0xc , 0x0 , 0xc0 , 0x3f , 0x1c , 0x0 , 0xc0 , 0x11 , 0x30 , 0x0 , 0xc0 , 0x18 , 0x20 , 0x0 , 0xc0 , 0x8 , 0x20 , 0x0 , 0xc0 , 0x8 , 0x20 , 0x0 , 0xc0 , 0x18 , 0x20 , 0x0 , 0xc0 , 0x38 , 0x18 , 0x0 , 0xc0 , 0xf0 , 0x1f , 0x0 , 0x40 , 0xe0 , 0xf , 0x0 , 0x0 , 0x0 , 0x1 , // Char 53 5
0x0 , 0xfc , 0x3 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xc0 , 0xff , 0x1f , 0x0 , 0xc0 , 0x20 , 0x30 , 0x0 , 0x60 , 0x30 , 0x20 , 0x0 , 0x20 , 0x10 , 0x20 , 0x0 , 0x20 , 0x30 , 0x20 , 0x0 , 0x60 , 0x30 , 0x30 , 0x0 , 0xe0 , 0xf1 , 0x1f , 0x0 , 0xc0 , 0xe1 , 0x1f , 0x0 , 0x0 , 0x80 , 0x7 , // Char 54 6
0x80 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x3c , 0x0 , 0xc0 , 0x0 , 0x3f , 0x0 , 0xc0 , 0xc0 , 0x1f , 0x0 , 0xc0 , 0x60 , 0x0 , 0x0 , 0xc0 , 0x18 , 0x0 , 0x0 , 0xc0 , 0x6 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0xc0 , // Char 55 7
0x0 , 0x80 , 0xf , 0x0 , 0x80 , 0xcf , 0x1f , 0x0 , 0xc0 , 0xdf , 0x1d , 0x0 , 0x60 , 0x70 , 0x30 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0xe0 , 0x78 , 0x30 , 0x0 , 0xc0 , 0xdf , 0x1f , 0x0 , 0x80 , 0x8f , 0x1f , 0x0 , 0x0 , 0x0 , 0x7 , // Char 56 8
0x0 , 0x1f , 0x8 , 0x0 , 0xc0 , 0x3f , 0x1c , 0x0 , 0xc0 , 0x78 , 0x38 , 0x0 , 0x60 , 0x60 , 0x20 , 0x0 , 0x20 , 0x40 , 0x20 , 0x0 , 0x20 , 0x40 , 0x20 , 0x0 , 0x20 , 0x40 , 0x30 , 0x0 , 0xc0 , 0x20 , 0x1c , 0x0 , 0xc0 , 0xff , 0xf , 0x0 , 0x0 , 0xff , 0x7 , // Char 57 9
0x0 , 0x1c , 0x38 , 0x0 , 0x0 , 0x1c , 0x38 , 0x0 , 0x0 , 0x8 , 0x10 , // Char 58 :
0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x1c , 0xf8 , 0x1 , 0x0 , 0x1c , 0x78 , 0x0 , 0x0 , 0x8 , 0x30 , // Char 59 ;
0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x40 , 0x6 , 0x0 , 0x0 , 0x60 , 0x6 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x30 , 0xc , 0x0 , 0x0 , 0x30 , 0x8 , 0x0 , 0x0 , 0x18 , 0x18 , 0x0 , 0x0 , 0x18 , 0x18 , 0x0 , 0x0 , 0xc , 0x30 , 0x0 , 0x0 , 0xc , 0x30 , // Char 60 <
0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , 0x0 , 0x0 , 0x20 , 0x4 , // Char 61 =
0x0 , 0xc , 0x30 , 0x0 , 0x0 , 0x8 , 0x10 , 0x0 , 0x0 , 0x18 , 0x18 , 0x0 , 0x0 , 0x18 , 0x18 , 0x0 , 0x0 , 0x30 , 0xc , 0x0 , 0x0 , 0x30 , 0xc , 0x0 , 0x0 , 0x60 , 0x4 , 0x0 , 0x0 , 0x60 , 0x6 , 0x0 , 0x0 , 0x40 , 0x2 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x80 , 0x1 , // Char 62 >
0xc0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0xe1 , 0x0 , 0x0 , 0x60 , 0xf0 , 0x11 , 0x0 , 0x20 , 0xf8 , 0x39 , 0x0 , 0x20 , 0xc , 0x39 , 0x0 , 0xe0 , 0x7 , 0x1 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x80 , 0x1 , // Char 63 ?
0x0 , 0xf0 , 0x1 , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0x0 , 0xf , 0xe , 0x0 , 0x80 , 0x3 , 0x18 , 0x0 , 0xc0 , 0x80 , 0x11 , 0x0 , 0x40 , 0xf0 , 0x33 , 0x0 , 0x60 , 0x78 , 0x23 , 0x0 , 0x20 , 0xc , 0x22 , 0x0 , 0x20 , 0x6 , 0x21 , 0x0 , 0x20 , 0x82 , 0x20 , 0x0 , 0x20 , 0xe2 , 0x23 , 0x0 , 0x20 , 0xfe , 0x23 , 0x0 , 0x60 , 0x1e , 0x12 , 0x0 , 0x40 , 0x0 , 0x2 , 0x0 , 0xc0 , 0x0 , 0x1 , 0x0 , 0x80 , 0xc3 , 0x0 , 0x0 , 0x0 , 0x7e , // Char 64 @
0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0xc0 , 0x23 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0x8f , 0x0 , 0x0 , 0xe0 , 0x81 , 0x0 , 0x0 , 0xe0 , 0x83 , 0x0 , 0x0 , 0xe0 , 0x9f , 0x0 , 0x0 , 0x0 , 0xff , 0x0 , 0x0 , 0x0 , 0xf8 , 0x27 , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 65 A
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x20 , 0x30 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x30 , 0x20 , 0x0 , 0x60 , 0x78 , 0x30 , 0x0 , 0xc0 , 0xdf , 0x19 , 0x0 , 0x80 , 0xcf , 0x1f , 0x0 , 0x0 , 0x80 , 0xf , // Char 66 B
0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xc0 , 0x3 , 0x1e , 0x0 , 0xc0 , 0x0 , 0x18 , 0x0 , 0x60 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x60 , 0x0 , 0x30 , 0x0 , 0x60 , 0x0 , 0x30 , 0x0 , 0xc0 , 0x1 , 0x1c , 0x0 , 0x0 , 0x0 , 0x2 , // Char 67 C
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x60 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x60 , 0x0 , 0x30 , 0x0 , 0x60 , 0x0 , 0x10 , 0x0 , 0xc0 , 0x0 , 0x18 , 0x0 , 0xc0 , 0x3 , 0xf , 0x0 , 0x80 , 0xff , 0x7 , 0x0 , 0x0 , 0xfe , 0x3 , 0x0 , 0x0 , 0x30 , // Char 68 D
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x20 , 0x30 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x30 , 0x20 , 0x0 , 0x60 , 0xf8 , 0x20 , 0x0 , 0xe0 , 0x1 , 0x30 , 0x0 , 0x0 , 0x0 , 0x3c , // Char 69 E
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , 0x60 , 0x0 , 0x0 , 0x60 , 0xf8 , 0x0 , 0x0 , 0xe0 , 0x1 , // Char 70 F
0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0xfe , 0x7 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xc0 , 0x3 , 0x1e , 0x0 , 0xc0 , 0x0 , 0x18 , 0x0 , 0x40 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x40 , 0x20 , 0x0 , 0x20 , 0x40 , 0x20 , 0x0 , 0x60 , 0xc0 , 0x3f , 0x0 , 0xc0 , 0xc1 , 0x1f , 0x0 , 0xc0 , 0xc1 , 0x1f , 0x0 , 0x0 , 0x40 , // Char 71 G
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , // Char 72 H
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , // Char 73 I
0x0 , 0x0 , 0x80 , 0x0 , 0x20 , 0x0 , 0x80 , 0x0 , 0x20 , 0x0 , 0xc0 , 0x0 , 0xe0 , 0xff , 0x7f , 0x0 , 0xe0 , 0xff , 0x7f , 0x0 , 0xe0 , 0xff , 0xf , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 74 J
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x30 , 0x20 , 0x0 , 0x20 , 0x70 , 0x20 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x0 , 0xc4 , 0x3 , 0x0 , 0x0 , 0x82 , 0x7 , 0x0 , 0xa0 , 0x1 , 0xf , 0x0 , 0xe0 , 0x0 , 0x1e , 0x0 , 0x60 , 0x0 , 0x38 , 0x0 , 0x20 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , // Char 75 K
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x4 , // Char 76 L
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0x0 , 0x20 , 0x0 , 0xe0 , 0x7 , 0x20 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0xf8 , 0x3 , 0x0 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x7 , 0x20 , 0x0 , 0xc0 , 0x1 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , // Char 77 M
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0x0 , 0x20 , 0x0 , 0xe0 , 0x1 , 0x20 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x20 , 0x0 , 0x1e , 0x0 , 0x60 , 0x0 , 0x3c , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 78 N
0x0 , 0xfc , 0x1 , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xc0 , 0x3 , 0x1e , 0x0 , 0xc0 , 0x0 , 0x18 , 0x0 , 0x60 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x60 , 0x0 , 0x20 , 0x0 , 0x40 , 0x0 , 0x10 , 0x0 , 0xc0 , 0x1 , 0x1c , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x0 , 0xfc , 0x1 , // Char 79 O
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x60 , 0x20 , 0x0 , 0x20 , 0x40 , 0x20 , 0x0 , 0x20 , 0x40 , 0x20 , 0x0 , 0x20 , 0x40 , 0x0 , 0x0 , 0x20 , 0x60 , 0x0 , 0x0 , 0x60 , 0x30 , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x7 , // Char 80 P
0x0 , 0xf8 , 0x1 , 0x0 , 0x0 , 0xff , 0x7 , 0x0 , 0x80 , 0xff , 0xf , 0x0 , 0xc0 , 0x3 , 0x1e , 0x0 , 0xc0 , 0x0 , 0x30 , 0x0 , 0x60 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x60 , 0x0 , 0x20 , 0x0 , 0xe0 , 0x0 , 0x20 , 0x0 , 0xe0 , 0x1 , 0x60 , 0x0 , 0xe0 , 0x1 , 0x40 , 0x0 , 0x30 , 0x3 , 0xc0 , 0x1 , 0x1c , 0x3 , 0x80 , 0xff , 0xf , 0x2 , 0x0 , 0xff , 0x7 , 0x2 , 0x0 , 0xfc , 0x3 , // Char 81 Q
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x20 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , 0x20 , 0x0 , 0x0 , 0x20 , 0x70 , 0x0 , 0x0 , 0xe0 , 0xd8 , 0x7 , 0x0 , 0xc0 , 0x9f , 0x1f , 0x0 , 0x80 , 0xf , 0x3f , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 82 R
0x0 , 0x2 , 0xe , 0x0 , 0x80 , 0xf , 0x1c , 0x0 , 0xc0 , 0x1f , 0x30 , 0x0 , 0x60 , 0x3c , 0x20 , 0x0 , 0x20 , 0x38 , 0x20 , 0x0 , 0x20 , 0x30 , 0x20 , 0x0 , 0x20 , 0x70 , 0x20 , 0x0 , 0x20 , 0xe0 , 0x30 , 0x0 , 0x60 , 0xe0 , 0x19 , 0x0 , 0xc0 , 0xc1 , 0x1f , 0x0 , 0x0 , 0x80 , 0x7 , // Char 83 S
0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , // Char 84 T
0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0xe0 , 0xff , 0x7 , 0x0 , 0xe0 , 0xff , 0xf , 0x0 , 0x20 , 0x0 , 0x1c , 0x0 , 0x20 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x1c , 0x0 , 0xe0 , 0xff , 0xf , 0x0 , 0xe0 , 0xff , 0x7 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 85 U
0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0x20 , 0x7f , 0x0 , 0x0 , 0x20 , 0xf8 , 0x3 , 0x0 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x20 , 0x3c , 0x0 , 0x0 , 0xa0 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x60 , // Char 86 V
0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x20 , 0xff , 0x3 , 0x0 , 0x20 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0x80 , 0xff , 0x0 , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0x1e , 0x0 , 0x20 , 0xe0 , 0x1 , 0x0 , 0x20 , 0x3f , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 87 W
0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x60 , 0x0 , 0x38 , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0xe0 , 0x7 , 0x27 , 0x0 , 0x20 , 0x8f , 0x1 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0x0 , 0xc6 , 0x27 , 0x0 , 0xa0 , 0x3 , 0x2f , 0x0 , 0xe0 , 0x0 , 0x3e , 0x0 , 0x60 , 0x0 , 0x38 , 0x0 , 0x20 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x20 , // Char 88 X
0x20 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xa0 , 0xf , 0x20 , 0x0 , 0x20 , 0x3e , 0x20 , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x18 , 0x20 , 0x0 , 0x20 , 0x6 , 0x20 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 89 Y
0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0xe0 , 0x1 , 0x3c , 0x0 , 0x60 , 0x0 , 0x3e , 0x0 , 0x20 , 0x80 , 0x2f , 0x0 , 0x20 , 0xc0 , 0x23 , 0x0 , 0x20 , 0xf0 , 0x21 , 0x0 , 0x20 , 0x78 , 0x20 , 0x0 , 0x20 , 0x3e , 0x20 , 0x0 , 0x20 , 0xf , 0x20 , 0x0 , 0xe0 , 0x7 , 0x20 , 0x0 , 0xe0 , 0x1 , 0x20 , 0x0 , 0xe0 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x3c , // Char 90 Z
0xe0 , 0xff , 0xff , 0x1 , 0xe0 , 0xff , 0xff , 0x1 , 0x20 , 0x0 , 0x0 , 0x1 , 0x20 , 0x0 , 0x0 , 0x1 , // Char 91 [
0x20 , 0x0 , 0x0 , 0x1 , 0x20 , 0x0 , 0x0 , 0x1 , 0xe0 , 0xff , 0xff , 0x1 , 0xe0 , 0xff , 0xff , 0x1 , // Char 93 ]
0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xc0 , 0x1 , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , // Char 94 ^
0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 95 _
0x60 , 0x0 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 , // Char 96 `
0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x38 , 0x1f , 0x0 , 0x0 , 0x18 , 0x3f , 0x0 , 0x0 , 0xc , 0x31 , 0x0 , 0x0 , 0x84 , 0x20 , 0x0 , 0x0 , 0x84 , 0x20 , 0x0 , 0x0 , 0x44 , 0x10 , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 97 a
0x20 , 0x0 , 0x0 , 0x0 , 0xf0 , 0xff , 0x3f , 0x0 , 0xf0 , 0xff , 0x1f , 0x0 , 0x0 , 0x38 , 0x3c , 0x0 , 0x0 , 0x8 , 0x20 , 0x0 , 0x0 , 0xc , 0x20 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0xc , 0x20 , 0x0 , 0x0 , 0xc , 0x30 , 0x0 , 0x0 , 0x7c , 0x1e , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0xf0 , 0x7 , // Char 98 b
0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0xc , 0x38 , 0x0 , 0x0 , 0x4 , 0x30 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0xc , 0x30 , 0x0 , 0x0 , 0x1c , 0x10 , 0x0 , 0x0 , 0x18 , 0x8 , // Char 99 c
0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0x8 , 0x38 , 0x0 , 0x0 , 0x4 , 0x30 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x10 , 0x0 , 0x20 , 0xc , 0x18 , 0x0 , 0xf0 , 0xff , 0x3f , 0x0 , 0xf0 , 0xff , 0x3f , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 100 d
0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0x4c , 0x38 , 0x0 , 0x0 , 0x44 , 0x30 , 0x0 , 0x0 , 0x44 , 0x20 , 0x0 , 0x0 , 0x44 , 0x20 , 0x0 , 0x0 , 0x4c , 0x30 , 0x0 , 0x0 , 0x78 , 0x10 , 0x0 , 0x0 , 0x78 , 0xc , 0x0 , 0x0 , 0x20 , // Char 101 e
0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x30 , 0x0 , 0xc0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x20 , 0x4 , 0x20 , 0x0 , 0x20 , 0x4 , 0x20 , 0x0 , 0x60 , 0x4 , // Char 102 f
0x0 , 0x70 , 0x80 , 0x1 , 0x0 , 0xf8 , 0xdc , 0x3 , 0x0 , 0xfc , 0x7f , 0x7 , 0x0 , 0x8c , 0x31 , 0x4 , 0x0 , 0x4 , 0x31 , 0x4 , 0x0 , 0x4 , 0x31 , 0x4 , 0x0 , 0x4 , 0x31 , 0x4 , 0x0 , 0xdc , 0x31 , 0x4 , 0x0 , 0xf8 , 0x70 , 0x2 , 0x0 , 0x7c , 0xe0 , 0x3 , 0x0 , 0xc , 0xe0 , 0x1 , // Char 103 g
0x20 , 0x0 , 0x20 , 0x0 , 0xf0 , 0xff , 0x3f , 0x0 , 0xf0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x0 , 0x8 , 0x20 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0xc , 0x20 , 0x0 , 0x0 , 0xc , 0x20 , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 104 h
0x0 , 0x0 , 0x20 , 0x0 , 0x40 , 0x1c , 0x30 , 0x0 , 0xe0 , 0xfc , 0x3f , 0x0 , 0xe0 , 0xfc , 0x3f , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 105 i
0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x4 , 0x0 , 0x6 , 0x40 , 0xfc , 0xff , 0x3 , 0xe0 , 0xfc , 0xff , 0x3 , 0xe0 , 0xfc , 0xff , // Char 106 j
0x10 , 0x0 , 0x20 , 0x0 , 0xf0 , 0xff , 0x3f , 0x0 , 0xf0 , 0xff , 0x3f , 0x0 , 0xf0 , 0xff , 0x3f , 0x0 , 0x0 , 0xc0 , 0x21 , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x30 , 0xf , 0x0 , 0x0 , 0x1c , 0x1e , 0x0 , 0x0 , 0xc , 0x38 , 0x0 , 0x0 , 0x4 , 0x30 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 107 k
0x20 , 0x0 , 0x20 , 0x0 , 0xf0 , 0xff , 0x3f , 0x0 , 0xf0 , 0xff , 0x3f , 0x0 , 0xe0 , 0xff , 0x3f , 0x0 , 0x0 , 0x0 , 0x20 , // Char 108 l
0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0xc , 0x30 , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0x18 , 0x20 , 0x0 , 0x0 , 0x8 , 0x20 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0xc , 0x20 , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0x30 , 0x30 , 0x0 , 0x0 , 0x8 , 0x20 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0xc , 0x20 , 0x0 , 0x0 , 0x1c , 0x20 , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 109 m
0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0x18 , 0x20 , 0x0 , 0x0 , 0x8 , 0x20 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0xc , 0x20 , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xf8 , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x20 , // Char 110 n
0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0xc , 0x30 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x1c , 0x38 , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0xc0 , 0x3 , // Char 111 o
0x0 , 0x4 , 0x0 , 0x4 , 0x0 , 0xfc , 0xff , 0x7 , 0x0 , 0xfc , 0xff , 0x7 , 0x0 , 0xf8 , 0xff , 0x7 , 0x0 , 0x8 , 0x30 , 0x4 , 0x0 , 0x8 , 0x20 , 0x4 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0xc , 0x20 , 0x0 , 0x0 , 0xc , 0x30 , 0x0 , 0x0 , 0x3c , 0x1c , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0xf0 , 0xf , // Char 112 p
0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0x8 , 0x38 , 0x0 , 0x0 , 0x4 , 0x30 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x10 , 0x4 , 0x0 , 0xc , 0x18 , 0x4 , 0x0 , 0xf8 , 0xff , 0x7 , 0x0 , 0xfc , 0xff , 0x7 , 0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0x4 , // Char 113 q
0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x1c , 0x30 , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0x8 , 0x20 , 0x0 , 0x0 , 0x8 , 0x20 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x0 , 0xc , // Char 114 r
0x0 , 0x30 , 0x1c , 0x0 , 0x0 , 0xf8 , 0x38 , 0x0 , 0x0 , 0xec , 0x30 , 0x0 , 0x0 , 0xc4 , 0x21 , 0x0 , 0x0 , 0x84 , 0x21 , 0x0 , 0x0 , 0x84 , 0x23 , 0x0 , 0x0 , 0x8c , 0x3f , 0x0 , 0x0 , 0x18 , 0x1f , 0x0 , 0x0 , 0x0 , 0x4 , // Char 115 s
0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x80 , 0xff , 0x3f , 0x0 , 0x0 , 0x4 , 0x30 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x10 , // Char 116 t
0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0xfc , 0xf , 0x0 , 0x0 , 0xfc , 0x1f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x20 , 0x0 , 0x0 , 0x0 , 0x10 , 0x0 , 0x0 , 0x4 , 0x18 , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0xfc , 0x3f , 0x0 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x0 , 0x20 , // Char 117 u
0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0x0 , 0xe4 , 0xf , 0x0 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x84 , 0x3 , 0x0 , 0x0 , 0xf4 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x4 , // Char 118 v
0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x0 , 0xfc , 0x3 , 0x0 , 0x0 , 0xc4 , 0x3f , 0x0 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x80 , 0x7 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0xfc , 0x1 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x0 , 0x80 , 0x3f , 0x0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x4 , 0x1e , 0x0 , 0x0 , 0xe4 , 0x3 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x0 , 0xc , // Char 119 w
0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0xc , 0x30 , 0x0 , 0x0 , 0x3c , 0x3c , 0x0 , 0x0 , 0x74 , 0x26 , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x34 , 0x2f , 0x0 , 0x0 , 0x1c , 0x3c , 0x0 , 0x0 , 0xc , 0x38 , 0x0 , 0x0 , 0x4 , 0x20 , 0x0 , 0x0 , 0x4 , 0x20 , // Char 120 x
0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0xc , 0x0 , 0x2 , 0x0 , 0x3c , 0x0 , 0x7 , 0x0 , 0xfc , 0x0 , 0x6 , 0x0 , 0xe4 , 0x7 , 0x6 , 0x0 , 0x80 , 0xbf , 0x1 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x84 , 0x3 , 0x0 , 0x0 , 0xf4 , 0x0 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x0 , 0x4 , // Char 121 y
0x0 , 0x1c , 0x30 , 0x0 , 0x0 , 0x1c , 0x38 , 0x0 , 0x0 , 0x4 , 0x3e , 0x0 , 0x0 , 0x4 , 0x2f , 0x0 , 0x0 , 0xc4 , 0x23 , 0x0 , 0x0 , 0xe4 , 0x21 , 0x0 , 0x0 , 0x7c , 0x20 , 0x0 , 0x0 , 0x3c , 0x20 , 0x0 , 0x0 , 0xc , 0x30 , 0x0 , 0x0 , 0x4 , 0x3c , // Char 122 z
0x0 , 0x40 , 0x0 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0xc0 , 0xbf , 0xff , 0x0 , 0x60 , 0x18 , 0x87 , 0x1 , 0x20 , 0x0 , 0x0 , 0x1 , // Char 123 {
0xf8 , 0xff , 0xff , 0x7 , 0xf8 , 0xff , 0xff , 0x7 , // Char 124 |
0x20 , 0x0 , 0x0 , 0x1 , 0x20 , 0x0 , 0x80 , 0x1 , 0xc0 , 0xbf , 0xff , 0x0 , 0x0 , 0xe1 , 0x20 , 0x0 , 0x0 , 0x40 , // Char 125 }
0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x40 , // Char 126 ~
};
