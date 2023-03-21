import os
from math import*


t=int(input())
while t:
	t-=1
	s1=input()
	k,s=[0]*2
	count=1
	ans=0
	for x in s1:
		if x=="-":
			if s+k-1<0:
				k+=1
				ans+=count
			s-=1
		else:
			if s+k+1<0:
				ans+=count
				k+=1
			s+=1
		count+=1
	print(ans+len(s1))
