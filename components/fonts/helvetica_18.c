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
const uint8_t oledfont_Helvetica_18[] PROGMEM = {
9 , // Width 
18 , // Height
32 , // First Char
95 , // Number of Characters

// Jump Table:
 0xff, 0xff, 0x00, 9, // Char 32   - Nodata
 0x0, 0x0, 0x5, 0x4, // Char 33 ! 
 0x0, 0x5, 0xd, 0x7, // Char 34 " 
 0x0, 0x12, 0x1c, 0xc, // Char 35 # 
 0x0, 0x2e, 0x17, 0xa, // Char 36 $ 
 0x0, 0x45, 0x29, 0x10, // Char 37 % 
 0x0, 0x6e, 0x1d, 0xc, // Char 38 & 
 0x0, 0x8b, 0x4, 0x4, // Char 39 ' 
 0x0, 0x8f, 0xc, 0x6, // Char 40 ( 
 0x0, 0x9b, 0xb, 0x6, // Char 41 ) 
 0x0, 0xa6, 0xd, 0x7, // Char 42 * 
 0x0, 0xb3, 0x1a, 0xb, // Char 43 + 
 0x0, 0xcd, 0x8, 0x5, // Char 44 , 
 0x0, 0xd5, 0xb, 0x6, // Char 45 - 
 0x0, 0xe0, 0x2, 0x3, // Char 46 . 
 0x0, 0xe2, 0xd, 0x7, // Char 47 / 
 0x0, 0xef, 0x17, 0xa, // Char 48 0 
 0x1, 0x6, 0xb, 0x6, // Char 49 1 
 0x1, 0x11, 0x17, 0xa, // Char 50 2 
 0x1, 0x28, 0x17, 0xa, // Char 51 3 
 0x1, 0x3f, 0x1a, 0xb, // Char 52 4 
 0x1, 0x59, 0x17, 0xa, // Char 53 5 
 0x1, 0x70, 0x17, 0xa, // Char 54 6 
 0x1, 0x87, 0x16, 0xa, // Char 55 7 
 0x1, 0x9d, 0x17, 0xa, // Char 56 8 
 0x1, 0xb4, 0x17, 0xa, // Char 57 9 
 0x1, 0xcb, 0x5, 0x4, // Char 58 : 
 0x1, 0xd0, 0x5, 0x4, // Char 59 ; 
 0x1, 0xd5, 0x1a, 0xb, // Char 60 < 
 0x1, 0xef, 0x1a, 0xb, // Char 61 = 
 0x2, 0x9, 0x1a, 0xb, // Char 62 > 
 0x2, 0x23, 0x16, 0xa, // Char 63 ? 
 0x2, 0x39, 0x2f, 0x12, // Char 64 @ 
 0x2, 0x68, 0x23, 0xe, // Char 65 A 
 0x2, 0x8b, 0x1d, 0xc, // Char 66 B 
 0x2, 0xa8, 0x20, 0xd, // Char 67 C 
 0x2, 0xc8, 0x1d, 0xc, // Char 68 D 
 0x2, 0xe5, 0x1a, 0xb, // Char 69 E 
 0x2, 0xff, 0x16, 0xa, // Char 70 F 
 0x3, 0x15, 0x23, 0xe, // Char 71 G 
 0x3, 0x38, 0x20, 0xd, // Char 72 H 
 0x3, 0x58, 0x2, 0x3, // Char 73 I 
 0x3, 0x5a, 0x17, 0xa, // Char 74 J 
 0x3, 0x71, 0x20, 0xd, // Char 75 K 
 0x3, 0x91, 0x1a, 0xb, // Char 76 L 
 0x3, 0xab, 0x26, 0xf, // Char 77 M 
 0x3, 0xd1, 0x20, 0xd, // Char 78 N 
 0x3, 0xf1, 0x23, 0xe, // Char 79 O 
 0x4, 0x14, 0x19, 0xb, // Char 80 P 
 0x4, 0x2d, 0x23, 0xe, // Char 81 Q 
 0x4, 0x50, 0x1d, 0xc, // Char 82 R 
 0x4, 0x6d, 0x1d, 0xc, // Char 83 S 
 0x4, 0x8a, 0x1f, 0xd, // Char 84 T 
 0x4, 0xa9, 0x20, 0xd, // Char 85 U 
 0x4, 0xc9, 0x1f, 0xd, // Char 86 V 
 0x4, 0xe8, 0x31, 0x13, // Char 87 W 
 0x5, 0x19, 0x1d, 0xc, // Char 88 X 
 0x5, 0x36, 0x22, 0xe, // Char 89 Y 
 0x5, 0x58, 0x20, 0xd, // Char 90 Z 
 0x5, 0x78, 0xc, 0x6, // Char 91 [ 
 0x5, 0x84, 0xe, 0x7, // Char 92 Backslash 
 0x5, 0x92, 0xc, 0x6, // Char 93 ] 
 0x5, 0x9e, 0x13, 0x9, // Char 94 ^ 
 0x5, 0xb1, 0x1e, 0xc, // Char 95 _ 
 0x5, 0xcf, 0x7, 0x5, // Char 96 ` 
 0x5, 0xd6, 0x1a, 0xb, // Char 97 a 
 0x5, 0xf0, 0x17, 0xa, // Char 98 b 
 0x6, 0x7, 0x14, 0x9, // Char 99 c 
 0x6, 0x1b, 0x1a, 0xb, // Char 100 d 
 0x6, 0x35, 0x17, 0xa, // Char 101 e 
 0x6, 0x4c, 0xd, 0x7, // Char 102 f 
 0x6, 0x59, 0x17, 0xa, // Char 103 g 
 0x6, 0x70, 0x17, 0xa, // Char 104 h 
 0x6, 0x87, 0x5, 0x4, // Char 105 i 
 0x6, 0x8c, 0x9, 0x5, // Char 106 j 
 0x6, 0x95, 0x17, 0xa, // Char 107 k 
 0x6, 0xac, 0x5, 0x4, // Char 108 l 
 0x6, 0xb1, 0x26, 0xf, // Char 109 m 
 0x6, 0xd7, 0x17, 0xa, // Char 110 n 
 0x6, 0xee, 0x17, 0xa, // Char 111 o 
 0x7, 0x5, 0x17, 0xa, // Char 112 p 
 0x7, 0x1c, 0x1b, 0xb, // Char 113 q 
 0x7, 0x37, 0xd, 0x7, // Char 114 r 
 0x7, 0x44, 0x14, 0x9, // Char 115 s 
 0x7, 0x58, 0xe, 0x7, // Char 116 t 
 0x7, 0x66, 0x17, 0xa, // Char 117 u 
 0x7, 0x7d, 0x19, 0xb, // Char 118 v 
 0x7, 0x96, 0x25, 0xf, // Char 119 w 
 0x7, 0xbb, 0x14, 0x9, // Char 120 x 
 0x7, 0xcf, 0x19, 0xb, // Char 121 y 
 0x7, 0xe8, 0x14, 0x9, // Char 122 z 
 0x7, 0xfc, 0xc, 0x6, // Char 123 { 
 0x8, 0x8, 0x3, 0x3, // Char 124 | 
 0x8, 0xb, 0xe, 0x7, // Char 125 } 
 0x8, 0x19, 0x17, 0xa, // Char 126 ~ 

// Data Table:
0xff , 0x33 , 0x0 , 0xff , 0x33 , // Char 33 !
0xf , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3 , // Char 34 "
0x0 , 0x2 , 0x0 , 0x10 , 0x22 , 0x0 , 0x90 , 0x3f , 0x0 , 0xfe , 0x7 , 0x0 , 0x1f , 0x2 , 0x0 , 0x10 , 0x3e , 0x0 , 0xf0 , 0x3f , 0x0 , 0xfe , 0x2 , 0x0 , 0x12 , 0x2 , 0x0 , 0x10 , // Char 35 #
0x3c , 0x1c , 0x0 , 0x7e , 0x38 , 0x0 , 0x62 , 0x30 , 0x0 , 0xff , 0xff , 0x0 , 0xff , 0xff , 0x0 , 0x83 , 0x30 , 0x0 , 0x8e , 0x31 , 0x0 , 0xc , 0x1f , // Char 36 $
0x3c , 0x0 , 0x0 , 0x66 , 0x0 , 0x0 , 0x42 , 0x0 , 0x0 , 0x46 , 0x20 , 0x0 , 0x7c , 0x18 , 0x0 , 0x18 , 0x6 , 0x0 , 0x80 , 0x1 , 0x0 , 0x60 , 0x0 , 0x0 , 0x18 , 0xc , 0x0 , 0x6 , 0x1e , 0x0 , 0x1 , 0x33 , 0x0 , 0x0 , 0x21 , 0x0 , 0x0 , 0x33 , 0x0 , 0x0 , 0x1e , // Char 37 %
0x0 , 0xf , 0x0 , 0x8c , 0x1f , 0x0 , 0xbe , 0x31 , 0x0 , 0xf3 , 0x30 , 0x0 , 0xe1 , 0x31 , 0x0 , 0xf3 , 0x33 , 0x0 , 0x3e , 0x1e , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x20 , // Char 38 &
0xf , 0x0 , 0x0 , 0x7 , // Char 39 '
0xc0 , 0xf , 0x0 , 0xf8 , 0x7f , 0x0 , 0xe , 0xc0 , 0x1 , 0x3 , 0x0 , 0x3 , // Char 40 (
0x3 , 0x0 , 0x3 , 0x1e , 0xe0 , 0x1 , 0xf8 , 0x7f , 0x0 , 0x80 , 0x7 , // Char 41 )
0x6 , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x6 , // Char 42 *
0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x6 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , 0x0 , 0x0 , 0x2 , // Char 43 +
0x0 , 0x30 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x70 , // Char 44 ,
0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 45 -
0x0 , 0x30 , // Char 46 .
0x0 , 0x38 , 0x0 , 0x0 , 0xf , 0x0 , 0xe0 , 0x1 , 0x0 , 0x3c , 0x0 , 0x0 , 0x3 , // Char 47 /
0xf8 , 0xf , 0x0 , 0xfe , 0x1f , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0xfe , 0x1f , 0x0 , 0xf8 , 0x7 , // Char 48 0
0x8 , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xc , 0x0 , 0x0 , 0xff , 0x3f , // Char 49 1
0x1c , 0x3c , 0x0 , 0x1e , 0x3e , 0x0 , 0x3 , 0x37 , 0x0 , 0x3 , 0x33 , 0x0 , 0x83 , 0x31 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xfe , 0x30 , 0x0 , 0x7c , 0x30 , // Char 50 2
0xc , 0x1c , 0x0 , 0xe , 0x38 , 0x0 , 0x3 , 0x30 , 0x0 , 0x43 , 0x30 , 0x0 , 0x43 , 0x30 , 0x0 , 0xe3 , 0x30 , 0x0 , 0xbe , 0x1f , 0x0 , 0x1c , 0xf , // Char 51 3
0x0 , 0x2 , 0x0 , 0x80 , 0x3 , 0x0 , 0xc0 , 0x2 , 0x0 , 0x30 , 0x2 , 0x0 , 0x18 , 0x2 , 0x0 , 0xe , 0x2 , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x2 , // Char 52 4
0xf8 , 0x1c , 0x0 , 0xff , 0x18 , 0x0 , 0x63 , 0x30 , 0x0 , 0x23 , 0x30 , 0x0 , 0x63 , 0x30 , 0x0 , 0x63 , 0x30 , 0x0 , 0xc3 , 0x1f , 0x0 , 0x81 , 0xf , // Char 53 5
0xf8 , 0xf , 0x0 , 0xfe , 0x1f , 0x0 , 0x63 , 0x30 , 0x0 , 0x63 , 0x30 , 0x0 , 0x23 , 0x30 , 0x0 , 0x63 , 0x30 , 0x0 , 0xc6 , 0x1f , 0x0 , 0x84 , 0xf , // Char 54 6
0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x3c , 0x0 , 0x83 , 0x1f , 0x0 , 0xe3 , 0x1 , 0x0 , 0x73 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0x7 , // Char 55 7
0x1c , 0xf , 0x0 , 0xfe , 0x19 , 0x0 , 0xe3 , 0x30 , 0x0 , 0x43 , 0x30 , 0x0 , 0x43 , 0x30 , 0x0 , 0xe3 , 0x30 , 0x0 , 0xbe , 0x1f , 0x0 , 0x1c , 0xf , // Char 56 8
0xfc , 0x8 , 0x0 , 0xce , 0x19 , 0x0 , 0x83 , 0x31 , 0x0 , 0x3 , 0x31 , 0x0 , 0x3 , 0x31 , 0x0 , 0x83 , 0x31 , 0x0 , 0xfe , 0x1f , 0x0 , 0xf8 , 0x7 , // Char 57 9
0x30 , 0x30 , 0x0 , 0x30 , 0x30 , // Char 58 :
0x30 , 0x30 , 0x1 , 0x30 , 0xf0 , // Char 59 ;
0x0 , 0x6 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0xd , 0x0 , 0x80 , 0xd , 0x0 , 0x80 , 0x8 , 0x0 , 0xc0 , 0x18 , 0x0 , 0xc0 , 0x10 , 0x0 , 0x40 , 0x30 , 0x0 , 0x40 , 0x20 , // Char 60 <
0x0 , 0x9 , 0x0 , 0x0 , 0x9 , 0x0 , 0x0 , 0x9 , 0x0 , 0x0 , 0x9 , 0x0 , 0x0 , 0x9 , 0x0 , 0x0 , 0x9 , 0x0 , 0x0 , 0x9 , 0x0 , 0x0 , 0x9 , 0x0 , 0x0 , 0x9 , // Char 61 =
0x60 , 0x30 , 0x0 , 0x40 , 0x30 , 0x0 , 0xc0 , 0x10 , 0x0 , 0x80 , 0x18 , 0x0 , 0x80 , 0x9 , 0x0 , 0x0 , 0xd , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x2 , // Char 62 >
0x8 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x33 , 0x0 , 0x83 , 0x33 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x7e , 0x0 , 0x0 , 0x3e , // Char 63 ?
0xe0 , 0xf , 0x0 , 0x78 , 0x3c , 0x0 , 0x1c , 0x70 , 0x0 , 0x4 , 0x60 , 0x0 , 0xc6 , 0xc7 , 0x0 , 0xe2 , 0xcf , 0x0 , 0x33 , 0x88 , 0x0 , 0x13 , 0x88 , 0x0 , 0x13 , 0x8c , 0x0 , 0x33 , 0x86 , 0x0 , 0xe3 , 0xcf , 0x0 , 0x72 , 0x88 , 0x0 , 0x6 , 0x8 , 0x0 , 0xc , 0xc , 0x0 , 0xf8 , 0x7 , 0x0 , 0xf0 , 0x1 , // Char 64 @
0x0 , 0x20 , 0x0 , 0x0 , 0x3c , 0x0 , 0x80 , 0x1f , 0x0 , 0xf0 , 0x7 , 0x0 , 0x7e , 0x2 , 0x0 , 0xf , 0x2 , 0x0 , 0xf , 0x2 , 0x0 , 0x7e , 0x2 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x20 , // Char 65 A
0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xe7 , 0x30 , 0x0 , 0xfe , 0x1f , 0x0 , 0x1c , 0x1f , // Char 66 B
0xf8 , 0x7 , 0x0 , 0xfc , 0xf , 0x0 , 0x6 , 0x1c , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x6 , 0x18 , 0x0 , 0xe , 0x1e , 0x0 , 0x8 , 0x6 , // Char 67 C
0xff , 0x3f , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x6 , 0x18 , 0x0 , 0xfc , 0xf , 0x0 , 0xf0 , 0x3 , // Char 68 D
0xff , 0x3f , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0x81 , 0x30 , // Char 69 E
0xff , 0x3f , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0x83 , // Char 70 F
0xf8 , 0x3 , 0x0 , 0xfc , 0xf , 0x0 , 0xe , 0x1c , 0x0 , 0x7 , 0x38 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x83 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x10 , 0x0 , 0xce , 0x18 , 0x0 , 0xcc , 0x1f , 0x0 , 0x80 , 0x3f , // Char 71 G
0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , // Char 72 H
0xff , 0x3f , // Char 73 I
0x0 , 0xe , 0x0 , 0x0 , 0x1e , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0xff , 0x1f , 0x0 , 0xff , 0xf , // Char 74 J
0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0xc0 , 0x1 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0x9c , 0x3 , 0x0 , 0xe , 0xe , 0x0 , 0x7 , 0x3c , 0x0 , 0x1 , 0x30 , 0x0 , 0x0 , 0x20 , // Char 75 K
0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x20 , // Char 76 L
0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0xf , 0x0 , 0x0 , 0x7c , 0x0 , 0x0 , 0xe0 , 0x7 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x3e , 0x0 , 0xc0 , 0x7 , 0x0 , 0xf8 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , // Char 77 M
0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0xf , 0x0 , 0x0 , 0x1c , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x80 , 0x3 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x3c , 0x0 , 0xff , 0x3f , 0x0 , 0xff , 0x3f , // Char 78 N
0xf8 , 0x7 , 0x0 , 0x3c , 0xf , 0x0 , 0x6 , 0x18 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x6 , 0x18 , 0x0 , 0x3c , 0xf , 0x0 , 0xf8 , 0x7 , // Char 79 O
0xff , 0x3f , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0x83 , 0x1 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xfe , 0x0 , 0x0 , 0x7c , // Char 80 P
0xf8 , 0x7 , 0x0 , 0x3c , 0xf , 0x0 , 0x6 , 0x18 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x30 , 0x0 , 0x3 , 0x34 , 0x0 , 0x3 , 0x3c , 0x0 , 0x6 , 0x18 , 0x0 , 0x3c , 0x3f , 0x0 , 0xf8 , 0x27 , // Char 81 Q
0xff , 0x3f , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc3 , 0x0 , 0x0 , 0xc7 , 0x1 , 0x0 , 0x7e , 0x3f , 0x0 , 0x1c , 0x38 , // Char 82 R
0x1c , 0xe , 0x0 , 0x3e , 0x1c , 0x0 , 0x63 , 0x30 , 0x0 , 0x63 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0xc3 , 0x30 , 0x0 , 0x87 , 0x31 , 0x0 , 0x8e , 0x1f , 0x0 , 0x8 , 0xf , // Char 83 S
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x1 , // Char 84 T
0xff , 0x3 , 0x0 , 0xff , 0xf , 0x0 , 0x0 , 0x18 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x18 , 0x0 , 0xff , 0xf , 0x0 , 0xff , 0x3 , // Char 85 U
0x7 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xf8 , 0x1 , 0x0 , 0xc0 , 0xf , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x38 , 0x0 , 0x80 , 0x1f , 0x0 , 0xf0 , 0x3 , 0x0 , 0x7e , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x1 , // Char 86 V
0x1 , 0x0 , 0x0 , 0x1f , 0x0 , 0x0 , 0xfe , 0x1 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x3f , 0x0 , 0xf0 , 0x7 , 0x0 , 0x7f , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0xf0 , 0x3 , 0x0 , 0x0 , 0x3f , 0x0 , 0x0 , 0x3c , 0x0 , 0xc0 , 0x3f , 0x0 , 0xfe , 0x3 , 0x0 , 0x1f , 0x0 , 0x0 , 0x1 , // Char 87 W
0x1 , 0x30 , 0x0 , 0x7 , 0x38 , 0x0 , 0xe , 0xe , 0x0 , 0x38 , 0x7 , 0x0 , 0xf0 , 0x1 , 0x0 , 0xe0 , 0x1 , 0x0 , 0xb8 , 0x7 , 0x0 , 0x1e , 0xe , 0x0 , 0x7 , 0x38 , 0x0 , 0x3 , 0x30 , // Char 88 X
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xc0 , 0x3f , 0x0 , 0xc0 , 0x3f , 0x0 , 0xf0 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x7 , 0x0 , 0x0 , 0x1 , // Char 89 Y
0x0 , 0x20 , 0x0 , 0x3 , 0x38 , 0x0 , 0x3 , 0x3c , 0x0 , 0x3 , 0x37 , 0x0 , 0x83 , 0x33 , 0x0 , 0xe3 , 0x31 , 0x0 , 0x73 , 0x30 , 0x0 , 0x3b , 0x30 , 0x0 , 0xf , 0x30 , 0x0 , 0x7 , 0x30 , 0x0 , 0x1 , 0x20 , // Char 90 Z
0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , 0x1 , 0x0 , 0x2 , 0x1 , 0x0 , 0x2 , // Char 91 [
0x7 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xe0 , 0x1 , 0x0 , 0x0 , 0xf , 0x0 , 0x0 , 0x30 , // Char 92 Backslash
0x1 , 0x0 , 0x2 , 0x1 , 0x0 , 0x2 , 0xff , 0xff , 0x3 , 0xff , 0xff , 0x3 , // Char 93 ]
0xc0 , 0x0 , 0x0 , 0x78 , 0x0 , 0x0 , 0xe , 0x0 , 0x0 , 0x6 , 0x0 , 0x0 , 0x3c , 0x0 , 0x0 , 0xe0 , 0x0 , 0x0 , 0x80 , // Char 94 ^
0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , // Char 95 _
0x1 , 0x0 , 0x0 , 0x3 , 0x0 , 0x0 , 0x4 , // Char 96 `
0x40 , 0x1e , 0x0 , 0x60 , 0x36 , 0x0 , 0x30 , 0x32 , 0x0 , 0x30 , 0x23 , 0x0 , 0x30 , 0x31 , 0x0 , 0x30 , 0x11 , 0x0 , 0xe0 , 0x3f , 0x0 , 0xc0 , 0x3f , 0x0 , 0x0 , 0x20 , // Char 97 a
0xff , 0x3f , 0x0 , 0xff , 0x1f , 0x0 , 0x20 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x60 , 0x18 , 0x0 , 0xc0 , 0xf , // Char 98 b
0xc0 , 0xf , 0x0 , 0x60 , 0x18 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x60 , 0x1c , // Char 99 c
0x0 , 0x3 , 0x0 , 0xe0 , 0x1f , 0x0 , 0x60 , 0x18 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x20 , 0x10 , 0x0 , 0xff , 0x1f , 0x0 , 0xff , 0x3f , // Char 100 d
0xc0 , 0xf , 0x0 , 0xe0 , 0x1f , 0x0 , 0x30 , 0x31 , 0x0 , 0x30 , 0x31 , 0x0 , 0x30 , 0x31 , 0x0 , 0x30 , 0x31 , 0x0 , 0xe0 , 0x19 , 0x0 , 0xc0 , 0x9 , // Char 101 e
0x10 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xff , 0x3f , 0x0 , 0x13 , 0x0 , 0x0 , 0x11 , // Char 102 f
0xc0 , 0x8f , 0x1 , 0x60 , 0x98 , 0x3 , 0x30 , 0x30 , 0x3 , 0x30 , 0x30 , 0x2 , 0x30 , 0x30 , 0x3 , 0x60 , 0x18 , 0x3 , 0xf0 , 0xff , 0x1 , 0xf0 , 0x7f , // Char 103 g
0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x20 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xe0 , 0x3f , // Char 104 h
0xf3 , 0x3f , 0x0 , 0xf3 , 0x3f , // Char 105 i
0x0 , 0x0 , 0x3 , 0xf3 , 0xff , 0x3 , 0xf3 , 0xff , 0x1 , // Char 106 j
0xff , 0x3f , 0x0 , 0xff , 0x3f , 0x0 , 0x80 , 0x1 , 0x0 , 0xc0 , 0x3 , 0x0 , 0x60 , 0x7 , 0x0 , 0x30 , 0x1c , 0x0 , 0x10 , 0x38 , 0x0 , 0x0 , 0x20 , // Char 107 k
0xff , 0x3f , 0x0 , 0xff , 0x3f , // Char 108 l
0xf0 , 0x3f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x20 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x70 , 0x0 , 0x0 , 0xe0 , 0x3f , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xe0 , 0x3f , // Char 109 m
0xf0 , 0x3f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x20 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xe0 , 0x3f , // Char 110 n
0xc0 , 0xf , 0x0 , 0xe0 , 0x1c , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0xe0 , 0x1f , 0x0 , 0xc0 , 0xf , // Char 111 o
0xf0 , 0xff , 0x3 , 0xe0 , 0xff , 0x3 , 0x20 , 0x10 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x60 , 0x18 , 0x0 , 0xc0 , 0xf , // Char 112 p
0x0 , 0x3 , 0x0 , 0xc0 , 0x1f , 0x0 , 0x60 , 0x18 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x30 , 0x30 , 0x0 , 0x20 , 0x10 , 0x0 , 0xf0 , 0xff , 0x3 , 0xf0 , 0xff , 0x3 , // Char 113 q
0xf0 , 0x3f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x60 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , // Char 114 r
0xe0 , 0x19 , 0x0 , 0xf0 , 0x39 , 0x0 , 0x30 , 0x31 , 0x0 , 0x30 , 0x33 , 0x0 , 0x30 , 0x33 , 0x0 , 0x70 , 0x3e , 0x0 , 0x60 , 0x1e , // Char 115 s
0x10 , 0x0 , 0x0 , 0xfe , 0xf , 0x0 , 0xfe , 0x3f , 0x0 , 0x10 , 0x30 , 0x0 , 0x10 , 0x20 , // Char 116 t
0xf0 , 0x1f , 0x0 , 0xf0 , 0x3f , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x30 , 0x0 , 0x0 , 0x18 , 0x0 , 0xf0 , 0x3f , 0x0 , 0xf0 , 0x3f , // Char 117 u
0x10 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x0 , 0xc0 , 0x7 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x1e , 0x0 , 0xe0 , 0x3 , 0x0 , 0xf0 , 0x0 , 0x0 , 0x10 , // Char 118 v
0x30 , 0x0 , 0x0 , 0xf0 , 0x1 , 0x0 , 0x80 , 0x1f , 0x0 , 0x0 , 0x38 , 0x0 , 0x0 , 0x3f , 0x0 , 0xf0 , 0x3 , 0x0 , 0x70 , 0x0 , 0x0 , 0xf0 , 0x7 , 0x0 , 0x0 , 0x3e , 0x0 , 0x0 , 0x3c , 0x0 , 0xc0 , 0xf , 0x0 , 0xf0 , 0x1 , 0x0 , 0x10 , // Char 119 w
0x30 , 0x30 , 0x0 , 0x70 , 0x18 , 0x0 , 0xc0 , 0xf , 0x0 , 0x80 , 0x7 , 0x0 , 0xc0 , 0xf , 0x0 , 0x70 , 0x38 , 0x0 , 0x30 , 0x30 , // Char 120 x
0x10 , 0x0 , 0x0 , 0xf0 , 0x0 , 0x3 , 0xe0 , 0x7 , 0x3 , 0x0 , 0xfe , 0x1 , 0x0 , 0xf8 , 0x0 , 0x0 , 0x1f , 0x0 , 0xe0 , 0x3 , 0x0 , 0x70 , 0x0 , 0x0 , 0x10 , // Char 121 y
0x10 , 0x38 , 0x0 , 0x10 , 0x3c , 0x0 , 0x10 , 0x26 , 0x0 , 0x90 , 0x23 , 0x0 , 0xd0 , 0x21 , 0x0 , 0x70 , 0x20 , 0x0 , 0x30 , 0x20 , // Char 122 z
0x0 , 0x3 , 0x0 , 0xfe , 0xff , 0x1 , 0x7f , 0xf8 , 0x3 , 0x1 , 0x0 , 0x2 , // Char 123 {
0xff , 0xff , 0x3 , // Char 124 |
0x1 , 0x0 , 0x2 , 0x3 , 0x0 , 0x3 , 0xff , 0xfc , 0x3 , 0xc0 , 0xf , 0x0 , 0x0 , 0x3 , // Char 125 }
0x80 , 0x1 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x40 , 0x0 , 0x0 , 0xc0 , 0x0 , 0x0 , 0x80 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x1 , 0x0 , 0xc0 , 0x1 , // Char 126 ~
};
