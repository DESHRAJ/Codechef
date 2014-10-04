import sys
t= sys.stdin.readline()
t = int(t)
a = []
while(t>0):
	n = sys.stdin.readline()
	n = int(n)
	for i in range(0,n):
		j=0
		x = sys.stdin.readline()
		a[i].append(x)
		j+=1
	t=t-1
for i in a:
	print i