import sys
input=sys.stdin.buffer.readline
import os
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	dif=[]
	for i in range(n-1):
		dif.append(arr[i]-arr[i+1])
		
#	print(dif)
	check=False
	for i in range(n-2):
		if dif[i]<0 and dif[i+1]>0:
			check=True
			print("YES")
			print(i+1,i+2,i+3)
			break
	if check==False:
		print("NO")