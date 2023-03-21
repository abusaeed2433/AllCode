import sys
input=sys.stdin.buffer.readline
import os

n,a,b=map(int,input().split())
arr=list(map(int,input().split()))
s=0
c=0
for x in arr:
	if x==1:
		if a!=0:
			a-=1
		elif b!=0:
			b-=1
			c+=1
		elif c!=0:
			c-=1
		else:
			break
		s+=x
	else:
		if b!=0:
			s+=x
			b-=1
print(sum(arr)-s)


