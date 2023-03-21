import os
from math import*


n=int(input())
arr=[]
for i in range(n):
	s=input()
	arr.append(s)
ans=""
sp=False
for i in range(len(arr[0])):
	ans+=arr[0][i]
#	print(ans)
	for j in range(1,n):
		if arr[j][0:i+1]!=ans:
			print(len(ans)-1)
			sp=True
			break
	if sp==True:
		break
