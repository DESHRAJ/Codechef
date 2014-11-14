import sys,math
from sys import stdin 
from math import fsum
li=[]
ri=[]
fi=[]
a = []
n = sys.stdin.readline()
n = int(n)
n1=n
a = map(int, sys.stdin.readline().split(' '))
for i in range(0,n):
	p = map(int, sys.stdin.readline().split(' '))
	li.append(p[0])
	ri.append(p[1])
	fi.append(sum(a[p[0]-1:p[1]]))
	# print fi
nq = sys.stdin.readline()
nq =int(n)
for i in range(0,nq-1):
	q,m,n = map(int, sys.stdin.readline().split(' '))
	if(q==2):
		print sum(fi[m-1:n])
	else:
		a[m-1]=n
		for j in range(0,n1):
			fi[j] = sum(a[li[j]-1:ri[j]])