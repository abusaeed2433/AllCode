import sys
input=sys.stdin.buffer.readline
import os
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	for i in range(n):
		if i%2==0:
			if arr[i]<0:
				print(-arr[i],end=' ')
			else:
				print(arr[i],end=' ')
		else:
			if arr[i]>0:
				print(-arr[i],end=' ')
			else:
				print(arr[i],end=' ')
	print()