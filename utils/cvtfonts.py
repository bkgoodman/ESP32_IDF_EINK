#!/usr/bin/python

""" Convert ImageMagick fonts to C format """

import subprocess,sys,os

import argparse

debug =False

# Some fonts don't give us a good size - figure it out...
def findHeight(font,pointsize):
	debug=True
	try:
		o = subprocess.check_output('convert -size {2}x{1} -font {0} -pointsize {1} label:gAj xbm:-'.format(font,pointsize,pointsize*2).split()).split("\n")
	except:
		return {
		}

	x = o.pop(0)
	print "1 IS",x
	width = int(x.split()[-1])
	print "Width is",width
	x = o.pop(0)
	#print "2 IS",x
	height = int(x.split()[-1])
	print "Height is",height
	x = o.pop(0)
	#print "3 IS",x

	# Convert to Array
	d = []
	for x in o:
		x = x.replace("}","")
		x = x.replace(";","")
		x = x.strip()
		#print x
		if x != "":
			while x[-1] == " ": x=x[:-1]
			if x[-1] == ",": x=x[:-1]
			#print x
			for v in x.split(","):
				d.append(  int(v.strip(),16))

	minpx=None
	maxpx=None
	widthbytes = 1+ ((width-1) >> 3) # Used in INPUT
	heightbytes = 1+ ((height-1) >> 3) # Used for OUTPUT
	if debug: print "width",width,"HEIGHT",height
	if debug: print "WIDTHBYTES is",widthbytes,"HEIGHTBYTES will be",heightbytes
	outarray = [ [0]*heightbytes for i in range(width)]
	for y in range(0,height):
		if debug: print "{0:2x}:".format((1<<(y%8))),
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
				if debug: print "X",
				#print outarray
				#print "IN {0},{1} output to {2},{3} bit {4}".format(x,y,x_out,y_out_byte,y_out_bit)
				outarray[x_out][y_out_byte] |= (1<<y_out_bit)
				if minpx is None or x<minpx: minpx=x
				if maxpx is None or x>maxpx: maxpx=x
			else:
				if debug: print " ",
		if debug: print "<--"
	#print "     "+(" "*minpx)+"^"+" "*((2*(maxpx-minpx))-1)+"^",minpx,maxpx
	if debug: print "    "+(" "*minpx)+"^"+" "*((2*(maxpx-minpx))-1)+"^",minpx,maxpx
	if debug: print ""

heightmethod=None
baseline=None

