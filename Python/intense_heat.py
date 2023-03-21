import sys
input=sys.stdin.buffer.readline
import os
from math import*

n,k=map(int,input().split())
arr=list(map(int,input().split()))
ans=0
for i in range(n-k+1):
	var=sum(arr[i:i+k])-arr[i+k-1]
	for j in range(i+k-1,n):
		var+=arr[j]
		var1=var/(j-i+1)
		if ans<var1:
			ans=var1
		#print(var1,ans)
print(ans)

