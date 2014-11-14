import sys 
import math 
from sys import stdin
s = (sys.stdin.readline()).rstrip('\n')
s = str(s)
r = (sys.stdin.readline()).rstrip('\n')
r = str(r)
print s 
print s[::-1]
print "+++++++++++++++++++++"
print r
print r[::-1]
if s==s[::-1]:
	print "S is a palendrome "
else:
	print "S is not a palendrome"
if r==r[::-1]:
	print "R is also a a palendrome "
else :
	print "R is not a palendrome"
