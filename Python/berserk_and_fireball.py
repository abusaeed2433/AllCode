import sys
input=sys.stdin.buffer.readline
import os
from math import*


n,m=map(int,input().split())
x,k,y=map(int,input().split())
arr=list(map(int,input().split()))
brr=list(map(int,input().split()))

var=0
prev=1
k=0
ans=0
i=0
sp=True
while i<n and k<m:
	if arr[i]==brr[k]:
		k+=1
		var=i-prev-1
		if var>0:
			if max(arr[prev+1:i])<arr[prev] or max(arr[prev+1:i])<arr[i]:
				c1=((var//k)*x)+(var-(var//k)*k)*y
				c2=var*y
				ans+=min(c1,c2)
			else:
				if var%k!=0:
					sp=False
					break
				else:
					ans+=(var//k)*x
		prev=i


	i+=1
var=n-prev-1
if k<m:
	sp=False
if var>0 and sp==True:
	if max(arr[prev+1:n])<arr[prev] or max(arr[prev+1:n])<arr[i]:
		c1=((var//k)*x)+(var-(var//k)*k)*y
		c2=var*y
		ans+=min(c1,c2)
	else:
		if var%k!=0:
			sp=False
		else:
			ans+=(var//k)*x

if sp==False:
	print("-1")
else:
	print(ans)


