import sys
input=sys.stdin.buffer.readline
import os
from math import*

def ischeck(val,z):
	s=0
	for i in range(0,n):
		if s%2==z:
			s+=1
		else:
			if arr[i]<=val:
				s+=1
	return s>=k

def search(l,h):
	ans=h
	while l<=h:
		mid=(l+h)//2
		if ischeck(mid,1) or ischeck(mid,0):
			ans=mid
			h=mid-1
		else:
			l=mid+1
	return ans


n,k=map(int,input().split())
arr=list(map(int,input().split()))
print(search(1,max(arr)))


