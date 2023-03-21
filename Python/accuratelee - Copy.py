import os
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	s=input()
	p1=-1
	p0=-1
	for i in range(n):
		if s[i]=="1":
			p1=i
			break
	for i in range(n-1,-1,-1):
		if s[i]=="0":
			p0=i
			break
	if p1==-1 or p0==-1:
		print(s)
	elif p1>p0:
		print(s)
	else:
		print(s[0:p1],end='')
		print("0",end='')
		print(s[p0+1:])