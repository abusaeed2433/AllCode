import sys
import os
from math import*
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
c=max(arr)
for i in range(n):
	arr[i]=c-arr[i]
gc=arr[0]
for i in range(n):
	gc=gcd(gc,arr[i])
print((sum(arr)//gc),gc)
