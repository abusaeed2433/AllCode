

t=int(input())
while t:
	n,k=list(map(int,input().split()))
	a=list(map(int,input().split()))
	a.sort()
	s=sum(a)
	b=list(map(int,input().split()))
	b.sort(reverse=True)
	for i in range(0,k):
		if b[i]>a[i]:
			s+=(b[i]-a[i])
		else:
			break
	print(s)

	t-=1