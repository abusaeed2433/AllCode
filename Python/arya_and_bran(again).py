import sys
input=sys.stdin.buffer.readline
import os
from math import*

n,k=map(int,input().split())
arr=list(map(int,input().split()))
now=0
i=0
count=0
while k>0 and i<n:
	count+=1
	now+=arr[i]
	if now>=8:
		k-=8
		now-=8
	else:
		k-=now
		now=0
	i+=1
if k>0:
	print("-1")
else:
	print(count)