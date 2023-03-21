import sys
input=sys.stdin.buffer.readline
import os
from math import*


t=int(input())
while t:
	t-=1
	l,r,m=map(int,input().split())
	if m<l:
		print(l,l,l+l-m)
	else:
		for i in range(l,r+1):
			rem1=m%i
			rem2=i-rem1
			if l+rem1<=r:
				print(i,rem1+l,l)
				break
			if l+rem2<=r:
				print(i,l,l+rem2)
				break