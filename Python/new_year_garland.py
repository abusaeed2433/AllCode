import sys
input=sys.stdin.buffer.readline
import os
from math import*


t=int(input())
while t:
	t-=1
	arr=list(map(int,input().split()))
	arr.sort()
	if arr[0]+arr[1]>=arr[2]-1:
		print("Yes")
	else:
		print("No")