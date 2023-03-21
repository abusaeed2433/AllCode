import sys
from math import*
#from decimal import Decimal
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	a,b=map(int,input().split())
	c=int(min(a,b))
	d=int(max(a,b))
	count=0
	while c<d:
		c*=2
		count+=1
	if c==d:
		print(int(ceil(count/3)))
	else:
		print("-1")

#	if a==b:
#		print("0")
#	else:
#		c=max(a,b)/min(a,b)
#		print(c,c*min(a,b))
#		if Decimal(c*min(a,b))!=Decimal(max(a,b)):
#			print("-1")
#		else:
#			count=0
#			while c==int(c) and c!=1:
#				c=c/2
#				count+=1
#			if c==1:
#				print(int(ceil(count/3)))
#			else:
#				print("-1")