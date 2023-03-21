import sys
input=sys.stdin.buffer.readline
import os
from math import*
import copy


t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	brr=copy.deepcopy(arr)
	brr.sort()
	var1,var2=[0]*2
	count=0
	checkpos=True
	fp=-1
	lp=-1
	check1=0
	check2=0
	for i in range(n):
		if arr[i]!=brr[i] and check1==0:
			fp=i
			check1=1
		if arr[n-i-1]!=brr[n-i-1] and check2==0:
			lp=n-i
			check2=1
	if fp==-1 or lp==-1:
		print("0")
	else:
#		print(fp,lp)
		for i in range(fp,lp):
			if arr[i]==brr[i]:
				if var1==1:
					count+=1
			else:
				var1=1
			if count>0:
				break
		if count==0:
			if var1==1:
				print("1")
			else:
				print("0")
		else:
			print("2")


