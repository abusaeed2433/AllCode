import sys
import os
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
arr.sort()
k=1
ans=0
for i in range(n):
	if arr[i]>=k:
		ans+=1
		k+=1
	else:
		continue
print(ans)


