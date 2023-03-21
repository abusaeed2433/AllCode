import os
from math import*

t=int(input())
while t:
	t-=1
	s=input()
	if "aa" in s or "bb" in s or "cc" in s:
		print("-1")
	elif len(s)==1:
		if s[0]=="?":
			print("a")
		else:
			print(s[0])
	else:
		y={"a","b","c"}
		s=list(s)
		for i in range(len(s)):
			if i==0:
				if s[i]=="?":
					if s[i+1]=="a":
						s[i]="b"
						print("b",end='')
					else:
						s[i]="a"
						print("a",end='')
				else:
					print(s[i],end='')
			elif i==len(s)-1:
				if s[i]=="?":
					if s[i-1]=="a":
						s[i]="b"
						print("b")
					else:
						s[i]="a"
						print("a")
				else:
					print(s[i])
			else:
				if s[i]=="?":
					if s[i+1]=="?":
						if s[i-1]=="a":
							s[i]="b"
							print("b",end='')
						else:
							s[i]="a"
							print("a",end='')
					else:
						zzz=[s[i-1],s[i+1]]
						z=list(y.difference(zzz))
						print(z[0],end='')
						s[i]=z[0]
				else:
					print(s[i],end='')