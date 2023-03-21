from math import*
import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n,k=map(int,input().split())
	ans=n
	for i in range(1,min(k+1,int(sqrt(n)+1))):
		if n%i==0:
			if i<=k:
				ans=min(ans,n//i)
			if (n//i)<=k:
				ans=min(ans,i)
	print(ans)
	