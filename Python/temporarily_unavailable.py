
t=int(input())
while t:
	a,b,c,r=map(int,input().split())
	e=min(a,b)
	f=max(a,b)
	total=f-e
	cov1=c-r
	cov2=c+r
	ans1=cov1-e
	ans2=f-cov2
	if ans1<0:
		ans1=0
	if ans2<0:
		ans2=0
	print(min(total,ans1+ans2))
	t-=1