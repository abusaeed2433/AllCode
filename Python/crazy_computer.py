import sys
input=sys.stdin.buffer.readline
from math import*

n,c=map(int,input().split())
arr=list(map(int,input().split()))
ans=1
for i in range(1,n):
	if arr[i]-arr[i-1]<=c:
		ans+=1
	else:
		ans=1
print(ans)