import sys
input=sys.stdin.buffer.readline
import os
from math import*


n=int(input())
arr=list(map(int,input().split()))
pos=arr.index(min(arr))+1
arr.sort()
if n==1:
	print(1)
else:
	if arr[0]!=arr[1]:
		print(pos)
	else:
		print("Still Rozdil")
