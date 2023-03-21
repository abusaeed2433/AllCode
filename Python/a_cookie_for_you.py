import sys
input=sys.stdin.buffer.readline
import os
from math import*

t=int(input())
while t:
	t-=1
	a,b,n,m=map(int,input().split())
	if (a+b)<(n+m):
		print("No")
	else:
		if m<=min(a,b):
			print("Yes")
		else:
			print("No")


