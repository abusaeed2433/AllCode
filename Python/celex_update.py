from math import*

t=int(input())
while t:
	x1,y1,x2,y2=map(int,input().split())
	x=int(fabs(x1-x2))
	y=int(fabs(y1-y2))
	print(x*y+1)
	t-=1