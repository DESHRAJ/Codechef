import sys,math
from math import factorial 
t = sys.stdin.readline()
t = int(t)
while(t):
	n,k  = map(int,sys.stdin.readline().split(' '))
	print (factorial(n)/(factorial(3)*factorial(n-3))) - (factorial(k)/(factorial(3)*factorial(k-3)))
	t = t-1