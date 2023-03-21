import sys
input=sys.stdin.buffer.readline
import os
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	ans=0
	count=0
	z=0
	while n!=1:
		if n%6==0:
			n=n//6
			ans+=1
			count=0
		else:
			n*=2
			count+=1
			if count>2:
				z=1
				break
			ans+=1
	if z==1:
		print("-1")
	else:
		print(ans)

	