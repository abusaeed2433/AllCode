import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	g,l=map(int,input().split())
	if l%g==0:
		print(g,l)
	else:
		print("-1")