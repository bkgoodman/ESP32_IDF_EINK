ESCCH IS A 65
ESCCH IS   32
ESCCH IS ! 33
ESCCH IS \" 34
ESCCH IS # 35
ESCCH IS $ 36
ESCCH IS % 37
ESCCH IS & 38
ESCCH IS ' 39
ESCCH IS ( 40
ESCCH IS ) 41
ESCCH IS * 42
ESCCH IS + 43
ESCCH IS , 44
ESCCH IS - 45
ESCCH IS . 46
ESCCH IS / 47
ESCCH IS 0 48
ESCCH IS 1 49
ESCCH IS 2 50
ESCCH IS 3 51
ESCCH IS 4 52
ESCCH IS 5 53
ESCCH IS 6 54
ESCCH IS 7 55
ESCCH IS 8 56
ESCCH IS 9 57
ESCCH IS : 58
ESCCH IS ; 59
ESCCH IS < 60
ESCCH IS = 61
ESCCH IS > 62
ESCCH IS ? 63
ESCCH IS @ 64
ESCCH IS A 65
ESCCH IS B 66
ESCCH IS C 67
ESCCH IS D 68
ESCCH IS E 69
ESCCH IS F 70
ESCCH IS G 71
ESCCH IS H 72
ESCCH IS I 73
ESCCH IS J 74
ESCCH IS K 75
ESCCH IS L 76
ESCCH IS M 77
ESCCH IS N 78
ESCCH IS O 79
ESCCH IS P 80
ESCCH IS Q 81
ESCCH IS R 82
ESCCH IS S 83
ESCCH IS T 84
ESCCH IS U 85
ESCCH IS V 86
ESCCH IS W 87
ESCCH IS X 88
ESCCH IS Y 89
ESCCH IS Z 90
ESCCH IS [ 91
ESCCH IS \\ 92
ESCCH IS ] 93
ESCCH IS ^ 94
ESCCH IS _ 95
ESCCH IS ` 96
ESCCH IS a 97
ESCCH IS b 98
ESCCH IS c 99
ESCCH IS d 100
ESCCH IS e 101
ESCCH IS f 102
ESCCH IS g 103
ESCCH IS h 104
ESCCH IS i 105
ESCCH IS j 106
ESCCH IS k 107
ESCCH IS l 108
ESCCH IS m 109
ESCCH IS n 110
ESCCH IS o 111
ESCCH IS p 112
ESCCH IS q 113
ESCCH IS r 114
ESCCH IS s 115
ESCCH IS t 116
ESCCH IS u 117
ESCCH IS v 118
ESCCH IS w 119
ESCCH IS x 120
ESCCH IS y 121
ESCCH IS z 122
ESCCH IS { 123
ESCCH IS | 124
ESCCH IS } 125
ESCCH IS ~ 126
#ifndef PROGMEM
#define PROGMEM
#endif
#include <stdint.h>
const uint8_t oledfont_fixed_16[] PROGMEM = {
8 , // Width 
16 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 8, // Char 32   - Nodata
 0x0, 0x0, 0x2, 0x3, // Char 33 ! 
 0x0, 0x2, 0x7, 0x6, // Char 34 " 
 0x0, 0x9, 0x11, 0xb, // Char 35 # 
 0x0, 0x1a, 0xe, 0x9, // Char 36 $ 
 0x0, 0x28, 0x1c, 0x10, // Char 37 % 
 0x0, 0x44, 0x12, 0xb, // Char 38 & 
 0x0, 0x56, 0x1, 0x3, // Char 39 ' 
 0x0, 0x57, 0x8, 0x6, // Char 40 ( 
 0x0, 0x5f, 0x6, 0x5, // Char 41 ) 
 0x0, 0x65, 0x7, 0x6, // Char 42 * 
 0x0, 0x6c, 0xf, 0xa, // Char 43 + 
 0x0, 0x7b, 0x4, 0x4, // Char 44 , 
 0x0, 0x7f, 0x7, 0x6, // Char 45 - 
 0x0, 0x86, 0x4, 0x4, // Char 46 . 
 0x0, 0x8a, 0x9, 0x7, // Char 47 / 
 0x0, 0x93, 0xe, 0x9, // Char 48 0 
 0x0, 0xa1, 0x8, 0x6, // Char 49 1 
 0x0, 0xa9, 0xe, 0x9, // Char 50 2 
 0x0, 0xb7, 0xe, 0x9, // Char 51 3 
 0x0, 0xc5, 0x10, 0xa, // Char 52 4 
 0x0, 0xd5, 0xe, 0x9, // Char 53 5 
 0x0, 0xe3, 0xe, 0x9, // Char 54 6 
 0x0, 0xf1, 0xd, 0x9, // Char 55 7 
 0x0, 0xfe, 0xe, 0x9, // Char 56 8 
 0x1, 0xc, 0xe, 0x9, // Char 57 9 
 0x1, 0x1a, 0x2, 0x3, // Char 58 : 
 0x1, 0x1c, 0x4, 0x4, // Char 59 ; 
 0x1, 0x20, 0x10, 0xa, // Char 60 < 
 0x1, 0x30, 0x10, 0xa, // Char 61 = 
 0x1, 0x40, 0x10, 0xa, // Char 62 > 
 0x1, 0x50, 0xd, 0x9, // Char 63 ? 
 0x1, 0x5d, 0x1c, 0x10, // Char 64 @ 
 0x1, 0x79, 0x14, 0xc, // Char 65 A 
 0x1, 0x8d, 0x12, 0xb, // Char 66 B 
 0x1, 0x9f, 0x14, 0xc, // Char 67 C 
 0x1, 0xb3, 0x13, 0xc, // Char 68 D 
 0x1, 0xc6, 0x12, 0xb, // Char 69 E 
 0x1, 0xd8, 0xf, 0xa, // Char 70 F 
 0x1, 0xe7, 0x14, 0xc, // Char 71 G 
 0x1, 0xfb, 0x12, 0xb, // Char 72 H 
 0x2, 0xd, 0x2, 0x3, // Char 73 I 
 0x2, 0xf, 0xe, 0x9, // Char 74 J 
 0x2, 0x1d, 0x12, 0xb, // Char 75 K 
 0x2, 0x2f, 0x10, 0xa, // Char 76 L 
 0x2, 0x3f, 0x16, 0xd, // Char 77 M 
 0x2, 0x55, 0x12, 0xb, // Char 78 N 
 0x2, 0x67, 0x15, 0xd, // Char 79 O 
 0x2, 0x7c, 0x11, 0xb, // Char 80 P 
 0x2, 0x8d, 0x16, 0xd, // Char 81 Q 
 0x2, 0xa3, 0x14, 0xc, // Char 82 R 
 0x2, 0xb7, 0x12, 0xb, // Char 83 S 
 0x2, 0xc9, 0x13, 0xc, // Char 84 T 
 0x2, 0xdc, 0x12, 0xb, // Char 85 U 
 0x2, 0xee, 0x11, 0xb, // Char 86 V 
 0x2, 0xff, 0x1d, 0x11, // Char 87 W 
 0x3, 0x1c, 0x12, 0xb, // Char 88 X 
 0x3, 0x2e, 0x13, 0xc, // Char 89 Y 
 0x3, 0x41, 0x12, 0xb, // Char 90 Z 
 0x3, 0x53, 0x6, 0x5, // Char 91 [ 
 0x3, 0x59, 0xa, 0x7, // Char 92 Backslash 
 0x3, 0x63, 0x6, 0x5, // Char 93 ] 
 0x3, 0x69, 0xb, 0x8, // Char 94 ^ 
 0x3, 0x74, 0x12, 0xb, // Char 95 _ 
 0x3, 0x86, 0x5, 0x5, // Char 96 ` 
 0x3, 0x8b, 0x10, 0xa, // Char 97 a 
 0x3, 0x9b, 0xe, 0x9, // Char 98 b 
 0x3, 0xa9, 0x10, 0xa, // Char 99 c 
 0x3, 0xb9, 0x10, 0xa, // Char 100 d 
 0x3, 0xc9, 0xe, 0x9, // Char 101 e 
 0x3, 0xd7, 0x7, 0x6, // Char 102 f 
 0x3, 0xde, 0x10, 0xa, // Char 103 g 
 0x3, 0xee, 0xe, 0x9, // Char 104 h 
 0x3, 0xfc, 0x2, 0x3, // Char 105 i 
 0x3, 0xfe, 0x6, 0x5, // Char 106 j 
 0x4, 0x4, 0xe, 0x9, // Char 107 k 
 0x4, 0x12, 0x2, 0x3, // Char 108 l 
 0x4, 0x14, 0x16, 0xd, // Char 109 m 
 0x4, 0x2a, 0xe, 0x9, // Char 110 n 
 0x4, 0x38, 0xe, 0x9, // Char 111 o 
 0x4, 0x46, 0xe, 0x9, // Char 112 p 
 0x4, 0x54, 0x10, 0xa, // Char 113 q 
 0x4, 0x64, 0x7, 0x6, // Char 114 r 
 0x4, 0x6b, 0xc, 0x8, // Char 115 s 
 0x4, 0x77, 0x8, 0x6, // Char 116 t 
 0x4, 0x7f, 0xe, 0x9, // Char 117 u 
 0x4, 0x8d, 0xf, 0xa, // Char 118 v 
 0x4, 0x9c, 0x15, 0xd, // Char 119 w 
 0x4, 0xb1, 0xc, 0x8, // Char 120 x 
 0x4, 0xbd, 0xf, 0xa, // Char 121 y 
 0x4, 0xcc, 0xe, 0x9, // Char 122 z 
 0x4, 0xda, 0x6, 0x5, // Char 123 { 
 0x4, 0xe0, 0x4, 0x4, // Char 124 | 
 0x4, 0xe4, 0x8, 0x6, // Char 125 } 
 0x4, 0xec, 0xd, 0x9, // Char 126 ~ 

