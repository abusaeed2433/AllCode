import math

t=int(input())
while t:
	a,b,c,d=list(map(int,input().split()))
	if a<=b:
		print(b)
	else:
		if a>b and d>=c:
			print("-1")
		else:
			ans=b
			rest=a-b
			e=int(math.ceil(rest/(c-d)))
			print(ans+c*e)
	t-=1