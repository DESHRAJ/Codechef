x,y = raw_input().split(" ") 

charge = 0.50
x = int(x)
y = float(y)
if(y>(x+charge)):
	print float (y-(x+charge))
else:
	print y