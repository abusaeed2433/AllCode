import sys
import os
from math import*
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
ans=[0]*n
c=0
d=arr[0]
ans[0]=c
ans[n-1]=d
for i in range(1,n//2):
	if arr[i]<=d:
		d=arr[i]-c
	else:
		c=max(c,arr[i]-d)
		d=arr[i]-c
	ans[i]=c
	ans[n-i-1]=d
for x in ans:
	print(x,end=' ')