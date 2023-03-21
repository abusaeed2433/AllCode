import sys
input=sys.stdin.buffer.readline
import os
from math import*


t=int(input())
while t:
	t-=1
	n,k,x=map(int,input().split())
	arr=list(map(int,input().split()))
	ans=0
	count=0
	prev=0
	spcount=0
	for i in range(n):
		if arr[i]>k:
			if spcount>=x and max(arr[prev:i])==k:
				if ans<count:
					ans=count
			count=0
			prev=i+1
			spcount=0
		else:
			if arr[i]==k:
				spcount+=1
			count+=1
	if ans<count and max(arr[prev:n])==k and spcount>=x:
		ans=count
	if ans==0:
		print("-1")
	else:
		print(ans)

