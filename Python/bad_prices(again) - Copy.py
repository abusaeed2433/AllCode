

t=int(input())
while t:
	n=int(input())
	a=list(map(int,input().split()))
	min_a=a[n-1]
	i=n-2
	count=0
	for i in range(n-2,-1,-1):
		if a[i]>min_a:
			count+=1
		else:
			min_a=a[i]
	print(count)
	t-=1