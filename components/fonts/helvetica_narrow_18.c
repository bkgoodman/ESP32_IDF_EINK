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
const uint8_t oledfont_Helvetica_Narrow_18[] PROGMEM = {
8 , // Width 
18 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 8, // Char 32   - Nodata
 0x0, 0x0, 0x5, 0x4, // Char 33 ! 
 0x0, 0x5, 0x7, 0x5, // Char 34 " 
 0x0, 0xc, 0x16, 0xa, // Char 35 # 
 0x0, 0x22, 0x17, 0xa, // Char 36 $ 
 0x0, 0x39, 0x26, 0xf, // Char 37 % 
 0x0, 0x5f, 0x17, 0xa, // Char 38 & 
 0x0, 0x76, 0x1, 0x3, // Char 39 ' 
 0x0, 0x77, 0x9, 0x5, // Char 40 ( 
 0x0, 0x80, 0x8, 0x5, // Char 41 ) 
 0x0, 0x88, 0xa, 0x6, // Char 42 * 
 0x0, 0x92, 0x14, 0x9, // Char 43 + 
 0x0, 0xa6, 0x5, 0x4, // Char 44 , 
 0x0, 0xab, 0x8, 0x5, // Char 45 - 
 0x0, 0xb3, 0x5, 0x4, // Char 46 . 
 0x0, 0xb8, 0xa, 0x6, // Char 47 / 
 0x0, 0xc2, 0x17, 0xa, // Char 48 0 
 0x0, 0xd9, 0x8, 0x5, // Char 49 1 
 0x0, 0xe1, 0x17, 0xa, // Char 50 2 
 0x0, 0xf8, 0x14, 0x9, // Char 51 3 
 0x1, 0xc, 0x17, 0xa, // Char 52 4 
 0x1, 0x23, 0x14, 0x9, // Char 53 5 
 0x1, 0x37, 0x14, 0x9, // Char 54 6 
 0x1, 0x4b, 0x16, 0xa, // Char 55 7 
 0x1, 0x61, 0x14, 0x9, // Char 56 8 
 0x1, 0x75, 0x13, 0x9, // Char 57 9 
 0x1, 0x88, 0x5, 0x4, // Char 58 : 
 0x1, 0x8d, 0x5, 0x4, // Char 59 ; 
 0x1, 0x92, 0x14, 0x9, // Char 60 < 
 0x1, 0xa6, 0x14, 0x9, // Char 61 = 
 0x1, 0xba, 0x14, 0x9, // Char 62 > 
 0x1, 0xce, 0x10, 0x8, // Char 63 ? 
 0x1, 0xde, 0x1f, 0xd, // Char 64 @ 
 0x1, 0xfd, 0x1d, 0xc, // Char 65 A 
 0x2, 0x1a, 0x17, 0xa, // Char 66 B 
 0x2, 0x31, 0x1a, 0xb, // Char 67 C 
 0x2, 0x4b, 0x1a, 0xb, // Char 68 D 
 0x2, 0x65, 0x17, 0xa, // Char 69 E 
 0x2, 0x7c, 0x16, 0xa, // Char 70 F 
 0x2, 0x92, 0x1a, 0xb, // Char 71 G 
 0x2, 0xac, 0x1a, 0xb, // Char 72 H 
 0x2, 0xc6, 0x5, 0x4, // Char 73 I 
 0x2, 0xcb, 0x11, 0x8, // Char 74 J 
 0x2, 0xdc, 0x1a, 0xb, // Char 75 K 
 0x2, 0xf6, 0x14, 0x9, // Char 76 L 
 0x3, 0xa, 0x1d, 0xc, // Char 77 M 
 0x3, 0x27, 0x1a, 0xb, // Char 78 N 
 0x3, 0x41, 0x1d, 0xc, // Char 79 O 
 0x3, 0x5e, 0x16, 0xa, // Char 80 P 
 0x3, 0x74, 0x1d, 0xc, // Char 81 Q 
 0x3, 0x91, 0x1a, 0xb, // Char 82 R 
 0x3, 0xab, 0x17, 0xa, // Char 83 S 
 0x3, 0xc2, 0x19, 0xb, // Char 84 T 
 0x3, 0xdb, 0x1a, 0xb, // Char 85 U 
 0x3, 0xf5, 0x19, 0xb, // Char 86 V 
 0x4, 0xe, 0x28, 0x10, // Char 87 W 
 0x4, 0x36, 0x1a, 0xb, // Char 88 X 
 0x4, 0x50, 0x19, 0xb, // Char 89 Y 
 0x4, 0x69, 0x1a, 0xb, // Char 90 Z 
 0x4, 0x83, 0x9, 0x5, // Char 91 [ 
 0x4, 0x8c, 0xb, 0x6, // Char 92 Backslash 
 0x4, 0x97, 0x9, 0x5, // Char 93 ] 
 0x4, 0xa0, 0x13, 0x9, // Char 94 ^ 
 0x4, 0xb3, 0x17, 0xa, // Char 95 _ 
 0x4, 0xca, 0x4, 0x4, // Char 96 ` 
 0x4, 0xce, 0x14, 0x9, // Char 97 a 
 0x4, 0xe2, 0x14, 0x9, // Char 98 b 
 0x4, 0xf6, 0x14, 0x9, // Char 99 c 
 0x5, 0xa, 0x14, 0x9, // Char 100 d 
 0x5, 0x1e, 0x13, 0x9, // Char 101 e 
 0x5, 0x31, 0xa, 0x6, // Char 102 f 
 0x5, 0x3b, 0x11, 0x8, // Char 103 g 
 0x5, 0x4c, 0x11, 0x8, // Char 104 h 
 0x5, 0x5d, 0x2, 0x3, // Char 105 i 
 0x5, 0x5f, 0x6, 0x4, // Char 106 j 
 0x5, 0x65, 0x11, 0x8, // Char 107 k 
 0x5, 0x76, 0x2, 0x3, // Char 108 l 
 0x5, 0x78, 0x1d, 0xc, // Char 109 m 
 0x5, 0x95, 0x11, 0x8, // Char 110 n 
 0x5, 0xa6, 0x17, 0xa, // Char 111 o 
 0x5, 0xbd, 0x14, 0x9, // Char 112 p 
 0x5, 0xd1, 0x15, 0x9, // Char 113 q 
 0x5, 0xe6, 0xa, 0x6, // Char 114 r 
 0x5, 0xf0, 0x11, 0x8, // Char 115 s 
 0x6, 0x1, 0xb, 0x6, // Char 116 t 
 0x6, 0xc, 0x11, 0x8, // Char 117 u 
 0x6, 0x1d, 0x13, 0x9, // Char 118 v 
 0x6, 0x30, 0x1c, 0xc, // Char 119 w 
 0x6, 0x4c, 0x14, 0x9, // Char 120 x 
 0x6, 0x60, 0x13, 0x9, // Char 121 y 
 0x6, 0x73, 0x14, 0x9, // Char 122 z 
 0x6, 0x87, 0x9, 0x5, // Char 123 { 
 0x6, 0x90, 0x5, 0x4, // Char 124 | 
 0x6, 0x95, 0x8, 0x5, // Char 125 } 
 0x6, 0x9d, 0x13, 0x9, // Char 126 ~ 

// Data Table:
0xff , 0x1b , 0x0 , 0xff , 0x1b , // Char 33 !
0x1f , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1f , // Char 34 "
0x0 , 0x1 , 0x0 , 0x10 , 0x11 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x3f , 0x1 , 0x0 , 0x10 , 0x1b , 0x0 , 0xfe , 0xf , 0x0 , 0x17 , 0x1 , 0x0 , 0x10 , // Char 35 #
0x0 , 0x2 , 0x0 , 0x3e , 0xe , 0x0 , 0x73 , 0x18 , 0x0 , 0x63 , 0x18 , 0x0 , 0xe3 , 0x18 , 0x0 , 0xc3 , 0x18 , 0x0 , 0xc6 , 0xf , 0x0 , 0x0 , 0x7 , // Char 36 $
0x8 , 0x0 , 0x0 , 0x7f , 0x0 , 0x0 , 0x41 , 0x0 , 0x0 , 0x63 , 0x10 , 0x0 , 0x3e , 0xc , 0x0 , 0x0 , 0x3 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x86 , 0xf , 0x0 , 0xc1 , 0x18 , 0x0 , 0x40 , 0x10 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x0 , 0x7 , // Char 37 %
0x80 , 0xf , 0x0 , 0xde , 0x18 , 0x0 , 0x73 , 0x18 , 0x0 , 0xe3 , 0x18 , 0x0 , 0x9f , 0x19 , 0x0 , 0xe , 0xf , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x18 , // Char 38 &
0x1f , // Char 39 '
0xf0 , 0x1f , 0x0 , 0xfc , 0x7f , 0x0 , 0x7 , 0xc0 , 0x1 , // Char 40 (
0x7 , 0xc0 , 0x1 , 0xfc , 0x7f , 0x0 , 0xe0 , 0xf , // Char 41 )
0x14 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x6 , // Char 42 *
0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0xf8 , 0x1f , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 43 +
0x0 , 0x98 , 0x0 , 0x0 , 0x78 , // Char 44 ,
0x80 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x1 , // Char 45 -
0x0 , 0x18 , 0x0 , 0x0 , 0x18 , // Char 46 .
0x0 , 0x1c , 0x0 , 0xc0 , 0x7 , 0x0 , 0x78 , 0x0 , 0x0 , 0xf , // Char 47 /
0x40 , 0x0 , 0x0 , 0xfc , 0x7 , 0x0 , 0x6 , 0xc , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x7 , 0x1c , 0x0 , 0xfe , 0xf , 0x0 , 0xf0 , 0x1 , // Char 48 0
0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xff , 0x1f , // Char 49 1
0x0 , 0x18 , 0x0 , 0x1e , 0x1e , 0x0 , 0x7 , 0x1b , 0x0 , 0x83 , 0x19 , 0x0 , 0xc3 , 0x18 , 0x0 , 0xc3 , 0x18 , 0x0 , 0x7e , 0x18 , 0x0 , 0x8 , 0x10 , // Char 50 2
0xe , 0xf , 0x0 , 0x3 , 0x18 , 0x0 , 0x23 , 0x18 , 0x0 , 0x23 , 0x18 , 0x0 , 0x73 , 0x18 , 0x0 , 0xde , 0xf , 0x0 , 0x80 , 0x3 , // Char 51 3
0x0 , 0x3 , 0x0 , 0x80 , 0x3 , 0x0 , 0x60 , 0x2 , 0x0 , 0x18 , 0x2 , 0x0 , 0xe , 0x2 , 0x0 , 0xff , 0x1f , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 52 4
0x7f , 0xe , 0x0 , 0x37 , 0x18 , 0x0 , 0x33 , 0x18 , 0x0 , 0x33 , 0x18 , 0x0 , 0x33 , 0x18 , 0x0 , 0xe3 , 0xf , 0x0 , 0x80 , 0x1 , // Char 53 5
0xfc , 0x7 , 0x0 , 0x66 , 0xc , 0x0 , 0x33 , 0x18 , 0x0 , 0x13 , 0x18 , 0x0 , 0x33 , 0x18 , 0x0 , 0xe6 , 0xf , 0x0 , 0x80 , 0x3 , // Char 54 6
0x2 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x1c , 0x0 , 0x83 , 0x1f , 0x0 , 0xe3 , 0x1 , 0x0 , 0x3b , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3 , // Char 55 7
0xde , 0xf , 0x0 , 0x73 , 0x18 , 0x0 , 0x63 , 0x18 , 0x0 , 0x23 , 0x18 , 0x0 , 0x73 , 0x18 , 0x0 , 0xde , 0xf , 0x0 , 0x0 , 0x3 , // Char 56 8
0x7e , 0xe , 0x0 , 0xc3 , 0x18 , 0x0 , 0x83 , 0x18 , 0x0 , 0x83 , 0x18 , 0x0 , 0xc3 , 0xc , 0x0 , 0xfe , 0x7 , 0x0 , 0xf0 , // Char 57 9
0x18 , 0x18 , 0x0 , 0x18 , 0x18 , // Char 58 :
0x18 , 0x98 , 0x0 , 0x18 , 0x78 , // Char 59 ;
0x80 , 0x1 , 0x0 , 0x80 , 0x3 , 0x0 , 0xc0 , 0x6 , 0x0 , 0x40 , 0x6 , 0x0 , 0x60 , 0xc , 0x0 , 0x30 , 0xc , 0x0 , 0x30 , 0x18 , // Char 60 <
0x40 , 0x4 , 0x0 , 0x40 , 0x4 , 0x0 , 0x40 , 0x4 , 0x0 , 0x40 , 0x4 , 0x0 , 0x40 , 0x4 , 0x0 , 0x40 , 0x4 , 0x0 , 0x40 , 0x4 , // Char 61 =
0x30 , 0x8 , 0x0 , 0x20 , 0xc , 0x0 , 0x60 , 0x4 , 0x0 , 0x40 , 0x6 , 0x0 , 0xc0 , 0x2 , 0x0 , 0x80 , 0x3 , 0x0 , 0x80 , 0x1 , // Char 62 >
0xe , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x3 , 0x1b , 0x0 , 0xc3 , 0x1b , 0x0 , 0x63 , 0x0 , 0x0 , 0x3e , // Char 63 ?
0xf0 , 0x1 , 0x0 , 0xbc , 0x7 , 0x0 , 0xe6 , 0xc , 0x0 , 0xfb , 0x1b , 0x0 , 0xf , 0x1a , 0x0 , 0x5 , 0x12 , 0x0 , 0x8d , 0x13 , 0x0 , 0xfb , 0x1b , 0x0 , 0xe , 0xb , 0x0 , 0x8c , 0x5 , 0x0 , 0x78 , // Char 64 @
0x0 , 0x10 , 0x0 , 0x0 , 0x1f , 0x0 , 0xe0 , 0x3 , 0x0 , 0xfc , 0x1 , 0x0 , 0x87 , 0x1 , 0x0 , 0x8f , 0x1 , 0x0 , 0xfc , 0x1 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x10 , // Char 65 A
0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0x23 , 0x18 , 0x0 , 0x23 , 0x18 , 0x0 , 0x23 , 0x18 , 0x0 , 0x73 , 0x18 , 0x0 , 0xff , 0x1c , 0x0 , 0xcc , 0xf , // Char 66 B
0xf8 , 0x3 , 0x0 , 0xe , 0xe , 0x0 , 0x7 , 0x1c , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0xc , 0x0 , 0xe , 0xf , 0x0 , 0xc , 0x3 , // Char 67 C
0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x6 , 0xc , 0x0 , 0xfe , 0xf , 0x0 , 0xf8 , 0x3 , // Char 68 D
0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0x63 , 0x18 , 0x0 , 0x63 , 0x18 , 0x0 , 0x63 , 0x18 , 0x0 , 0x63 , 0x18 , 0x0 , 0x63 , 0x18 , 0x0 , 0x43 , 0x18 , // Char 69 E
0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0x63 , 0x0 , 0x0 , 0x63 , 0x0 , 0x0 , 0x63 , 0x0 , 0x0 , 0x63 , 0x0 , 0x0 , 0x63 , 0x0 , 0x0 , 0x1 , // Char 70 F
0xf8 , 0x3 , 0x0 , 0x1e , 0xe , 0x0 , 0x6 , 0x1c , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x63 , 0x18 , 0x0 , 0x63 , 0x18 , 0x0 , 0x66 , 0xe , 0x0 , 0xec , 0x1f , // Char 71 G
0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0x60 , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0xff , 0x1f , // Char 72 H
0xff , 0x1f , 0x0 , 0xff , 0x1f , // Char 73 I
0x0 , 0x6 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0xff , 0xf , // Char 74 J
0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0x60 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x8e , 0x7 , 0x0 , 0x7 , 0xe , 0x0 , 0x3 , 0x18 , 0x0 , 0x0 , 0x10 , // Char 75 K
0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , // Char 76 L
0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0x3e , 0x0 , 0x0 , 0xe0 , 0x3 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x1c , 0x0 , 0xc0 , 0x7 , 0x0 , 0x7c , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xff , 0x1f , // Char 77 M
0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0x1e , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xe , 0x0 , 0xff , 0x1f , 0x0 , 0xff , 0x1f , // Char 78 N
0xf8 , 0x3 , 0x0 , 0xe , 0xe , 0x0 , 0x6 , 0xc , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x6 , 0xc , 0x0 , 0xfc , 0x7 , 0x0 , 0xf0 , 0x1 , // Char 79 O
0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x77 , 0x0 , 0x0 , 0x3e , // Char 80 P
0xf8 , 0x3 , 0x0 , 0xe , 0xe , 0x0 , 0x6 , 0xc , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x18 , 0x0 , 0x3 , 0x1e , 0x0 , 0x6 , 0xc , 0x0 , 0xfc , 0x1f , 0x0 , 0xf0 , 0x11 , // Char 81 Q
0xff , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xe3 , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0x1c , 0x1e , // Char 82 R
0x1c , 0x6 , 0x0 , 0x3e , 0xc , 0x0 , 0x63 , 0x18 , 0x0 , 0x63 , 0x18 , 0x0 , 0x43 , 0x18 , 0x0 , 0xc3 , 0x18 , 0x0 , 0xce , 0xd , 0x0 , 0x8c , 0x7 , // Char 83 S
0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xff , 0x1f , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , // Char 84 T
0xff , 0x7 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xc , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0x1 , // Char 85 U
0x1 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xfc , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x1e , 0x0 , 0xe0 , 0x7 , 0x0 , 0x7e , 0x0 , 0x0 , 0xf , // Char 86 V
0x3 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x7 , 0x0 , 0x0 , 0x1e , 0x0 , 0x80 , 0x1f , 0x0 , 0xf8 , 0x1 , 0x0 , 0xf , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x1f , 0x0 , 0xf8 , 0x7 , 0x0 , 0x3f , 0x0 , 0x0 , 0x1 , // Char 87 W
0x0 , 0x10 , 0x0 , 0x3 , 0x18 , 0x0 , 0xf , 0xe , 0x0 , 0x9c , 0x3 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x9c , 0x7 , 0x0 , 0xf , 0x1e , 0x0 , 0x3 , 0x18 , // Char 88 X
0x1 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe0 , 0x1f , 0x0 , 0xe0 , 0x1f , 0x0 , 0x38 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3 , // Char 89 Y
0x0 , 0x18 , 0x0 , 0x3 , 0x1c , 0x0 , 0x3 , 0x1f , 0x0 , 0x83 , 0x19 , 0x0 , 0xe3 , 0x18 , 0x0 , 0x33 , 0x18 , 0x0 , 0x1f , 0x18 , 0x0 , 0x7 , 0x18 , 0x0 , 0x3 , 0x10 , // Char 90 Z
0xff , 0xff , 0x1 , 0x1 , 0x0 , 0x1 , 0x1 , 0x0 , 0x1 , // Char 91 [
0x7 , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x0 , 0x1c , // Char 92 Backslash
0x1 , 0x0 , 0x1 , 0x1 , 0x0 , 0x1 , 0xff , 0xff , 0x1 , // Char 93 ]
0xc0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xc0 , // Char 94 ^
0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0x40 , // Char 95 _
0x1 , 0x0 , 0x0 , 0x2 , // Char 96 `
0x30 , 0x1f , 0x0 , 0x98 , 0x19 , 0x0 , 0x98 , 0x19 , 0x0 , 0x98 , 0x18 , 0x0 , 0xd8 , 0xc , 0x0 , 0xf0 , 0x1f , 0x0 , 0x0 , 0x10 , // Char 97 a
0xff , 0x1f , 0x0 , 0x30 , 0xc , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0xf0 , 0xf , 0x0 , 0xc0 , 0x3 , // Char 98 b
0x80 , 0x1 , 0x0 , 0xf0 , 0xf , 0x0 , 0x38 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0x38 , 0x1c , 0x0 , 0x70 , 0x6 , // Char 99 c
0x80 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0x30 , 0xc , 0x0 , 0xff , 0x1f , // Char 100 d
0xe0 , 0xf , 0x0 , 0xb0 , 0x1c , 0x0 , 0x98 , 0x18 , 0x0 , 0x98 , 0x18 , 0x0 , 0x98 , 0x18 , 0x0 , 0xf0 , 0xc , 0x0 , 0xc0 , // Char 101 e
0x8 , 0x0 , 0x0 , 0xfe , 0x1f , 0x0 , 0xff , 0x1f , 0x0 , 0xb , // Char 102 f
0xf0 , 0xcf , 0x0 , 0x18 , 0x9c , 0x1 , 0x18 , 0x98 , 0x1 , 0x18 , 0x98 , 0x1 , 0x30 , 0x88 , 0x1 , 0xf8 , 0xff , // Char 103 g
0xff , 0x1f , 0x0 , 0x30 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xf0 , 0x1f , // Char 104 h
0xfb , 0x1f , // Char 105 i
0x0 , 0x80 , 0x1 , 0xfb , 0xff , 0x1 , // Char 106 j
0xff , 0x1f , 0x0 , 0xc0 , 0x1 , 0x0 , 0xc0 , 0x1 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x18 , 0x1e , 0x0 , 0x8 , 0x18 , // Char 107 k
0xff , 0x1f , // Char 108 l
0xf8 , 0x1f , 0x0 , 0x30 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xf8 , 0x1f , 0x0 , 0xf0 , 0x1f , 0x0 , 0x10 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xf0 , 0x1f , // Char 109 m
0xf8 , 0x1f , 0x0 , 0x30 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xf0 , 0x1f , // Char 110 n
0x80 , 0x1 , 0x0 , 0xf0 , 0xf , 0x0 , 0x38 , 0x1c , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0xf0 , 0xf , 0x0 , 0xc0 , 0x3 , // Char 111 o
0xf8 , 0xff , 0x1 , 0x30 , 0xc , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0xf0 , 0xf , 0x0 , 0xc0 , 0x1 , // Char 112 p
0x80 , 0x0 , 0x0 , 0xf0 , 0xf , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0x18 , 0x18 , 0x0 , 0x30 , 0xc , 0x0 , 0xf8 , 0xff , 0x1 , // Char 113 q
0xf8 , 0x1f , 0x0 , 0xf0 , 0x1f , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , // Char 114 r
0xf0 , 0xc , 0x0 , 0xd8 , 0x18 , 0x0 , 0x98 , 0x19 , 0x0 , 0x98 , 0x19 , 0x0 , 0x30 , 0x1f , 0x0 , 0x20 , 0x6 , // Char 115 s
0x8 , 0x0 , 0x0 , 0xff , 0xf , 0x0 , 0xfe , 0x1f , 0x0 , 0x8 , 0x10 , // Char 116 t
0xf8 , 0xf , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0xc , 0x0 , 0xf8 , 0x1f , // Char 117 u
0x18 , 0x0 , 0x0 , 0xf8 , 0x0 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x1f , 0x0 , 0xf0 , 0x1 , 0x0 , 0x38 , // Char 118 v
0x18 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x1f , 0x0 , 0xf8 , 0x3 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe0 , 0xf , 0x0 , 0x0 , 0x1e , 0x0 , 0xc0 , 0xf , 0x0 , 0xf8 , // Char 119 w
0x8 , 0x10 , 0x0 , 0x18 , 0x1c , 0x0 , 0x70 , 0xf , 0x0 , 0xc0 , 0x3 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x38 , 0x1c , 0x0 , 0x8 , 0x18 , // Char 120 x
0x18 , 0x0 , 0x0 , 0xf8 , 0x80 , 0x1 , 0xc0 , 0x8f , 0x1 , 0x0 , 0xfc , 0x0 , 0x0 , 0x1f , 0x0 , 0xf0 , 0x1 , 0x0 , 0x38 , // Char 121 y
0x0 , 0x10 , 0x0 , 0x8 , 0x1c , 0x0 , 0x8 , 0x1f , 0x0 , 0x88 , 0x13 , 0x0 , 0xe8 , 0x10 , 0x0 , 0x38 , 0x10 , 0x0 , 0x18 , 0x10 , // Char 122 z
0x80 , 0x3 , 0x0 , 0xff , 0xfe , 0x1 , 0x1 , 0x0 , 0x1 , // Char 123 {
0xff , 0x1f , 0x0 , 0xff , 0x1f , // Char 124 |
0x3 , 0x80 , 0x1 , 0xff , 0xfe , 0x1 , 0x80 , 0x3 , // Char 125 }
0x80 , 0x1 , 0x0 , 0x80 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x80 , 0x1 , 0x0 , 0x80 , // Char 126 ~
};
