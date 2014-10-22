# import sys
t = raw_input()#map(int, sys.stdin.readline().split('\n'))
t = int(t)
a = raw_input()#map(str, sys.stdin.readline())
a = str(a)
while(t>0):
	a2 = raw_input()
	a2 = str(a2)
	a = a.replace(a2,'')
	# t = int(t)
	t=t-1
if(len(a)==0):
	print '0'
else:
	print a
	