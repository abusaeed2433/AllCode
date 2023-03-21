import sys
from math import*
input=sys.stdin.buffer.readline

n,m=map(int,input().split())
arr=list(map(int,input().split()))
arr.sort()
ans=[]
s=0
k=1
i=0
while s<=m and i<n:
	if k==arr[i]:
		k+=1
		i+=1
	else:
		s+=k
		ans.append(k)
		k+=1

if s<m:
	n=arr[-1]+1
	x1=ceil((-1+sqrt(4*n*(n+1)+1-2*(m-s)))/2)
	x2=ceil((-1-sqrt(4*n*(n+1)+1-2*(m-s)))/2)
	x=max(x1,x2)
	print(len(ans)+x-arr[-1])
	for y in ans:
		print(y,end=' ')
	for i in range(n,x+1):
		print(i,end=' ')

else:
	print(len(ans)-1)
	for i in range(len(ans)-1):
		print(ans[i],end=' ')