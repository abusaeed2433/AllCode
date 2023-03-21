import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	if n<3:
		print(n)
	else:
		print(1+int(ceil((n-1)/2)))