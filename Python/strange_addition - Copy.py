import os
from math import*

n=int(input())
arr=list(map(int,input().split()))
ans=[]
count=0
for x in arr:
	s=str(x)
	z=0
	for y in s:
		if y=="0":
			z=1
			ans.append(x)
			break
	if z==0 and count==0:
		ans.append(x)
		count=1
print(len(ans))
for x in ans:
	print(x,end=' ')
