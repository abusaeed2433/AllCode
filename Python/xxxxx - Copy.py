import sys
import os
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n,x=map(int,input().split())
	arr=list(map(int,input().split()))

	s=sum(arr)
	ans=n
	while s%x==0 and len(arr)>0 and ans>0:
		if (s-arr[0])%x==0 and (s-arr[-1])%x==0:
			arr.pop()
			ans-=1
		elif (s-arr[0])%x!=0 and (s-arr[-1])%x!=0:
			break
		else:
			ans-=1
			break
	if ans==0:
		print("-1")
	else:
		print(ans)