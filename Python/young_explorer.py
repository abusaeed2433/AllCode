

t=int(input())
while t:
	n=int(input())
	a=list(map(int,input().split()))
	a.sort()
	c=len(a)
	ans=0
	i=1
	k=0
	while i<=c:
		b=a[k:i]
		if max(b)<=len(b):
			ans+=1
			k=i
			i=k+a[k-1]
		else:
			i+=1
	print(ans)

	t-=1