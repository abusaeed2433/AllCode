import sys
input=sys.stdin.buffer.readline
import os
from math import*

n=int(input())
arr=list(map(int,input().split()))
ans=[0]
z=[]
zz=0
temp=[]
for i in range(0,n):
	if arr[i]>0:
		z.append(arr[i])
		temp.append(arr[i])
	else:
		if -arr[i] in z:
			z.remove(-arr[i])
			if len(z)==0:
				if len(temp)==len(set(temp)):
					ans.append(i+1)
					temp.clear()
				else:
					zz=1
					break
		else:
			zz=1
			break
if len(z)!=0:
	zz=1
#print(ans)
if zz==1:
	print("-1")
else:
	print(len(ans)-1)
	for i in range(1,len(ans)):
		print(ans[i]-ans[i-1],end=' ')
