

t=int(input())
while t:
	n=int(input())
	n=n//2
	s=(n*(n+1)*(2*n+1))//6
	s=s*8
	print(s)
	t-=1