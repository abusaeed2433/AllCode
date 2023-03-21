import sys
from math import*
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
arr.sort()
k=1
ans=0
for x in arr:
	ans+=int(fabs(x-k))
	k+=1
print(ans)