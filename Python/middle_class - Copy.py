

t=int(input())
while t:
	n,x=list(map(int,input().split()))
	a=list(map(int,input().split()))
	a.sort(reverse=True)
	z=0
	s=sum(a)
	while len(a)!=0:
		if (s/n)>=x:
			z=1
			break
		else:
			s-=a[-1]
			a.pop()
			n-=1
	print(n)

	t-=1