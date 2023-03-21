import sys
import os
from math import*
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
arr.sort()
if arr[0]!=1:
	arr=[1]+arr[0:n-1]
elif arr[0]==1 and arr[-1]==1:
	arr[-1]=2
else:
	for i in range(n):
		if arr[i]!=1:
			arr=arr[0:i]+[1]+arr[i:n-1]
			break
for x in arr:
	print(x,end=' ')
