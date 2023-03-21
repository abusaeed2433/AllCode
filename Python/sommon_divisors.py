import math

def gcd(a,b):#a is less than or equal b
	c=min(a,b)
	d=max(a,b)
	a=c
	b=d
	for i in range(a,-1,-1):
		if a%i==0 and b%i==0:
			return i
		else:
			continue

n=int(input())
a=list(map(int,input().split()))
a.sort(reverse=True)
mina=a[n-1]
gc=a[0]
while len(a)!=0:
	gc=gcd(gc,a[0])
	a=list(filter(lambda x:x%gc!=0,a))
count=0
if gc==1:
	print("1")
else:
	for i in range(1,int(math.ceil(math.sqrt(gc)))+1):
		if gc%i==0:	
			count+=1
		else:
			continue
	print(count+1)