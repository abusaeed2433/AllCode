import sys
from math import*
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
for i in range(n):
	if i==0:
		print(int(fabs(arr[1]-arr[0])),int(fabs(arr[-1]-arr[0])))
	elif i==n-1:
		print(int(fabs(arr[i]-arr[i-1])),int(fabs(arr[i]-arr[0])))
	else:
		print(min(int(fabs(arr[i]-arr[i+1])),int(arr[i]-arr[i-1])),max(int(fabs(arr[i]-arr[0])),int(fabs(arr[i]-arr[-1]))))
