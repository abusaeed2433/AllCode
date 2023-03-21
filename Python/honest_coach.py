

t=int(input())
while t:
	n=int(input())
	a=list(map(int,input().split()))
	a.sort()
	ans=[]
	z=0
	for i in range(n-1):
		c=int(a[i+1]-a[i])
		if c==0:
			z=1
			break
		else:
			ans.append(int(a[i+1]-a[i]))
	if z==1:
		print("0")
	else:
		print(min(ans))
	t-=1