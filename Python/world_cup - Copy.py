import sys
input=sys.stdin.buffer.readline
import os
from math import*

n=int(input())
arr=list(map(int,input().split()))
count=0
i=0
z=0
while z==0:
	if arr[i]-count<=0:
		print(i+1)
		break
	else:
		arr[i]-=count
	count+=1
	i+=1
	if i==n:
		i=0
