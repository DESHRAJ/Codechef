import sys 
t = sys.stdin.readline()
t = int(t)
char = ''
while(t):
	s = sys.stdin.readline().rstrip('\n')
	count = 0
	for i in s:
		# print "character is " + i 
		# count.append(i.count)
		if s.count(i)>count:
			count = s.count(i)
			# print count
			char = i
		elif s.count(i)==count and ord(i)<=ord(char):
			count = s.count(i)
			# print count
			char = i
	# print char
	s = s.replace(char,"?")
	print s
	t = t-1