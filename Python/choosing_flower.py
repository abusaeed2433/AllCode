import sys
input=sys.stdin.buffer.readline
import os
from math import*


t=int(input())
while t:
	t-=1
	n,m=map(int,input().split())
	brr=[]
	nspar=[]
	for i in range(m):
		a,b=map(int,input().split())
		brr.append(b)
		nspar.append([a,b])
	if t!=0:
		input()
	c=max(brr)
	nspar.sort(reverse=True)
	print(nspar)
	ans=0
	count=0
	for i in range(m):
		if nspar[i][0]>=c:
			count+=1
			ans+=nspar[i][0]
			nspar[i][0]=nspar[i][1]
		if count==n:
			break
	rest=n-count
	print(nspar)
	if rest==0:
		print(ans)
	else:
		ans2=0
		for i in range(m):
			var=nspar[i][0]+(rest-1)*nspar[i][1]
			if ans2<var:
				ans2=var
		print(ans+ans2)


