import sys
input=sys.stdin.buffer.readline
import os
from math import*

n=int(input())
arr=list(map(int,input().split()))
brr=list(map(int,input().split()))

ans=0
for i in range(n):
	if arr[i]>=brr[i]:
		ans+=brr[i]
	else:
		if arr[i]+arr[i+1]>=brr[i]:
			ans+=brr[i]
			arr[i+1]=arr[i]+arr[i+1]-brr[i]
		else:
			ans+=arr[i]+arr[i+1]
			arr[i+1]=0
print(ans)