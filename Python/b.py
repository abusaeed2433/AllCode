import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	c=int(ceil(n/4))
	rest=n-c
	for i in range(rest):
		print("9",end='')
	for i in range(c):
		print("8",end='')
	print()