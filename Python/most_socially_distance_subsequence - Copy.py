import sys
import os
from math import*
import copy
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	dif=[]
	for i in range(n-1):
		dif.append(int(fabs(arr[i+1]-arr[i])))
	if sum(dif)==((n-1)*(n))//2:
		print(n)
		for x in arr:
			print(x,end=' ')
	else:
#		array=copy.deepcopy(arr)
		ans=sum(dif)
		i=0
		while i<len(dif)-1 and len(arr)>2:
			if dif[i]==min(dif):
				if i==0:
					c=int(fabs(arr[2]-arr[0]))
					d=int(fabs(arr[2]-arr[1]))
					if c>d:
						arr.pop(1)
					else:
						arr.pop(2)
					dif[i]=max(c,d)
				elif i==n-2:
					c=int(fabs(arr[-3]-arr[-1]))
					d=int(fabs(arr[-2]-arr[-1]))
					if c>d:
						arr.pop(-2)
					else:
						arr.pop(-3)
					dif[i]=max(c,d)
				else:
					c=int(fabs(arr[i+1]-arr[i-1]))
					d=int(fabs(arr[i]-arr[i+2]))
					if c>d:
						arr.pop(i)
					else:
						arr.pop(i+1)
					dif[i]=max(c,d)
			if sum(dif)>ans:
				ans=sum(dif)
			#print(arr,dif)
			i+=1
		ans=0
		print(len(arr))
		for x in arr:
			print(x,end=' ')
		print()




