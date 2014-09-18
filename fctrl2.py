import sys

def fact(n):
	if(n==1):
		return 1
	elif(n>1):
		return n*fact(n-1)
t = sys.stdin.readline()
t = int(t)
x = []
while(t>0):
	n = sys.stdin.readline()
	n = int(n)
	if(n>=1 and n<=100):
		x.append(fact(n))
	t-=1

for i in x:
	print i
