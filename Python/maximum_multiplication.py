import sys
input=sys.stdin.buffer.readline
from math import*

a,b,k=map(int,input().split())

c=max(a,b)
d=min(a,b)

if (c-d)>=k:
	print(c*(d+k))
else:
	var=c-d
	k-=var
	d=c
	c+=(k//2)
	d+=int(ceil(k/2))
	print(c*d)
