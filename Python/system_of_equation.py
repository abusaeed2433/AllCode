import math

n,m=list(map(int,input().split()))
a=max(n,m)
b=min(n,m)
c=int(math.sqrt(a))
r=a-(c*c)
if a==1 and b==1:
	print("2")
elif r==0:
	print("1")
elif c+(r*r)==b:
	print("1")
else:
	print("0")