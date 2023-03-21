import sys
input=sys.stdin.buffer.readline
import os
from math import*

n=int(input())
arr=list(map(int,input().split()))
if n==1:
	print(arr[0])
else:
	ans=2*sum(arr)
	arr.sort()
	s=ans//2	
	i=0
	while i<n-2:
		ans+=s-arr[i]
		s-=arr[i]
		i+=1
	print(ans)