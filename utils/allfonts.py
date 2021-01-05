#!/usr/bin/python

import subprocess,os,sys
fonts="""
AvantGarde-Book
AvantGarde-BookOblique
AvantGarde-Demi
AvantGarde-DemiOblique
Bookman-Demi
Bookman-DemiItalic
Bookman-Light
Bookman-LightItalic
Courier-Bold
Courier-BoldOblique
Courier-Oblique
fixed
Helvetica
Helvetica-Bold
Helvetica-BoldOblique
Helvetica-Narrow
Helvetica-Narrow-Bold
Helvetica-Narrow-Oblique
Helvetica-Oblique
NewCenturySchlbk-Bold
NewCenturySchlbk-BoldItalic
NewCenturySchlbk-Italic
NewCenturySchlbk-Roman
Palatino-Bold
Palatino-BoldItalic
Palatino-Italic
Palatino-Roman
Symbol
Times-Bold
Times-BoldItalic
Times-Italic
Times-Roman
C059-BdIta
C059-Bold
C059-Bold-Italic
C059-Italic
C059-Roman
D050000L
DejaVu-Sans
DejaVu-Sans-Bold
DejaVu-Sans-Bold-Oblique
DejaVu-Sans-Condensed
DejaVu-Sans-Condensed-Bold
DejaVu-Sans-Condensed-Bold-Oblique
DejaVu-Sans-Condensed-Oblique
DejaVu-Sans-ExtraLight
DejaVu-Sans-Oblique
Liberation-Mono
Liberation-Mono-Bold
Liberation-Mono-Bold-Italic
Liberation-Mono-Italic
Nimbus-Mono-PS
Nimbus-Mono-PS-Bold
Nimbus-Mono-PS-Bold-Italic
Nimbus-Mono-PS-Italic
Nimbus-Roman
Nimbus-Roman-Bold
Nimbus-Roman-Bold-Italic
Nimbus-Roman-Italic
Nimbus-Sans
Nimbus-Sans-Bold
Nimbus-Sans-Bold-Italic
Nimbus-Sans-Italic
Nimbus-Sans-Narrow
Nimbus-Sans-Narrow-Bold
Nimbus-Sans-Narrow-Bold-Oblique
Nimbus-Sans-Narrow-Oblique
NimbusMonoPS-Bold
NimbusMonoPS-BoldItalic
NimbusMonoPS-Italic
NimbusMonoPS-Regular
NimbusRoman-Bold
NimbusRoman-BoldItalic
NimbusRoman-Italic
NimbusRoman-Regular
NimbusSans-Bold
NimbusSans-BoldItalic
NimbusSans-Italic
NimbusSans-Regular
NimbusSansNarrow-Bold
NimbusSansNarrow-BoldOblique
NimbusSansNarrow-Oblique
NimbusSansNarrow-Regular
P052-Bold
P052-Bold-Italic
P052-BoldItalic
P052-Italic
P052-Roman
Standard-Symbols-PS
URW-Bookman-Demi
URW-Bookman-Demi-Italic
URW-Bookman-Light
URW-Bookman-Light-Italic
URW-Gothic-Book
URW-Gothic-Book-Oblique
URW-Gothic-Demi
URW-Gothic-Demi-Oblique
URWBookman-Demi
URWBookman-DemiItalic
URWBookman-Light
URWBookman-LightItalic
URWGothic-Book
URWGothic-BookOblique
URWGothic-Demi
URWGothic-DemiOblique
Utopia
Utopia-Bold
Utopia-Bold-Italic
Utopia-Italic
Z003-Medium-Italic
Z003-MediumItalic
"""


for f in fonts.split("\n"):
	if f != "":
		for s in (10,12,14,16,18,20,24,28,30,32,36):
			print f,s
			print "Process",f,s
			try:
				fd = open ("newfonts/"+f.lower().replace("-","_")+"_"+str(s)+".c","w")
				#v = subprocess.Popen(["echo","./cvtfonts.py","--addheader","newfonts.h","--font",f,"--pointsize",str(s)])
				v = subprocess.Popen(["./cvtfonts.py","--addheader","newfonts.h","--font",f,"--pointsize",str(s)],stdout=fd)
				v.communicate()
				v.wait()
			except KeyboardInterrupt:
				sys.exit(1)
			except BaseException as e:
				print "ERROR ",f,s,e
				sys.exit(0)
