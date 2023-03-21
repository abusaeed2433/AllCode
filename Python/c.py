import sys
from math import*



input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	s=bin(n).replace("0b","")
	#print(s)
	c=int(ceil(n/2))
	d=int(ceil((n-c)/2))
	e=n-c-d;
	f=int(ceil(e/2))
	g=int(ceil((e-f)/2))
	h=e-f-g
	h+=4
	s=h*(h+1)//2
	s-=10
	print(c+2*d+3*f+4*g+s)
