import sys
input=sys.stdin.buffer.readline
import os
from math import*

arr=list(map(int,input().split()))
d=arr[-1]
arr.pop()
arr.sort()
d1=arr[1]-arr[0]
d2=arr[2]-arr[1]
ans=0
if d1<d:
	ans+=d-d1
if d2<d:
	ans+=d-d2
print(ans)
