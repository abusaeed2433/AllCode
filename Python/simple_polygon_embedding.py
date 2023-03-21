from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	theta=90/n
	ans=1/tan(radians(theta))
	print(ans)
	
