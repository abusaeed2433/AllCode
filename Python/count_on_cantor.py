import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	x1=(-1+sqrt(1+(8*n)))/2
	x2=(-1+sqrt(1+(8*n)))/2
	x=max(x1,x2)
	x=int(ceil(x))
	val=(x*(x-1))//2
	val+=1
	a=1
	b=1
	if x%2==0:
		a=1+(n-val)
		b=x-(n-val)
	else:
		b=1+(n-val)
		a=x-(n-val)
	print("TERM %d IS %d/%d"%(n,a,b))
