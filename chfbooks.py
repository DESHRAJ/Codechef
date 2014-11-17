import sys
t = sys.stdin.readline()
t  = int(t)
a = []
sum = 0
while(t):
	n, m = sys.stdin.readline().split(' ')
	n = int(n)
	m  = int(m)
	# while m:
	i = (sys.stdin.readline().split(' '))
	for x in i:
		a.append(int(x))
	while(m):
		max1=max(a)
		a.remove(max1)
		sum  = sum + max1
		m = m-1
	print sum
	t= t-1