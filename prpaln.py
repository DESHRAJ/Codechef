import sys
from sys import stdin
def main():
	t = (sys.stdin.readline()).rstrip('\n')
	t = int(t)
	while(t):
		flag=0
		s = (sys.stdin.readline()).rstrip('\n')
		s = str(s)
		for i in s:
			p =""
			p = s.replace(i,'',1)
			if p==p[::-1]:
				flag=1
				print "YES"
				break
		if flag==0:
			print "NO"
		t=t-1
if __name__ == "__main__":
    main()