import os
import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	if n==1:
		print(sum(arr))
	else:
		brr=[]
		crr=[]
		s=0
		i=0
		while i<n:
			s+=arr[i]
			i+=2
		i=0
		while i<n:
			if i+1<n:
				brr.append(arr[i+1]-arr[i])
			if i>0:
				crr.append(arr[i-1]-arr[i])
			i+=2
		maxbrr=0
		maxcrr=0
		c=0
		for x in brr:
			c+=x
			if c<0:
				c=0
			maxbrr=max(maxbrr,c)
		c=0
		for x in crr:
			c+=x
			if c<0:
				c=0
			maxcrr=max(maxcrr,c)
#		print(brr)
#		print(crr)
		print(s+max(maxbrr,maxcrr))
