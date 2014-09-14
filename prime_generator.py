import sys, math	

def primecheck(a):
	from math import sqrt
	if (a==2):
		return 2
	elif (a>2):
		flag=0
		for i in range(2,int(sqrt(a)+1)):
			if(a%i==0):
				flag=1
				break
			i+=1
		if(flag==1):
			return 0
		else:
			return a
def main():
	from sys import stdin,stdout
	t =map(int,sys.stdin.readline().split())
	t = t[0]
	x = []
	while(t):
		a,b = map(int, sys.stdin.readline().split(' '))
		# a = int(a)
		b = int(b)
		if(b>=1 and a>=1 and a<=b):
			for p in range(a,b+1):
				if(primecheck(p)):
					x.append(p)
		x.append("\n")
		t-=1
	for c in x:
		print c

if __name__ == "__main__":
    main()