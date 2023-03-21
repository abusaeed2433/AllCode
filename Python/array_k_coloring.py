import sys
input=sys.stdin.buffer.readline
import copy
from bisect import*

n,k=map(int,input().split())
m=0
arr=list(map(int,input().split()))
brr=copy.deepcopy(arr)
brr.sort()
d=dict()
for i in range(n):
	d[arr[i]]=0
	c=bisect_right(brr,brr[i])-bisect_left(brr,brr[i])
	if c>m:
		m=c
if m>k:
	print("NO")
else:
	print("YES")
	for i in range(n):
		print(d[arr[i]]+1,end=' ')
		d[arr[i]]+=1
