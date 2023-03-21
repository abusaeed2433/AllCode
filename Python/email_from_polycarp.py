from math import*

t=int(input())
while t:
	t-=1
	s1=input()
	s=input()
	if len(s1)>len(s):
		print("NO")
	else:
		count=0
		k=0
		pos=0
		for i in range(len(s)):
			if s[i]==s1[k]:
				k+=1
				count+=1
			else:
				if i==0 or s[i]!=s[i-1]:
					break
			if count==len(s1) or k>=len(s1):
				pos=i
				break
		if count!=len(s1):
			print("NO")
		else:
			ns=s[pos:]
#			print(ns)
			issame=True
			for i in range(len(ns)-1):
				if ns[i]!=ns[i+1]:
					issame=False
					break
			if issame:
				print("YES")
			else:
				print("NO")





