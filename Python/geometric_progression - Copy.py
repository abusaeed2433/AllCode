import sys
from bisect import*
input=sys.stdin.buffer.readline
import os
import copy
from math import*

n,k=map(int,input().split())
arr=list(map(int,input().split()))
arr.sort()
d=dict()

brr=copy.deepcopy(arr)
brr=list(set(arr))
print(arr)
print(brr)
for i in range(len(brr)):
	d[brr[i]]=bisect_right(arr,brr[i])-bisect_left(arr,brr[i])
print(d)
ans=0
for i in range(n-2):
	if k==1:
		crr=arr[i:]
		crr=list(filter(lambda x:x==arr[i]),arr)
		if len(crr)>=3:
			ans+=len(crr)-2
	else:
		crr=[]
		if brr[i]*k in brr and brr[i]*k*k in brr:
			ans+=d[brr[i]]*d[brr[i]*k]*d[brr[i]*k*k]
print(ans)


