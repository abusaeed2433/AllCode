import os
from math import*

n=int(input())
s=input()
if "CC" in s or "MM" in s or "YY" in s:
	print("No")
else:
	if "??" in s:
		print("Yes")
	else:
		if s[0]=="?" or s[-1]=="?":
			print("Yes")
		else:
			y=0
			for i in range(1,n):
				if s[i]=="?":
					if s[i-1]==s[i+1]:
						print("Yes")
						y=1
						break
			if y==0:
				print("No")