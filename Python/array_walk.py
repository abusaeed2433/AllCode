import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
n,k,z=map(int,input().split())
arr=list(map(int,input().split()))
if z==0:
	ans
else:
	ans=arr[0]
	for i in range(1,n):
		val=arr[i]
		rest=k-i
		var=min(int(ceil(rest/2)),z)
		val+=var*arr[i-1]+
