import sys
input=sys.stdin.buffer.readline
import os
from math import*


n=int(input())
arr=list(map(int,input().split()))
brr=list(map(int,input().split()))
marr=[]
neg=[]
for i in range(n):
	if brr[i]==-1:
		neg.append([i,arr[i],brr[i]])
	else:
		marr.append([brr[i],arr[i],i])
marr.sort()
print(marr)
print(neg)
