import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	l,r=map(int,input().split())
	if l+l<=r:
		print(l,l+l)
	else:
		print("-1 -1")