import sys
input=sys.stdin.buffer.readline
import os
from math import*
import copy

def findmex(arr):
	crr=copy.deepcopy(arr)
	crr.sort()
	brr=range(0,max(crr)+2)
	return min(set(brr)-set(crr))

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	mex=findmex(arr)
	brr=copy.deepcopy(arr)
	brr.sort()
	ans=[]
	i=0
	while i<n and arr!=brr:
		mex=findmex(arr)
		if mex!=n:
			if arr[mex]!=mex:
				arr[mex]=mex
				ans.append(mex+1)
		else:
			ans.append(mex)
			arr[-1]=mex
		print(arr,ans,mex)
		i+=1
	brr=copy.deepcopy(arr)
	brr.sort()
	if arr!=brr:
		i=0
		while i<n and arr!=brr:
			mex=findmex(arr)
			if mex!=0:
				if arr[mex-1]!=mex:
					arr[mex-1]=mex
					ans.append(mex)
			else:
				ans.append(mex+1)
				arr[0]=mex
			print(arr,ans,mex)
			i+=1
	brr=copy.deepcopy(arr)
	brr.sort()
	print(arr)
	print(brr)
	print(len(ans))#,arr==brr)
	for x in ans:
		print(x,end=' ')
	print()
