import sys
input=sys.stdin.buffer.readline
import os
from math import*
import copy

n=int(input())
arr=list(map(int,input().split()))
brr=copy.deepcopy(arr)
brr.sort()
count=0
z=0
is_in_limit=True
check=True
pos=[]
#print(brr)
i=0
while i<n:
	if arr[i]!=brr[i]:
		pos.append(i+1)
		if check==False:
			is_in_limit=False
			break
		for j in range(i+1,n):
			if arr[j]==brr[i]:
				pos.append(j+1)
				crr=arr[i:j+1]
				crr=crr[::-1]
				if crr==brr[i:j+1]:
					check=False
				else:
					is_in_limit=False
				i=j
				break
	i+=1
if is_in_limit==False:
	print("no")
else:
#	print(pos)
	print("yes")
	if check:
		print("1 1")
	else:
		print(pos[0],pos[-1])