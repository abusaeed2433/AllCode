import sys
input=sys.stdin.buffer.readline
import os
from math import*

t=int(input())
while t:
	t-=1
	n,r=map(int,input().split())
	if r<n:
		print((r*(r+1)//2))
	else:
		print(((n*(n-1))//2)+1)