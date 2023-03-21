import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	d=int(input())
	if (d*d)-4*d<0:
		print("N")
	else:
		a1=(d+sqrt(d*(d-4)))/2
		a2=(d-sqrt(d*(d-4)))/2
		#print(a1,a2)
		a=max(a1,a2)
		print("Y",a,d-a)