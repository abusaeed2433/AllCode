import sys
input=sys.stdin.buffer.readline
import os 
from math import*

n=int(input())
arr=list(map(int,input().split()))
arr.sort(reverse=True)
brr=list(map(int,input().split()))
brr.sort()

for i in range(n):
	if i==n-1:
		print(arr[i]+brr[i],end='')
	else:
		print(arr[i]+brr[i],end=' ')

