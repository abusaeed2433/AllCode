import sys
input=sys.stdin.buffer.readline
import os 
from math import*

n=int(input())
arr=list(map(int,input().split()))
ans=0
for i in range(1,n-1):
	if arr[i]==0:
		if arr[i-1]==1 and arr[i+1]==1:
			arr[i+1]=0
			ans+=1
print(ans)