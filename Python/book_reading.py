

t=int(input())
while t:
	n,m=list(map(int,input().split()))
	x=[]
	for i in range(1,11):
		c=m*i
		d=str(c)
		d=int(d[len(d)-1])
		x.append(d)
	s=sum(x)
	n=n//m
	r=n%10
	n=n//10
	ans=(s*n)+sum(x[0:r])
	print(ans)
	t-=1