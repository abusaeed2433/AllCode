

t=int(input())
while t:
	n=int(input())
	a=list(map(int,input().split()))
	a.sort(reverse=True)
	k=0
	z=0
	#print(a)
	for i in range(0,n):
		if a[i]<=n-k:
			print(n-k+1)
			z=1
			break
		else:
			k+=1
	if z==0:
		print("1")
	t-=1