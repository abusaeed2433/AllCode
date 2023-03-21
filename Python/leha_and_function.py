import sys
input=sys.stdin.buffer.readline
from math import*
import copy


n=int(input())
arr=list(map(int,input().split()))
arr.sort(reverse=True)
brr=list(map(int,input().split()))
crr=copy.deepcopy(brr)
brr.sort()
d=dict()
for i in range(n):
	d[brr[i]]=arr[i]
print(d[2])
for i in range(n):
	print(d[crr[i]],end=' ')
