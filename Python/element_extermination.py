import sys
input=sys.stdin.buffer.readline
from math import*
from bisect import*
import copy

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	if arr[0]==max(arr):
		print("NO")
	elif arr[-1]==max(arr):
		print("YES")
	else:
		if arr[0]<arr[-1]:
			print("YES")
		else:
			print("NO")


