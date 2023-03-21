import sys
import os
from math import*
input=sys.stdin.buffer.readline

n=int(input())
x=int(max(int((-1+sqrt(1+8*n))//2),(-1-sqrt(1+8*n))//2))
z=0
while x>0:
	c=n-(x*(x+1)//2)
	if c==0:
		x-=1
	else:
		k=int(max(int((-1+sqrt(1+8*c))//2),(-1-sqrt(1+8*c))//2))
		if k*(k+1)//2==c:
			z=1
			break
		else:
			x-=1
if z==1:
	print("YES")
else:
	print("NO")
