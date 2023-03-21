from math import *

t=int(input())
while t:
	t-=1
	a,b=map(int,input().split())
	if gcd(a,b)==1:
		print("Finite")
	else:
		print("Infinite")
