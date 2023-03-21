import sys
input=sys.stdin.buffer.readline
from math import*
import os

t=int(input())
while t:
	t-=1
	n=int(input())
	x=[6,10,14]
	if n>30:
		c=n-30
		if c in x:
			print("YES")
			print("6 10 15",c-1)
		else:
			print("YES")
			print("6 10 14",c)
	else:
		print("NO")