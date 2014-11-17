import math,sys
from sys import stdin
from math import pow 
t = sys.stdin.readline()
t = int (t)
while(t):
	n,m,q = map(int, sys.stdin.readline().split(' '))
	while(q):
		sum1 = 1
		i = sys.stdin.readline()
		i = int(i)
		if(n-i>i):
			sum11,sum12,sum13=1,1,1
			for j in range(1,n+1):
				sum11 = sum11*pow(j,j)
				if(j<=i):
					sum12 = sum12*pow(j,j)
				if(j<=n-i):
					sum13 = sum13*pow(j,j)
		sum1 =  (sum11/(sum12*sum13))%m
		print int(sum1)
		q=q-1
	t = t-1