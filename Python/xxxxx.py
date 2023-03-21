import sys
import os
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n,x=map(int,input().split())
	arr=list(map(int,input().split()))
	ans=-1
	s=sum(arr)
	if s%x!=0:
		ans=n
	else:
		pos=-1
		for i in range(n):
			if arr[i]%x!=0:
				pos=i
				ans=n-(i+1)
				break
			if arr[n-1-i]%x!=0:
				ans=n-(i+1)
				pos=i
				break
	brr=list(filter(lambda y:y%x!=0,arr))
	if len(brr)==0:
		print("-1")
	else:
		print(ans)