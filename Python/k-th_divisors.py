import sys
from math import*
input=sys.stdin.buffer.readline
import os

n,k=map(int,input().split())

div=[]
count=0
ans=0
last=0
for i in range(1,int(sqrt(n))+1):
	if n%i==0:
		last=i
		count+=1
		if count==k:
			ans=i
			break
		else:
			div.append(n//i)
if ans!=0:
	print(ans)
else:
	if last==div[-1]:
		div.pop()
	div=div[::-1]
#	print(div)
#	print(count)
	if (k-count)<=len(div):
		print(div[k-count-1])
	else:
		print("-1")
