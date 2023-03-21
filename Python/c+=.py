import sys
input=sys.stdin.buffer.readline
#import os
t=int(input())
while t:
	t-=1
	a,b,n=map(int,input().split())
	count=1
	c=a+b
	d=max(a,b)
	if d>n:
		print("0")
	else:
		while c<=n:# and b<=n:
			count+=1
			e=max(c,d)
			c+=d
			d=e
		print(count)