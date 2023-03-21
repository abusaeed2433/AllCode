
import math
def counter(n):
	z=[]
	i=1
	while i<=math.sqrt(n):
		if n%i==0:
			if n/i==i:
				z.append(i)
			else:
				z.append(i)
				z.append(n/i)
		i+=1
	print(len(z))


n=int(input())
a=list(map(int,input().split()))
if n==1:
	counter(a[0])
else:
	gc=math.gcd(a[0],a[1])
	for i in range(2,n):
		gc=math.gcd(gc,a[i])
	counter(gc)
