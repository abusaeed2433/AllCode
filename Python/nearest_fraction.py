import sys
input=sys.stdin.buffer.readline
from math import*

x,y,n=map(int,input().split())
if n>=y:
	gc=gcd(x,y)
	print("%d/%d"%(x//gc,y//gc))
else:
	ans1=0
	ans2=1
	for i in range(1,n+1):
		a=(i*x)//y
		if fabs(ans2*x-ans1*y)*i>fabs(i*x-a*y)*ans2:
			ans1=a
			ans2=i
		a+=1
		if fabs(ans2*x-ans1*y)*i>fabs(i*x-a*y)*ans2:
			ans1=a
			ans2=i
	print("%d/%d"%(ans1,ans2))