def getletter(font,pointsize,letter,debug=0):
	global heightmethod
	global baseline
	#findHeight(font,pointsize)
	#sys.exit()
	charspace = 2 # Pixels between characters??
	if (debug):
		o = subprocess.check_output(['echo','convert','-size','{0}x{1}'.format(pointsize*2,pointsize),'-font',font,'-pointsize',str(pointsize),'-draw','text 3,3 {0}'.format(letter),'xbm:-'])
		print o

	while True: # Start possible retry loop to calauate abaselin
		if debug: print ("Converting")
		try:
			# This will work properly if the font HAS a given baseline - height will be "1" if no baseline given!
			if heightmethod is None or heightmethod == "embedded":
				if debug: print "Use embedded "
				o = subprocess.check_output('convert  -font {0} -pointsize {1} label:{2} xbm:-'.format(font,pointsize,letter).split()).split("\n")

			# This will always TOP justify - Imagemagic chokes on numbers - so we use this assuming that it will draw them full-ascent, no descent
			elif heightmethod=="needcalc" or ((ord(letter[0]) >= 48) and (ord(letter[0])<=57)):
				if debug: print "Need Basline "
				o = subprocess.check_output('convert  -gravity forget -size {3}x{1} -font {0} -pointsize {1} label:{2} xbm:-'.format(font,pointsize,letter,pointsize*2).split()).split("\n")

			#o = subprocess.check_output('convert  -size {3}x{1} -font {0} -pointsize {1} -draw 3,3 {2} xbm:-'.format(font,pointsize,letter,pointsize*2).split()).split("\n")

			# This will properly put the baseline at a given position
			elif heightmethod == "baseline":
				if debug: print "Have baseline - get absolute"
				o = subprocess.check_output(['convert','-size','{0}x{1}'.format(pointsize*2,pointsize),'xc:white','-font',font,'-pointsize',str(pointsize),'-draw','text 0,{1} {0}'.format(letter,baseline),'xbm:-']).split("\n")
			else:
				print "UNKNOWN HEIGHT METHOD",heightmethod
		except KeyboardInterrupt:
			sys.exit(0)
		except BaseException as e:
			print "convert error",e
			return {
			}

		x = o.pop(0)
		if debug: print "1 IS",x
		width = int(x.split()[-1])
		if debug: print "Width is",width
		x = o.pop(0)
		#print "2 IS",x
		height = int(x.split()[-1])
		if debug: print "Height is",height
		x = o.pop(0)
		#print "3 IS",x


		# SANITY CHECK HEIGHT!!
		if heightmethod is None and height >1:
			heightmethod = "embedded" # ascent/decent is imbedded in font
		elif heightmethod is None and height == 1:
			heightmethod = "needcalc" # It's not embeeded - we need to calculate - do this now
			continue

		#print "LINE",o
		d = []
		for x in o:
			x = x.replace("}","")
			x = x.replace(";","")
			x = x.strip()
			if x != "":
				while x[-1] == " ": x=x[:-1]
				if x[-1] == ",": x=x[:-1]
				if debug: print x
				for v in x.split(","):
					d.append(  int(v.strip(),16))

		if debug: print "// Char '{0}' width {1} height {2}".format(letter,width,height)
		for xx in d:
			if debug: print hex(xx),
		if debug: print 
		# INPUT  is parsed WIDTH FIRST, bytes are WIDTHWISE, LSB first. 
		# OUTPUT should be HEIGHT first, bytes are HEIGHWISE, LSB first
		minpx=None
		maxpx=None
		maxYpt=None
		widthbytes = 1+ ((width-1) >> 3) # Used in INPUT
		heightbytes = 1+ ((height-1) >> 3) # Used for OUTPUT
		if debug: print "width",width,"HEIGHT",height
		if debug: print "WIDTHBYTES is",widthbytes,"HEIGHTBYTES will be",heightbytes
		outarray = [ [0]*heightbytes for i in range(width)]
		for y in range(0,height):
			if debug: print "{0:2x}:".format((1<<(y%8))),
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
					if debug: print "X",
					#print outarray
					#print "IN {0},{1} output to {2},{3} bit {4}".format(x,y,x_out,y_out_byte,y_out_bit)
					outarray[x_out][y_out_byte] |= (1<<y_out_bit)
					if minpx is None or x<minpx: minpx=x
					if maxpx is None or x>maxpx: maxpx=x
					if maxYpt is None or y>maxYpt: maxYpt=y
				else:
					if debug: print " ",
			if debug: print "<--"
		#print "     "+(" "*minpx)+"^"+" "*((2*(maxpx-minpx))-1)+"^",minpx,maxpx
		if debug: print "    "+(" "*minpx)+"^"+" "*((2*(maxpx-minpx))-1)+"^",minpx,maxpx
		if debug: print ""

		if heightmethod == "needcalc": 
			# If we needed to calculate hight - we have it - so redo the character
			heightmethod = "baseline"	
			baseline = maxYpt+1
			if debug: "BASELINE SET to",baseline
		else:
			# Else keep going
			break		

	
	outwidth = (maxpx-minpx)+1

	if debug: print "OUTARRAY will be ",outwidth,",",height,"Height bytes",heightbytes
	if debug: print outarray

	# Build single array - clip
	oa = []
	for x in range(minpx,maxpx+1):
		for y in range(0,heightbytes):
			oa.append( outarray[x][y])
	while oa[-1] ==0: oa.pop()
	if debug: print oa
	for xxx in oa:
				if debug: print hex(xxx),",",
	if debug: print
	if debug: print
	return {
		"charwidth":outwidth+charspace,
		"data":oa,
		"height":height
	}

