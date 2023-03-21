import os

def calc(s):
	count=0
	for i in range(len(s)-6):
		if s[i:i+7]==['a', 'b', 'a', 'c', 'a', 'b', 'a']:
			count+=1
		if count>1:
			return False
	if count==1:
		return True
	else:
		return False

t=int(input())
while t:
	t-=1
	n=int(input())
	s=input()
	if "abacaba" in s:
		count=0
		for i in range(n-6):
			if s[i:i+7]=="abacaba":
				count+=1
		if count==1:
			print("YES")
			for i in range(n):
				if s[i]=="?":
					print("z",end='')
				else:
					print(s[i],end='')
		else:
			print("NO",end='')

	else:
		printed=False
		s=list(s)
		x="abacaba"
		k=0
		pos=-1
		lp=-1
		for i in range(n-6):
			z=0
			k=0
			for j in range(i,i+7):
				if s[j]==x[k] or s[j]=="?":
					k+=1
				else:
					z=1
					break
			if z==0:
				val=calc(s[0:i]+["a","b","a","c","a","b","a"]+s[i+7:])
				if val==True:
					printed=True
					print("YES")
					k=0
					for j in range(n):
						if j<i:
							if s[j]!="?":
								print(s[j],end='')
							else:
								print("z",end='')
						elif j>=i and j<i+7:
							print(x[k],end='')
							k+=1
						else:
							if s[j]!="?":
								print(s[j],end='')
							else:
								print("z",end='')
					break
		if printed==False:
			print("NO",end='')
	print()
