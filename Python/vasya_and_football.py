import os
from math import*

home=input()
away=input()
t=int(input())
aa=[]
a=[]
ss=[]
hh=[]
for i in range(t):
	s=input()
	c=s
	if s[-1]=="r":
		if s[3]=="a" or s[2]=="a":
			aa.append(i)
		else:
			hh.append(i)
	else:
		if s[3]=="a" or s[2]=="a":
			z=0
			if s[1]==" ":
				s=s[1:]
			else:
				s=s[2:]
			for j in range(len(ss)):
				if ss[j][1]==" ":
					if ss[j][1:]==s:
						aa.append(j)
						z=1
						break
				else:
					if ss[j][2:]==s:
						aa.append(j)
						z=1
						break
		else:
			z=0
			if s[1]==" ":
				s=s[1:]
			else:
				s=s[2:]
			for j in range(len(ss)):
				if ss[j][1]==" ":
					if ss[j][1:]==s:
						hh.append(j)
						z=1
						break
				else:
					if ss[j][2:]==s:
						hh.append(j)
						z=1
						break
	ss.append(c)
	#print(aa,hh)
arr=aa+hh
arr.sort()
print(aa,hh)
for i in range(len(arr)):
	if arr[i] in aa:
		print(away,ss[i])
		if ss[i][1]==" ":
			if ss[i][5]==" ":
				print(ss[i][4],ss[i][0])
			else:
				print(ss[i][4:6],ss[i][0])
		else:
			if ss[i][6]==" ":
				print(ss[i][4],ss[i][0:2])
			else:
				print(ss[i][4:6],ss[i][0:2])
	else:
		print(home,end=' ')
		if ss[i][1]==" ":
			if ss[i][5]==" ":
				print(ss[i][4],ss[i][0])
			else:
				print(ss[i][4:6],ss[i][0])
		else:
			if ss[i][6]==" ":
				print(ss[i][4],ss[i][0:2])
			else:
				print(ss[i][4:6],ss[i][0:2])
