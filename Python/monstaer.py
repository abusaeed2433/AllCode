import sys
input=sys.stdin.buffer.readline
from math import*

n=int(input())
arr=list(map(int,input().split()))
ans=1
if n>2:
	ans=gcd(arr[0],arr[1])
	for i in range(2,n):
		ans=gcd(ans,arr[i])
else:
	ans=gcd(arr[0],arr[1])
print(ans)