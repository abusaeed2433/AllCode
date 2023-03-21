import sys
input=sys.stdin.buffer.readline
import os
from math import*


t,x=map(int,input().split())
arr=[0]*x
while t:
	t-=1
	n=int(input())
	val=n%x
	arr[val]+=1
	b=min(arr)
	mex=b*x
	c=arr.index(b)
	print(mex+c)

