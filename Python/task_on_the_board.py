import os
from math import*
import copy

t=int(input())
while t:
	t-=1
	s=input()
	ns=list(s)
	ns=sorted(ns)
	print(ns)
	m=int(input())
	arr=list(map(int,input().split()))
	ans=[""]*m
	narr=copy.deepcopy(arr)
	narr.sort()
	print(narr)
	pos=0
	c=min(arr)
	for i in range(m):
		if arr[i]==c:
			pos=i
			break
	i=0
	k=0
	l=0
	while i<m:
		for j in range(m):
			if arr[j]==narr[k]:
				d=int(fabs(j-pos))-int(fabs(arr[j]-arr[pos]))
				if i!=0:# d==int(fabs(arr[j]-arr[pos])) and i!=0:
					l=1
				else:
					l=0
				ans[j]=ns[d-l-1]
				pos=j
		k+=1
		i+=1
	print(ans)




