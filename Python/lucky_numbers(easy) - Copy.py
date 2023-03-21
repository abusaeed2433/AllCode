import os
from math import*

s=input()
if len(s)%2==1:
	n=(len(s)+1)//2
	for i in range(n):
		print("4",end='')
	for i in range(n):
		print("7",end='')
else:
	checker=0
	c1,c2=[int(len(s)//2)]*2
	z=0
	ans=[]
	for x in s:
		if x=="4":
			if c1!=0:
				ans.append(x)
				c1-=1
			else:
				ans.append("7")
				c2-=1
				break
		elif x=="7":
			if c2!=0:
				ans.append("7")
				c2-=1
			else:
				z=1
				break
				c1-=1
		else:
			if int(x)<4:
				if c1!=0:
					ans.append("4")
					c1-=1
				else:
					ans.append("7")
					c2-=1
					z=1
					break
			elif int(x)<7:
				if c2!=0:
					ans.append("7")
					c2-=1
					z=1
					break
				else:
					checker=1
					z=1
					break
			else:
				z=1
				break


	if checker==1:
		count=len(s)+2
		for i in range(count//2):
			print("4",end='')
		for i in range(count//2):
			print("7",end='')
	else:
		if z==0:
			for x in ans:
				print(x,end='')
			for i in range(c1):
				print("4",end='')
			for i in range(c2):
				print("7",end='')
		else:
			if "4" in ans:
				c1,c2=[len(s)//2]*2
				for k in range(len(ans)-1,-1,-1):
					if ans[k]=="4":
						print("7",end='')
						c2-=1
						break
					else:
						print(ans[k],end='')
						c2-=1
				for i in range(c1):
					print("4",end='')
				for i in range(c2):
					print("7",end='')
	
	
			else:
				count=len(s)+2
				for i in range(count//2):
					print("4",end='')
				for i in range(count//2):
					print("7",end='')	