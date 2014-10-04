import sys
one = ['A','D','O','P','Q ','R']
two = ['B']
zero = ['C','E','F','G','H','I','J','K','L','M','N','S','T','U','V','W','X','Y','Z']
t = sys.stdin.readline()
t = int(t)
x = []
while(t>0):
	count=0
	s= sys.stdin.readline()
	s = str(s)
	for i in s:
		if i in one:
			count+=1
		elif i in two:
			count+=2
		else:
			count+=0
	x.append(count)
	t-=1
for i in x:
	print i