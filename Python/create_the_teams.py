import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	n,x=map(int,input().split())
	arr=list(map(int,input().split()))
	arr.sort(reverse=True)
	count=1
	ans=0
	for i in range(n):
		if count*arr[i]>=x:
			ans+=1
			count=1
		else:
			count+=1
	print(ans)
