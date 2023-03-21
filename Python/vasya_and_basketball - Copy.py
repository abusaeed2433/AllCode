import sys
input=sys.stdin.buffer.readline
import os
import copy

n=int(input())
arr=list(map(int,input().split()))
m=int(input())
brr=list(map(int,input().split()))
arr.sort()
brr.sort()
crr=copy.deepcopy(brr)
a1=len(arr)*3
b1=0
crr=list(filter(lambda x:x>=arr[0],brr))
b1=3*len(crr)+2*(m-len(crr))
b2=2*m
a2=0
if brr[-1]>=arr[-1]:
	a2=2*len(arr)
else:
	arr=list(filter(lambda x:x<=brr[-1]+1,arr))
	a2=2*len(arr)+3*(n-len(arr))
a,b=[0]*2
if a1-b1>=a2-b2:
	a=a1
	b=b1
else:
	a=a2
	b=b2
#print(a1,b1,a2,b2)
print("%d:%d"%(a,b))