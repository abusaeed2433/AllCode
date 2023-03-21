import os
from math import*
import copy
from bisect import*

s=input()
if len(s)<26:
	print("-1")
else:
	z=0
	xx=["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
	for i in range(len(s)-25):
		ns=s[i:i+26]
		ns=sorted(ns)
		x=[]
		sign=0
		for j in range(len(ns)):
			if ns[j]=="?":
				sign+=1
			else:
				x.append(ns[j])
		xxx=list(set(xx).difference(set(x)))
		if len(x)==len(set(x)):
			z=1
			for j in range(len(s)):
				if j>=i and j<i+26:
					if s[j]=="?":
						print(xxx[-1],end='')
						xxx.pop()
					else:
						print(s[j],end='')
				else:
					if s[j]=="?":
						print("A",end='')
					else:
						print(s[j],end='')
		if z==1:
			break
	if z==0:
		print("-1")









