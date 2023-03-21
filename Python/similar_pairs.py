

t=int(input())
while t:
	n=int(input())
	a=list(map(int,input().split()))
	a.sort()
	even=0
	for x in a:
		if x%2==0:
			even+=1
		else:
			continue
	ex=0
	for i in range(n-1):
		if a[i+1]-a[i]==1:
			ex+=1
		else:
			continue
	odd=n-even
	if even==odd:
		if even%2==0 or ex>=1:
			print("YES")
		else:
			print("NO")
	else:
		z=0
		if even%2==0 and odd%2==0:
			z=1
		for i in range(1,ex+1):
			if (odd-i)%2==0 and (even-i)%2==0:
				z=1
				break
			else:
				continue
		if z==0:
			print("NO")
		else:
			print("YES")
	t-=1