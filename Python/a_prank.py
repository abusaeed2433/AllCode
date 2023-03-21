import sys
import os
from math import*
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
ip=0
count=1
ans=1
for i in range(n-1):
	if arr[i]==arr[i+1]-1:
		count+=1
	else:
		if arr[ip]==1:
			if count>1:
				count+=1
			ip=i+1
		if ans<count:
			ans=count
		count=1
#print(count,ans)
if ans<=count:
	if arr[-1]==1000 or arr[ip]==1:
		ans=count+1
	else:
		ans=count
#print(ans)
if ans-2<=0:
	print("0")
else:
	print(ans-2)