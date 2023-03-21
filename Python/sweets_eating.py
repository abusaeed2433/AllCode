import sys
input=sys.stdin.buffer.readline
import os
from math import*


n,m=map(int,input().split())
arr=list(map(int,input().split()))
arr.sort()
for i in range(m):
	j=i+m
	while j<n:
		arr[j]+=arr[j-m]
		j+=m
arr.insert(0,0)
for i in range(1,n+1):
	arr[i]+=arr[i-1]
	print(arr[i],end=' ')

