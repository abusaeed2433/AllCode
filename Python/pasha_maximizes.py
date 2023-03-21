import os
import copy

n,k=map(str,input().split())
n=list(n)
for x in n:
	x=int(x)
k=int(k)
i=0
#print(n,k)
while k>0 and i<len(n)-1:
	arr=n[i+1:i+1+k]
	d=max(arr)
	pos=arr.index(d)
	if d>n[i]:
		for j in range(i+pos+1,i,-1):
			n[j]=n[j-1]
		n[i]=d
		k-=pos+1
	i+=1
for x in n:
	print(x,end='')


