import sys,math
t  = sys.stdin.readline()
t = int(t)
while (t):
	sum1= 0
	a ,b= sys.stdin.readline().split(' ')
	a = int(a)
	b = int(b)
	n = pow(a,b)
	while(n):
		sum1 = sum1+ n%10
		n = n/10
	print sum1
	t = t-1