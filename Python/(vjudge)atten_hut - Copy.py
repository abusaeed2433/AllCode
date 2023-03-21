import sys
from math import*
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	x1=(-1+sqrt(1+8*n))//2
	x2=(-1-sqrt(1+8*n))//2
	print(int(max(x1,x2)))