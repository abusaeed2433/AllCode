from math import*

t=int(input())
while t:
	t-=1
	n,m,k=map(int,input().split())
	max_cards=n//k
	if m==0:
		print("0")
	elif max_cards>=m:
		print(m)
	else:
		x=max_cards
		if ((m-x)/(k-1))==((m-x)//(k-1)):
			print(x-((m-x)//(k-1)))
		else:
			y=int(ceil((m-x)/(k-1)))
			print(x-y)