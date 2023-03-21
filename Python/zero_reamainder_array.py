import sys
input=sys.stdin.buffer.readline
from math import*
import os
import copy
from bisect import*

t=int(input())
while t:
	t-=1
	n,k=map(int,input().split())
	arr=list(map(int,input().split()))
	arr.sort()
#	print(arr)
	brr=[]
	for x in arr:
		brr.append(k-x%k)
	brr.sort()
#	print(brr)
	move=0
	na=[]
	var=0
	i=0
	while i<n:
		var=bisect_right(brr,brr[i])-bisect_left(brr,brr[i])
		if brr[i]%k!=0:
			na.append((var-1)*k+(brr[i]))
			i+=var
		else:
			i+=var
	if len(na)==0:
		print("0")
	else:
		print(max(na)+1)

