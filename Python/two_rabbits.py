

t=int(input())
while t:
	a=list(map(int,input().split()))
	ans=(a[1]-a[0])/(a[2]+a[3])
	if ans==int(ans):
		print(int(ans))
	else:
		print("-1")
	t-=1
