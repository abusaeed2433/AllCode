import sys
input=sys.stdin.buffer.readline
from math import*
import copy


n=int(input())
arr=list(map(int,input().split()))
ans=arr[0]
for i in range(1,n):
	if arr[i]>=arr[i-1]:
		ans+=arr[i]-arr[i-1]
	else:
		continue
print(ans)



