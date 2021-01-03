#!/usr/bin/python

""" Convert ImageMagick fonts to C format """

import subprocess,sys,os


def getletter(font,pointsize,letter):
	#print ("Converting")

	o = subprocess.check_output('convert  -font {0} -pointsize {1} label:{2} xbm:-'.format(font,pointsize,letter).split()).split("\n")
	x = o.pop(0)
	#print "1 IS",x
	width = int(x.split()[-1])
	#print "Width is",width
	x = o.pop(0)
	#print "2 IS",x
	height = int(x.split()[-1])
	#print "Height is",height
	x = o.pop(0)
	#print "3 IS",x


	#print "LINE",o
	d = []
	for x in o:
		x = x.strip()
		if x != "":
			x = x.replace("}","")
			x = x.replace(";","")
			while x[-1] == " ": x=x[:-1]
			if x[-1] == ",": x=x[:-1]
			#print x
			for v in x.split(","):
				d.append(  int(v.strip(),16))

	print "// Char '{0}' width {1} height {2}".format(letter,width,height)
	#print d
	# This array is parsed WIDTH FIRST, LSB first. 
	minpx=None
	maxpx=None
	widthbytes = 1+ ((width-1) >> 3)
	#print "WIDTHBYTES",widthbytes
	for y in range(0,height):
		print ":",
		ybyte = y*widthbytes
		for x in range(0,width):
			bit = x%8
			xbyte = x/8
			offset = ybyte+xbyte
			#print (x,y),bit,xbyte,ybyte,offset,d[offset]
			if (d[offset] & (1<<bit)):
				print "X",
				if not minpx or x<minpx: minpx=x
				if not maxpx or x>maxpx: maxpx=x
			else:
				print " ",
		print "<--"
	print "   "+(" "*minpx)+"^"+" "*((2*(maxpx-minpx))-1)+"^",minpx,maxpx
	print ""

if __name__ == "__main__":
	font = "Utopia"
	pointsize=16
	for letter in "Abgdj'!":
		getletter(font,pointsize,letter)
