import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	print(int(ceil(n/2)))