import math 

def primecheck(a):
	if (a==1):
		return 0
	if (a==2):
		return a
	elif (a>2):
		i=2
		flag=0
		for i in range(2,int(math.sqrt(a))):
			flag=0
			if(a%i==0):
				flag=1
				break
		if(flag==0):
			return a
		else:
			return 0


t =raw_input()
t = int(t)
x = []
while(t!=0):
	a,b = raw_input().split(" ")
	a = int(a)
	b = int(b)
	if(b-a<=100000 and b>=1 and a>=1 and a<=b):
		# p=a
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
