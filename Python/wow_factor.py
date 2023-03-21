import os
from math import*

s=input()
v,count,ans=[0]*3

for i in range(len(s)):
	if s[i]=="o":
		count+=v
	elif i>0 and s[i-1]=="v":
		v+=1
		ans+=count
print(ans)
