import sys
input=sys.stdin.buffer.readline
import os
from math import*

r,g,b=map(int,input().split())
k=int(input())
while g<=r and k>0:
	g*=2
	k-=1
while b<=g and k>0:
	b*=2
	k-=1
if b>g and g>r:
	print("Yes")
else:
	print("No")
