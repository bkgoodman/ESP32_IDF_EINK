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
	for xx in d:
		print hex(xx),
	print 
	# INPUT  is parsed WIDTH FIRST, bytes are WIDTHWISE, LSB first. 
	# OUTPUT should be HEIGHT first, bytes are HEIGHWISE, LSB first
	minpx=None
	maxpx=None
	widthbytes = 1+ ((width-1) >> 3) # Used in INPUT
	heightbytes = 1+ ((height-1) >> 3) # Used for OUTPUT
	print "width",width,"HEIGHT",height
	print "WIDTHBYTES is",widthbytes,"HEIGHTBYTES will be",heightbytes
	outarray = [ [0]*heightbytes for i in range(width)]
	for y in range(0,height):
		print "{0:2x}:".format((1<<(y%8))),
		#print ":".format((1<<(y%8))),
		ybyte = y*widthbytes
		for x in range(0,width):
			bit = x%8
			xbyte = x/8
			offset = ybyte+xbyte
			#print (x,y),bit,xbyte,ybyte,offset,d[offset]
			data =  (d[offset] & (1<<bit))

			# Calculate output location
			x_out = x
			y_out_byte = int(y/8)
			y_out_bit = y%8
			if data:
				print "X",
				#print outarray
				#print "IN {0},{1} output to {2},{3} bit {4}".format(x,y,x_out,y_out_byte,y_out_bit)
				outarray[x_out][y_out_byte] |= (1<<y_out_bit)
				if minpx is None or x<minpx: minpx=x
				if maxpx is None or x>maxpx: maxpx=x
			else:
				print " ",
		print "<--"
	#print "     "+(" "*minpx)+"^"+" "*((2*(maxpx-minpx))-1)+"^",minpx,maxpx
	print "    "+(" "*minpx)+"^"+" "*((2*(maxpx-minpx))-1)+"^",minpx,maxpx
	print ""

	
	outwidth = (maxpx-minpx)+1

	print "OUTARRAY will be ",outwidth,",",height,"Height bytes",heightbytes
	print outarray

	# Build single array - clip
	oa = []
	for x in range(minpx,maxpx+1):
		for y in range(0,heightbytes):
			oa.append( outarray[x][y])
	while oa[-1] ==0: oa.pop()
	print oa
	for xxx in oa:
				print hex(xxx),",",
	print
	print
	return {
		"charwidth":width,
		"data":oa,
		"height":height
	}

if __name__ == "__main__":
	letters= {}
	font = "Utopia"
	pointsize=10
	for letter in "abc":
		ret = getletter(font,pointsize,letter)
		letters[ord(letter)]=ret
		letters[ord(letter)]['char']=letter

	print letters

	firstchar=None
	lastchar=None
	totalw=0;
	totalh=0;
	numw=0;
	for l in letters:
		if firstchar is None or firstchar>l: firstchar=l
		if lastchar is None or lastchar<l: lastchar=l
		totalw += letters[l]['charwidth']
		totalh += letters[l]['height']
		numw+=1
	print "FIRSTchar",firstchar,"LASTchar",lastchar,"AVGwidth",(totalw/numw)

	# Establish offsets
	offset=0
	for l in range(firstchar,lastchar+1):
		if l in letters:
			letters[l]['offset']=offset
			print "Letter",l,"char",letters[l]['char'],"Width",letters[l]['charwidth'],"offset",letters[l]['offset']
			print "DATA LENGTH IS", len(letters[l]['data']), "FOR ", letters[l]['data']
			offset+=len(letters[l]['data'])

	""" Write out data
const uint8_t ArialMT_Plain_10[] PROGMEM = {
  0x0A, // Width: 10
  0x0D, // Height: 13
  0x20, // First Char: 32
  0xE0, // Numbers of Chars: 224

  // Jump Table:
	// Offset-MSB Offset-LSB datalen charwidth
  0xFF, 0xFF, 0x00, 0x03,  // 32:65535
  0x00, 0x00, 0x04, 0x03,  // 33:0
	.
	.

  // Font Data:
  0x00,0x00,0xF8,0x02,  // 33
  0x38,0x00,0x00,0x00,0x38, // 34
  0xA0,0x03,0xE0,0x00,0xB8,0x03,0xE0,0x00,0xB8, // 35
	.
	.
	"""
	
	genwidth = int(totalw/numw)
	print "#if ndef PROGMEM"
	print "#define PROGMEM"
	print "#endif"
	print " const uint8_t FontName[] PROGMEM = {"
	print int(totalw/numw),", // Width "
	print int(totalh/numw),", // Height"
	print firstchar,", // First Char"
	print (lastchar - firstchar)+1,", // Number of Characters"
	print 
	print "// Jump Table:"
	for l in range(firstchar,lastchar+1):
		if l in letters:
			print " {0}, {1}, {2}, {3}, // {4} - Nodata".format(letters[l]['offset'] >> 8,
				letters[l]['offset'] & 0xff,
				len(letters[l]['data']),
				letters[l]['charwidth'],
				genwidth,l)
		else:
			print " 0xff, 0xff, 0x00, {0}, // {1} - Nodata".format(getwidth,l)
	print
	print "// Data Table:"
	for l in range(firstchar,lastchar+1):
		if l in letters:
			for x in letters[l]['data']:
				print hex(x),",",
			print "// Char {0}".format(l)
			print 
	print "};"
	
