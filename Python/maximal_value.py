import os
from math import*
import sys
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))

if n==2:
	print(arr[0]+arr[0])
else:
	ans=arr[0]+arr[-1]
	for i in range(0,n-2):
		ans+=min(arr[i],arr[i+1])
	print(ans)