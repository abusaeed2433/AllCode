import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	k,n,a,b=map(int,input().split())
	mov1,mov2=[0]*2
	var=k
	if k%a==0:
		mov1+=(k//a)-1
		k=a
	else:
		mov1+=(k//a)
		k=k%a
	if mov1>=n:
		print(n)
	else:
		if (var-(b*n))>0:
			turn=int(ceil((-(var-(a*n))+1)/(a-b)))
			print(n-turn)
		else:
			print("-1")
		