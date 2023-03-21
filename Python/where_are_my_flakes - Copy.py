import os
from math import*

n,m=map(int,input().split())
r=0
l=n+1
for i in range(m):
	s=input()
	if s[7]=="r":
		for j in range(-1,-len(s),-1):
			if s[j]==" ":
				if int(s[j:len(s)])>r:
					r=int(s[j:len(s)])
				break
	else:
		for j in range(-1,-len(s),-1):
			if s[j]==" ":
				if int(s[j:len(s)])<l:
					l=int(s[j:len(s)])
				break

if l<=r or (l-r-1)==0:
	print("-1")
else:
	print(l-r-1)