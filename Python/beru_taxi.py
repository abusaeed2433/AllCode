import sys
input=sys.stdin.buffer.readline
import os
from math import*

a,b=map(int,input().split())
t=int(input())
ans=[]
while t:
	t-=1
	x,y,v=map(int,input().split())
	d=sqrt((x-a)*(x-a)+(y-b)*(y-b))
	t1=d/v
	ans.append(t1)
print(min(ans))