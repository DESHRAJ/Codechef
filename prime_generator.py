import math 

def primecheck(a):
	a = int(a)
	if (a==1):
		return 0
	elif (a==2):
		return a
	elif (a>2):
		flag=0
		for i in range(2,int(math.sqrt(a)+1)):
			if(a%i==0):
				flag=1
				break
			i+=1
		if(flag==1):
			return 0
		else:
			return a


t =raw_input()
t = int(t)
x = []
while(t):
	a,b = raw_input().split(" ")
	a = int(a)
	b = int(b)
	if(b>=1 and a>=1 and a<=b):
		for p in range(a,b+1):
			if(primecheck(p)):
				x.append(p)
	x.append(" ")
	t-=1
for c in x:
	if c==" ":
		print "\n"
	else:
		print c
