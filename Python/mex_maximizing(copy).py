import sys
input=sys.stdin.buffer.readline
import os
from math import*

t,x=map(int,input().split())
arr=[0]*x
i=0
ans=0
while t:
	t-=1
	n=int(input())
	arr[n%x]+=1;
	print(arr)
	while arr[ans]>i:
		ans+=1
		if ans%x==0:
			i+=1
			ans=0
	print(i*x+ans)