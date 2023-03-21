import os
from math import*
from bisect import*

n,k=map(int,input().split())
s=input()
s=sorted(s)
i=0
arr=[]
while i<n:
	arr.append(bisect_right(s,s[i])-bisect_left(s,s[i]))
	i+=arr[-1]
arr.sort(reverse=True)
k=min(n,k)
i=0
ans=0
while k>0:
	if arr[i]<=k:
		k-=arr[i]
		ans+=arr[i]*arr[i]
	else:
		ans+=k*k
		break
	i+=1
print(ans)