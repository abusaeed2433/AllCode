import os
from math import*

s=input()
ch=0
cm=0
ans=[]
z=0
for i in range(len(s)-4):
	if s[i:i+5]=="heavy":
		z=1
		ans.append(ch*cm)
		cm=0
		ch+=1
	elif s[i:i+5]=="metal":
		if z==1:
			cm+=1

ans.append(ch*cm)
#print(ans)
print(sum(ans))
