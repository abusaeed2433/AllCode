import sys
input=sys.stdin.buffer.readline
import os
from math import*

t=int(input())
while t:
	t-=1
	n,k=map(int,input().split())
	arr=list(map(int,input().split()))
	arr.sort(reverse=True)
	brr=list(map(int,input().split()))
	brr.sort()
	ans=0
	ip=0
	for i in range(k):
		if brr[i]==1:
			ans+=arr[ip]+arr[ip]
			ip+=1
		else:
			break
	brr=brr[ip:]
	arr=arr[ip:]
#	print(arr,brr)
	ip=0
	fp=len(arr)-1
	for i in range(len(brr)-1,-1,-1):
		ans+=arr[ip]+arr[fp]
		ip+=1
		fp-=brr[i]-1
	print(ans)

