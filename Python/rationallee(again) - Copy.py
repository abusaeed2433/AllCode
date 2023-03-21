import sys
input=sys.stdin.buffer.readline
import os
from math import*
 
t=int(input())
while t:
	t-=1
	n,k=map(int,input().split())
	arr=list(map(int,input().split()))
	arr.sort()
	brr=list(map(int,input().split()))
	brr.sort()
	ans=0
	ip=0
	fp=n-1
	i=0
	count=0
	while i<k:
		if brr[i]==1:
			ans+=arr[fp]+arr[fp]
			fp-=1
			i+=1
		else:
			if count==0:
				brr.sort(reverse=True)
				k-=i
				i=0
				count+=1
				fp=n-i
				ip=0
			else:
				print(ip,fp)
				ans+=arr[fp-1]+arr[ip]
				ip+=brr[i]-1
				fp-=1
	print(ans)