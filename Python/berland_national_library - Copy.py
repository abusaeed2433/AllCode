import os
from math import*

t=int(input())
ans=0
count=0
arr=[]
while t:
	#print(ans,count,arr)
	if count>ans:
		ans=count
	t-=1
	s=input()
	#print(s,s[0])
	if s[0]=="+":
		count+=1
		arr.append(s[2:])
	else:
		if s[2:] in arr:
			count-=1
		else:
			ans+=1
print(max(ans,count))
