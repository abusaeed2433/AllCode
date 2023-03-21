import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	mina=min(arr)
	brr=list(map(int,input().split()))
	minb=min(brr)
	ans=0
	for i in range(n):
		c=arr[i]-mina
		d=brr[i]-minb
		ans+=max(c,d)
	print(ans)