if __name__ == "__main__":
	letters= {}
	parser = argparse.ArgumentParser(description='Build fonts.')
	parser.add_argument('--font', 
											default="Utopia",
											help='Font name from convert -list font)')
	parser.add_argument('--pointsize', default=10, type=int,help='pointsize')
	parser.add_argument('--startchar', default=32, type=int, help='ASCII start code')
	parser.add_argument('--endchar', default=126, type=int, help='ASCII end code')
	parser.add_argument('--debug','-d', action='count', help='Debug')
	parser.add_argument('--addheader', help='Add definition to header file')
	parser.add_argument('--ascent', help='Ascent hight')
	parser.add_argument('--baselinechar', help='Character to use as baseline to figure out ascent height',default='A')

	args = parser.parse_args()

	try:
		baseline = int(args.ascent)
		heightmethod="baseline"
	except:
		heightmethod=None
	
	font = args.font
	pointsize= args.pointsize

	if heightmethod is None:
		if debug: print "GETTING HEIGHT/ASCENT"
		ret = getletter(font,pointsize,args.baselinechar,debug=args.debug)
	for letter in [chr(t) for t in range(args.startchar,args.endchar+1)]:
		sys.stderr.write ("PROCESS {2} {3} LETTER {0} {1}\n".format(letter,ord(letter),font,pointsize))
		ret = getletter(font,pointsize,letter,debug=args.debug)
		letters[ord(letter)]=ret
		letters[ord(letter)]['char']=letter

	if args.debug: print letters

	firstchar=None
	lastchar=None
	totalw=0;
	totalh=0;
	numw=0;

	for l in letters:
		if firstchar is None or firstchar>l: firstchar=l
		if lastchar is None or lastchar<l: lastchar=l
		if 'charwidth' in letters[l]: totalw += letters[l]['charwidth']
		if 'height' in letters[l]: totalh += letters[l]['height']
		if 'height' in letters[l]: numw+=1
	if args.debug: print "FIRSTchar",firstchar,"LASTchar",lastchar,"AVGwidth",(totalw/numw)

	# Establish offsets
	offset=0
	for l in range(firstchar,lastchar+1):
		if l in letters:
			if 'data' in letters[l]:
				letters[l]['offset']=offset
				if args.debug: print "Letter",l,"char",letters[l]['char'],"Width",letters[l]['charwidth'],"offset",letters[l]['offset']
				if args.debug: print "DATA LENGTH IS", len(letters[l]['data']), "FOR ", letters[l]['data']
				offset+=len(letters[l]['data'])
			else:
				letters[l]['offset']=0xffff
				letters[l]['charwidth']=int(totalw/numw)
				

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
	print "#ifndef PROGMEM"
	print "#define PROGMEM"
	print "#endif"
	print "#include <stdint.h>"
	print "const uint8_t oledfont_{0}_{1}[] PROGMEM = {{".format(font.replace("-","_"),pointsize)
	print int(totalw/numw),", // Width "
	print int(totalh/numw),", // Height"
	print firstchar,", // First Char"
	print (lastchar - firstchar)+1,", // Number of Characters"
	print 
	print "// Jump Table:"
	for l in range(firstchar,lastchar+1):
		if l in letters:
			if 'data' in letters[l]:
				print " {0}, {1}, {2}, {3}, // Char {4} {5}".format(hex(letters[l]['offset'] >> 8),
					hex(letters[l]['offset'] & 0xff),
					hex(len(letters[l]['data'])),
					hex(letters[l]['charwidth']),
					l,chr(l) if l != 92 else "Backslash")
			else:
				print " 0xff, 0xff, 0x00, {0}, // Char {1} {2} - Nodata".format(genwidth,l,chr(l) if l!= 92 else "Backslash")
		else:
			print " 0xff, 0xff, 0x00, {0}, // Char {1} {2} - Nodata".format(genwidth,l,chr(l) if l!= 92 else "Backslash")
	print
	print "// Data Table:"
	for l in range(firstchar,lastchar+1):
		if l in letters:
			if 'data' in letters[l]:
				for x in letters[l]['data']:
					print hex(x),",",
				print "// Char {0} {1}".format(l,chr(l) if l!= 92 else "Backslash")
	print "};"

	if args.addheader:
		fd = open(args.addheader,"a+")
		fd.write("const uint8_t *oledfont_{0}_{1}[];\n".format(font.replace("-","_"),pointsize))
		fd.close()
	
