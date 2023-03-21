import sys
input=sys.stdin.buffer.readline
import os
from math import*

n,m,q=map(int,input().split())

arr=[]
while q:
	t,r1,c1,r2,c2=map(int,input().split())
	if t==1:
		arr.append([r1,c1,r2,c2])
	elif t==2:
		arr.remove([r1,c1,r2,c2])
	else:
		
