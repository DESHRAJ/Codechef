# import sys
# s=sys.stdin.readline()
# for i in s :
# 	s1= s.replace(i,'',1)
# 	s1 = s1.replace('\n','')
# 	print s1
# 	print "check"
# 	# s2=s1[::-1]
# 	# print s2+" "+s1
# 	# if (str(s1.replace('\n',''))==str(s2)):
# 	# 	print "YES"
# 	# 	break
import math,sys
from sys import stdin
from math import pow 
n = sys.stdin.readline()
n = int(n)
sum11= 1
for j in range(1,n+1):
	sum11 = sum11*pow(j,j)
print sum11
# t = int (t)
# n,m,q = map(int, sys.stdin.readline().split(' '))
# while(q):
# 	sum1 = 1
# 	i = sys.stdin.readline()
# 	i = int(i)
# 	sum11,sum12,sum13=1,1,1
# 	for j in range(1,n+1):
# 		sum11 = sum11*pow(j,j)
# 	for j in range(1,i+1):
# 		sum12 = sum12*pow(j,j)
# 	for j in range(1,n-i+1):
# 		sum13 = sum13*pow(j,j)
# 	sum1 =  (sum11/(sum12*sum13))%m
# 	print int(sum1)
# 	q=q-1