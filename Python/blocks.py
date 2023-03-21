
import os
from math import*

def checker(s,s1,ans):
	for i in range(n-1):
		if s[i]==s1:
			if s[i]=="B":
				s[i]="W"
			else:
				s[i]="B"
			ans.append(i+1)
			if s[i+1]=="B":
				s[i+1]="W"
			else:
				s[i+1]="B"
	return ans


n=int(input())
s=input()
s=list(s)
if "B" not in s or "W" not in s:
	print("0")
else:
	ans=[]
	ans=checker(s,"W",ans)
	#print(s)
	if len(set(s))==1:
		print(len(ans))
		for x in ans:
			print(x,end=' ')
	else:
		ans=checker(s,"B",ans)
	#	print(s)
		if len(set(s))==1:
			print(len(ans))
			for x in ans:
				print(x,end=' ')
		else:
			print("-1")

