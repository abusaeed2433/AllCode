import sys
input=sys.stdin.buffer.readline
import os
from math import*


xa,ya,xb,yb=map(int,input().split())
n=int(input())
ans=0
pi=3.141593
while n:
	n-=1
	a,b=map(int,input().split())
	var=min((yb-b),(b-ya),(xb-a),(a-xa))
	area=var*var*pi
	if ans<area:
		ans=area
print(ans)
