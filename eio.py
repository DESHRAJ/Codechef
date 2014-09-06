n, k = raw_input().split(" ")
n = int(n)
k = int(k)
i,j=0,0
t = []
for i in range(0,n):
	a = raw_input()
	a = int(a)
	t.append(a)
if (k>0):
    for x in t:
        if(x%k==0):
            j+=1
print j