import math
def counter(a,k):
	x=list(filter(lambda x:x==k,a))
	return len(x)


t=int(input())
while t:
	n=int(input())
	a=list(map(int,input().split()))
	for i in range(0,n):
		a[i]=a[i]%3
	a.sort()
	z=[]
	for i in range(0,3):
		count=counter(a,i)
		z.append(count)
	ans=z[0]+min(z[1],z[2])+(math.fabs(z[1]-z[2]))//3
	print(int(ans))
	t-=1