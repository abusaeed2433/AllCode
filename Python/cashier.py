import sys
input=sys.stdin.buffer.readline
import os
from math import*

n,la,a=map(int,input().split())
last=0
ans=0
while n:
	n-=1
	t,l=map(int,input().split())
	ans+=(t-last)//a
	last=l+t
print(ans+(la-last)//a)
