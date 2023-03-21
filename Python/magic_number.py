
t=int(input())
while t:
	t-=1
	x,y,n=map(int,input().split())
	ans=(n//x)*x
	ans+=y
	if ans<=n:
		print(ans)
	else:
		print(ans-x)