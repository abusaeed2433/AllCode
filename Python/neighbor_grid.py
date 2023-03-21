import sys
input=sys.stdin.buffer.readline
import os
from math import*
import copy
t=int(input())
while t:
	t-=1
	n,m=map(int,input().split())
	ans=[]
	checker=0
	for i in range(n):
		arr=list(map(int,input().split()))
		ans.append(arr)
	checker=0
	for i in range(n):
		for j in range(m):
			if i==0:
				if j==0 or j==m-1:
					if ans[i][j]>2:
						checker=1
						break
					else:
						ans[i][j]=2
				else:
					if ans[i][j]>3:
						checker=1
						break
					else:
						ans[i][j]=3
			elif i==n-1:
				if j==0 or j==m-1:
					if ans[i][j]>2:
						checker=1
						break
					else:
						ans[i][j]=2
				else:
					if ans[i][j]>3:
						checker=1
						break
					else:
						ans[i][j]=3
			else:
				if j==0 or j==m-1:
					if ans[i][j]>3:
						checker=1
						break
					else:
						ans[i][j]=3
				elif ans[i][j]>4:
					checker=1
					break
				else:
					ans[i][j]=4
		if checker==1:
			break
	if checker==1:
		print("NO")
	else:
		print("YES")
		for i in range(n):
			for j in range(m):
				print(ans[i][j],end=' ')
			print()