// Data Table:
0xff , 0xd , // Char 33 !
0xf , 0x0 , 0x0 , 0x0 , 0x7 , 0x0 , 0xf , // Char 34 "
0x80 , 0x0 , 0x88 , 0xc , 0xf8 , 0xf , 0xbf , 0x0 , 0x89 , 0x8 , 0xe8 , 0xf , 0xff , 0x0 , 0x8b , 0x0 , 0x8 , // Char 35 #
0x1e , 0x7 , 0x33 , 0xc , 0x21 , 0x8 , 0xff , 0x3f , 0x61 , 0x8 , 0x43 , 0xc , 0xc6 , 0x7 , // Char 36 $
0xc , 0x0 , 0x1e , 0x0 , 0x23 , 0x0 , 0x21 , 0x0 , 0x33 , 0xc , 0x1e , 0x3 , 0xc0 , 0x0 , 0x30 , 0x0 , 0x1c , 0x3 , 0xc7 , 0xf , 0x41 , 0x8 , 0x40 , 0x8 , 0xc0 , 0xf , 0x0 , 0x3 , // Char 37 %
0x80 , 0x7 , 0xce , 0xc , 0x7f , 0xc , 0x71 , 0x8 , 0xf3 , 0xc , 0x9e , 0x7 , 0x4 , 0x7 , 0xc0 , 0xf , 0x0 , 0x8 , // Char 38 &
0xf , // Char 39 '
0xe0 , 0x7 , 0xfc , 0x3f , 0x7 , 0xe0 , 0x1 , 0x80 , // Char 40 (
0x3 , 0xc0 , 0x3c , 0x3c , 0xf0 , 0xf , // Char 41 )
0x16 , 0x0 , 0xf , 0x0 , 0xf , 0x0 , 0x1e , // Char 42 *
0x80 , 0x0 , 0x80 , 0x0 , 0x80 , 0x0 , 0xf0 , 0xf , 0x80 , 0x0 , 0x80 , 0x0 , 0x80 , 0x0 , 0x80 , // Char 43 +
0x0 , 0x4c , 0x0 , 0x3c , // Char 44 ,
0x80 , 0x0 , 0x80 , 0x0 , 0x80 , 0x0 , 0x80 , // Char 45 -
0x0 , 0xc , 0x0 , 0xc , // Char 46 .
0x0 , 0xe , 0xc0 , 0x3 , 0x78 , 0x0 , 0xf , 0x0 , 0x1 , // Char 47 /
0xfc , 0x3 , 0x6 , 0x6 , 0x3 , 0xc , 0x1 , 0x8 , 0x3 , 0xc , 0x9e , 0x7 , 0xfc , 0x3 , // Char 48 0
0xc , 0x0 , 0xc , 0x0 , 0xff , 0xf , 0xff , 0xf , // Char 49 1
0xe , 0xe , 0x7 , 0xf , 0x83 , 0xd , 0xc1 , 0xc , 0x43 , 0xc , 0x77 , 0xc , 0x3e , 0xc , // Char 50 2
0xe , 0x7 , 0x7 , 0xc , 0x23 , 0xc , 0x21 , 0x8 , 0x63 , 0xc , 0xfe , 0x6 , 0xcc , 0x3 , // Char 51 3
0x0 , 0x1 , 0xc0 , 0x1 , 0x70 , 0x1 , 0x18 , 0x1 , 0xe , 0x1 , 0xff , 0xf , 0xff , 0xf , 0x0 , 0x1 , // Char 52 4
0x3e , 0x6 , 0x3f , 0xc , 0x13 , 0xc , 0x13 , 0x8 , 0x33 , 0xc , 0x73 , 0x6 , 0xe1 , 0x3 , // Char 53 5
0xfc , 0x3 , 0x66 , 0x6 , 0x33 , 0xc , 0x11 , 0x8 , 0x33 , 0xc , 0x77 , 0x6 , 0xe6 , 0x3 , // Char 54 6
0x3 , 0x0 , 0x3 , 0x8 , 0x3 , 0xf , 0xe3 , 0x1 , 0x33 , 0x0 , 0xf , 0x0 , 0x7 , // Char 55 7
0xde , 0x7 , 0x7f , 0xc , 0x23 , 0xc , 0x21 , 0x8 , 0x63 , 0xc , 0xfe , 0x6 , 0xcc , 0x7 , // Char 56 8
0x3e , 0x6 , 0x63 , 0xe , 0x43 , 0xc , 0x41 , 0x8 , 0x43 , 0xc , 0xfe , 0x7 , 0xfc , 0x3 , // Char 57 9
0x18 , 0xc , // Char 58 :
0x18 , 0x6c , 0x8 , 0x18 , // Char 59 ;
0x80 , 0x1 , 0x80 , 0x3 , 0xc0 , 0x2 , 0x40 , 0x2 , 0x60 , 0x6 , 0x20 , 0x4 , 0x30 , 0xc , 0x10 , 0x8 , // Char 60 <
0x40 , 0x2 , 0x40 , 0x2 , 0x40 , 0x2 , 0x40 , 0x2 , 0x40 , 0x2 , 0x40 , 0x2 , 0x40 , 0x2 , 0x40 , 0x2 , // Char 61 =
0x30 , 0xc , 0x20 , 0xc , 0x60 , 0x4 , 0x40 , 0x6 , 0xc0 , 0x2 , 0x80 , 0x3 , 0x80 , 0x1 , 0x0 , 0x1 , // Char 62 >
0xc , 0x0 , 0xe , 0x0 , 0x3 , 0x0 , 0xc1 , 0xd , 0xe3 , 0x0 , 0x3f , 0x0 , 0x1e , // Char 63 ?
0xf0 , 0x7 , 0x18 , 0xc , 0xc , 0x18 , 0xc6 , 0x31 , 0xf2 , 0x37 , 0x13 , 0x24 , 0x9 , 0x24 , 0x9 , 0x26 , 0x9b , 0x27 , 0xfb , 0x27 , 0x1a , 0x4 , 0x6 , 0x6 , 0x1c , 0x3 , 0xf8 , 0x1 , // Char 64 @
0x0 , 0x8 , 0x0 , 0xf , 0xe0 , 0x3 , 0xf8 , 0x0 , 0x8f , 0x0 , 0x83 , 0x0 , 0x9f , 0x0 , 0xf8 , 0x1 , 0xc0 , 0x7 , 0x0 , 0xe , // Char 65 A
0xff , 0xf , 0xff , 0xf , 0x21 , 0x8 , 0x21 , 0x8 , 0x21 , 0x8 , 0x23 , 0x8 , 0x73 , 0xc , 0xde , 0x7 , 0x80 , 0x3 , // Char 66 B
0xf8 , 0x1 , 0x9e , 0x7 , 0x6 , 0x6 , 0x3 , 0xc , 0x3 , 0xc , 0x3 , 0xc , 0x3 , 0xc , 0x6 , 0x6 , 0x8e , 0x7 , 0x0 , 0x1 , // Char 67 C
0xff , 0xf , 0xff , 0xf , 0x1 , 0x8 , 0x1 , 0x8 , 0x1 , 0x8 , 0x3 , 0xc , 0x3 , 0xc , 0x6 , 0x6 , 0xfc , 0x3 , 0xf0 , // Char 68 D
0xff , 0xf , 0xff , 0xf , 0x21 , 0x8 , 0x21 , 0x8 , 0x21 , 0x8 , 0x21 , 0x8 , 0x21 , 0x8 , 0x21 , 0x8 , 0x1 , 0x8 , // Char 69 E
0xff , 0xf , 0xff , 0xf , 0x21 , 0x0 , 0x21 , 0x0 , 0x21 , 0x0 , 0x21 , 0x0 , 0x21 , 0x0 , 0x21 , // Char 70 F
0xf8 , 0x1 , 0x8e , 0x7 , 0x6 , 0x6 , 0x3 , 0xc , 0x3 , 0xc , 0x21 , 0x8 , 0x23 , 0xc , 0x23 , 0x4 , 0x26 , 0x6 , 0xe4 , 0xf , // Char 71 G
0xff , 0xf , 0xff , 0xf , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0x20 , 0x0 , 0xff , 0xf , // Char 72 H
0xff , 0xf , // Char 73 I
0x0 , 0x3 , 0x0 , 0x7 , 0x0 , 0xc , 0x0 , 0x8 , 0x0 , 0xc , 0xff , 0x7 , 0xff , 0x3 , // Char 74 J
0xff , 0xf , 0xff , 0xf , 0x60 , 0x0 , 0x30 , 0x0 , 0x78 , 0x0 , 0xcc , 0x1 , 0x86 , 0x3 , 0x3 , 0xe , 0x1 , 0xc , // Char 75 K
0xff , 0xf , 0xff , 0xf , 0x0 , 0x8 , 0x0 , 0x8 , 0x0 , 0x8 , 0x0 , 0x8 , 0x0 , 0x8 , 0x0 , 0x8 , // Char 76 L
0xff , 0xf , 0xff , 0xf , 0x1f , 0x0 , 0xf0 , 0x0 , 0x80 , 0x7 , 0x0 , 0xe , 0x0 , 0xf , 0xe0 , 0x1 , 0x3c , 0x0 , 0xf , 0x0 , 0xff , 0xf , // Char 77 M
0xff , 0xf , 0xff , 0xf , 0xe , 0x0 , 0x18 , 0x0 , 0x70 , 0x0 , 0xc0 , 0x1 , 0x80 , 0x3 , 0x0 , 0xe , 0xff , 0xf , // Char 78 N
0xf8 , 0x1 , 0xe , 0x7 , 0x6 , 0x6 , 0x3 , 0xc , 0x3 , 0xc , 0x3 , 0xc , 0x3 , 0xc , 0x3 , 0xc , 0x6 , 0x6 , 0xfc , 0x3 , 0xf0 , // Char 79 O
0xff , 0xf , 0xff , 0xf , 0x41 , 0x0 , 0x41 , 0x0 , 0x41 , 0x0 , 0x43 , 0x0 , 0x63 , 0x0 , 0x7e , 0x0 , 0x3c , // Char 80 P
0xf8 , 0x1 , 0xe , 0x7 , 0x6 , 0x6 , 0x3 , 0xc , 0x3 , 0xc , 0x3 , 0xc , 0x3 , 0xe , 0x3 , 0xe , 0x6 , 0x6 , 0xfc , 0xf , 0xf0 , 0x8 , // Char 81 Q
0xff , 0xf , 0xff , 0xf , 0x21 , 0x0 , 0x21 , 0x0 , 0x21 , 0x0 , 0x21 , 0x0 , 0x23 , 0x0 , 0xf3 , 0x0 , 0xde , 0xf , 0x0 , 0x8 , // Char 82 R
0x1c , 0x3 , 0x3e , 0x6 , 0x33 , 0xc , 0x23 , 0xc , 0x61 , 0x8 , 0x63 , 0xc , 0x43 , 0xc , 0xce , 0x7 , 0x80 , 0x3 , // Char 83 S
0x1 , 0x0 , 0x1 , 0x0 , 0x1 , 0x0 , 0x1 , 0x0 , 0xff , 0xf , 0xff , 0xf , 0x1 , 0x0 , 0x1 , 0x0 , 0x1 , 0x0 , 0x1 , // Char 84 T
0xff , 0x1 , 0xff , 0x7 , 0x0 , 0xc , 0x0 , 0xc , 0x0 , 0x8 , 0x0 , 0xc , 0x0 , 0xc , 0x0 , 0x6 , 0xff , 0x7 , // Char 85 U
0x7 , 0x0 , 0x3e , 0x0 , 0xf0 , 0x1 , 0x80 , 0xf , 0x0 , 0xe , 0x80 , 0xf , 0xf0 , 0x1 , 0x3f , 0x0 , 0x7 , // Char 86 V
0x1 , 0x0 , 0x1f , 0x0 , 0xfc , 0x1 , 0xc0 , 0xf , 0x0 , 0xf , 0xe0 , 0x3 , 0x3e , 0x0 , 0x7 , 0x0 , 0x3f , 0x0 , 0xf0 , 0x1 , 0x80 , 0xf , 0x80 , 0xf , 0xf8 , 0x3 , 0x3f , 0x0 , 0x3 , // Char 87 W
0x1 , 0xc , 0x7 , 0xe , 0x8c , 0x3 , 0xf8 , 0x0 , 0x70 , 0x0 , 0xf8 , 0x1 , 0xe , 0x3 , 0x7 , 0xe , 0x1 , 0x8 , // Char 88 X
0x1 , 0x0 , 0x3 , 0x0 , 0xe , 0x0 , 0x1c , 0x0 , 0x70 , 0x0 , 0xe0 , 0xf , 0x70 , 0x0 , 0x1c , 0x0 , 0xf , 0x0 , 0x3 , // Char 89 Y
0x0 , 0x8 , 0x1 , 0xe , 0x1 , 0xf , 0x81 , 0x9 , 0xe1 , 0x8 , 0x31 , 0x8 , 0x19 , 0x8 , 0xf , 0x8 , 0x3 , 0x8 , // Char 90 Z
0xff , 0xff , 0x1 , 0x80 , 0x1 , 0x80 , // Char 91 [
0x7 , 0x0 , 0x3c , 0x0 , 0xe0 , 0x1 , 0x0 , 0xf , 0x0 , 0x8 , // Char 92 Backslash
0x1 , 0x80 , 0x1 , 0x80 , 0xff , 0xff , // Char 93 ]
0x30 , 0x0 , 0xe , 0x0 , 0x3 , 0x0 , 0x7 , 0x0 , 0x3c , 0x0 , 0x20 , // Char 94 ^
0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0x40 , 0x0 , 0x40 , // Char 95 _
0x1 , 0x0 , 0x3 , 0x0 , 0x2 , // Char 96 `
0x30 , 0x7 , 0x98 , 0xd , 0x98 , 0x8 , 0x88 , 0x8 , 0x98 , 0x4 , 0xf8 , 0x7 , 0xe0 , 0xf , 0x0 , 0x8 , // Char 97 a
0xff , 0xf , 0x30 , 0x6 , 0x18 , 0xc , 0x8 , 0x8 , 0x18 , 0xc , 0x38 , 0xe , 0xf0 , 0x7 , // Char 98 b
0x80 , 0x0 , 0xf0 , 0x7 , 0x18 , 0xc , 0x18 , 0xc , 0x8 , 0x8 , 0x18 , 0xc , 0x30 , 0x6 , 0x0 , 0x2 , // Char 99 c
0xc0 , 0x1 , 0xf0 , 0x7 , 0x18 , 0xc , 0x18 , 0xc , 0x8 , 0x8 , 0x18 , 0xc , 0xf8 , 0x7 , 0xff , 0xf , // Char 100 d
0xe0 , 0x7 , 0xb0 , 0x4 , 0x98 , 0xc , 0x88 , 0x8 , 0x98 , 0xc , 0xb0 , 0x6 , 0xe0 , 0x6 , // Char 101 e
0x8 , 0x0 , 0xfe , 0xf , 0xff , 0xf , 0x9 , // Char 102 f
0x80 , 0x0 , 0xf0 , 0x67 , 0x18 , 0xec , 0x18 , 0x8c , 0x8 , 0x88 , 0x18 , 0xc4 , 0xf8 , 0x7f , 0xf8 , 0x1f , // Char 103 g
0xff , 0xf , 0xff , 0xf , 0x18 , 0x0 , 0x8 , 0x0 , 0x18 , 0x0 , 0xf8 , 0xf , 0xf0 , 0xf , // Char 104 h
0xfb , 0xf , // Char 105 i
0x0 , 0x80 , 0xfb , 0xff , 0xf9 , 0x3f , // Char 106 j
0xff , 0xf , 0xc0 , 0x0 , 0xe0 , 0x0 , 0xf0 , 0x1 , 0x18 , 0x7 , 0x8 , 0xe , 0x0 , 0x8 , // Char 107 k
0xff , 0xf , // Char 108 l
0xf8 , 0xf , 0xf0 , 0xf , 0x18 , 0x0 , 0x8 , 0x0 , 0x18 , 0x0 , 0xf0 , 0xf , 0x30 , 0x0 , 0x18 , 0x0 , 0x8 , 0x0 , 0x18 , 0x0 , 0xf0 , 0xf , // Char 109 m
0xf8 , 0xf , 0xf0 , 0xf , 0x18 , 0x0 , 0x8 , 0x0 , 0x18 , 0x0 , 0xf8 , 0xf , 0xf0 , 0xf , // Char 110 n
0xf0 , 0x7 , 0x38 , 0xe , 0x18 , 0xc , 0x8 , 0x8 , 0x18 , 0xc , 0x30 , 0x6 , 0xe0 , 0x3 , // Char 111 o
0xf8 , 0xff , 0x30 , 0x6 , 0x18 , 0xc , 0x8 , 0x8 , 0x18 , 0xc , 0x38 , 0xe , 0xf0 , 0x7 , // Char 112 p
0xc0 , 0x1 , 0xf0 , 0x7 , 0x18 , 0xc , 0x18 , 0xc , 0x8 , 0x8 , 0x18 , 0xc , 0xf0 , 0x7 , 0xf8 , 0xff , // Char 113 q
0xf8 , 0xf , 0xf0 , 0xf , 0x18 , 0x0 , 0x18 , // Char 114 r
0x70 , 0x6 , 0xd8 , 0xc , 0x88 , 0x8 , 0x98 , 0x8 , 0x98 , 0xd , 0x30 , 0x7 , // Char 115 s
0x8 , 0x0 , 0xfe , 0x7 , 0xfe , 0xf , 0x8 , 0x8 , // Char 116 t
0xf8 , 0x7 , 0x0 , 0xe , 0x0 , 0x8 , 0x0 , 0x8 , 0x0 , 0x4 , 0xf8 , 0xf , 0xf8 , 0xf , // Char 117 u
0x8 , 0x0 , 0x78 , 0x0 , 0xe0 , 0x3 , 0x0 , 0xe , 0x0 , 0xf , 0xe0 , 0x3 , 0x78 , 0x0 , 0x8 , // Char 118 v
0x18 , 0x0 , 0xf8 , 0x1 , 0xc0 , 0xf , 0x0 , 0xe , 0xf0 , 0x3 , 0x38 , 0x0 , 0xf8 , 0x1 , 0x80 , 0xf , 0x0 , 0xf , 0xf0 , 0x3 , 0x38 , // Char 119 w
0x18 , 0xc , 0x30 , 0x7 , 0xe0 , 0x1 , 0xe0 , 0x3 , 0x30 , 0x6 , 0x18 , 0xc , // Char 120 x
0x8 , 0x0 , 0x78 , 0x80 , 0xe0 , 0xc3 , 0x0 , 0x7e , 0x0 , 0x1f , 0xe0 , 0x3 , 0x78 , 0x0 , 0x8 , // Char 121 y
0x0 , 0x8 , 0x8 , 0xe , 0x8 , 0xf , 0x88 , 0x9 , 0xe8 , 0x8 , 0x38 , 0x8 , 0x18 , 0x8 , // Char 122 z
0x80 , 0x1 , 0xfe , 0x7e , 0x1 , 0x80 , // Char 123 {
0xff , 0xff , 0xff , 0xff , // Char 124 |
0x1 , 0x80 , 0x3 , 0xc0 , 0xfe , 0x7f , 0x80 , 0x1 , // Char 125 }
0x60 , 0x0 , 0x30 , 0x0 , 0x30 , 0x0 , 0x20 , 0x0 , 0x60 , 0x0 , 0x40 , 0x0 , 0x70 , // Char 126 ~
};
