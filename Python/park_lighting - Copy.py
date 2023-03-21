from math import*

t=int(input())
while t:
	n,m=map(int,input().split())
	print(int(ceil(n*m/2)))
	t-=1