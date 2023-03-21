
t=int(input())
while t:
	n=int(input())
	a=list(map(int,input().split()))
	f=[False for i in range(n)]
	for i in range(n):
		swapped=False
		for j in range(len(a)-2,-1,-1):
			if a[j]>a[j+1] and f[j]==False:
				temp=a[j]
				a[j]=a[j+1]
				a[j+1]=temp
				f[j]=True
				swapped=True
		if swapped==False:
			break
	a=list(map(str,a))
	print(" ".join(a))
	t-=1