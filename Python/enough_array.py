import sys
input=sys.stdin.buffer.readline
import os
from math import*

n,k=map(int,input().split())
arr=list(map(int,input().split()))
s=0
ans=0
lp=0
j=0
for i in range(n):
#	print(j,"a")
	while j<n and s<k:
		s+=arr[j]
		j+=1
	if s>=k:
		ans+=(n-j)+1
		s-=arr[i]
	else:
		break
#	print(i+1,ans,j)
print(ans)
