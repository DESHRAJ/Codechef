t = raw_input()
t = int(t)
diff1=0
diff2=0
s = [ 'C','C#','D','D#','E','F','F#','G','G#','A','B','S','C','C#','D','D#','E','F','F#','G','G#','A','B']
while(t>0):
	a1 = raw_input()
	a, b,c = a1.split()
	a = str(a)
	# b = raw_input()
	b = str(b)
	# c = raw_input()
	c = str (c)
	# print a,b,c
	if(a=='c'):
		a = 'C#'
	elif (a == 'd'):
		a = 'D#'
	elif (a == 'd'):
		a = 'D#'
	elif (a == 'f'):
		a = 'F#'
	elif (a == 'g'):
		a = 'G#'
	
	 # = raw_input()
	if(b =='c'):
		b = 'C#'
	elif ( b == 'd'):
		b = 'D#'
	elif (b == 'd'):
		b = 'D#'
	elif (b == 'f'):
		b = 'F#'
	elif (b == 'g'):
		b = 'G#'
	
	# a = raw_input()
	if(c=='c'):
		c = 'C#'
	elif (c == 'd'):
		c = 'D#'
	elif (c == 'd'):
		c = 'D#'
	elif (c == 'f'):
		c = 'F#'
	elif (c == 'g'):
		c = 'G#'
	diff1 = s.index(b,s.index(a)) - s.index(a)
	# print diff1
	diff2 = s.index(c,s.index(b,s.index(a))) - s.index(b,s.index(a)) 
	# print diff2
	if(diff1==4 and diff2==3):
		print "Major" + '\n'
	elif (diff1==3 and diff2==4):
		print "Minor" + '\n'
	t= t-1