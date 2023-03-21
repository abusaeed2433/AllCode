import sys
input=sys.stdin.buffer.readline
import os
from math import*
import copy

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	brr=list(map(int,input().split()))
	ans=[]
	for i in range(n):
		ans.append(brr[i]-arr[i])
	bns=copy.deepcopy(ans)
	bns.sort()
	if bns[0]<0:
		print("NO")
	else:
		ip=0
		fp=0
		for i in range(n):
			if ans[i]>0:
				ip=i
				break
		for i in range(n-1,-1,-1):
			if ans[i]>0:
				fp=i
				break
		#print(ans)
		ans=ans[ip:fp+1]
		#print(ans)
		if len(set(ans))==1:
			print("YES")
		else:
			print("NO")


