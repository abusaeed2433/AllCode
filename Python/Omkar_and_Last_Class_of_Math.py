import sys
input=sys.stdin.buffer.readline
import os
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	if n%2==0:
		ans=n//2
		print(ans,ans)
	else:
		dif=10000000000
		a=1
		b=n-1
		z=0
		for i in range(int(ceil(sqrt(n))),0,-1):
			if n%i==0:
				d1=n//i
				d2=n-(n//i)
				if dif>(int(fabs(d1-d2))):
					dif=int(fabs(d1-d2))
					a=d1
					b=d2
				else:
					z=1
					print(a,b)
					break
		if z==0:
			print(1,n-1)