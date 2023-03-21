import sys
from math import*

t=int(input())
while t:
	t-=1
	x,y,c=map(float,input().split())
	p=(c*max(x,y))/(max(x,y)-min(x,y))
	w=sqrt((max(x,y))*(max(x,y))-p*p)
	print(w)
