
def counter(a,z):
	count=0
	for y in a:
		for x in a:
			if x==y:
				count+=1
		z.append(count)
		count=0
	return z

t=int(input())
while t:
	n=int(input())
	a=list(map(int,input().split()))
	if (sum(a)%n)==0:
		z=[]
		a.sort(reverse=True)
		i=0
		zz=0
		while i<(2*n):
			if a[i]==a[i+1] and a[(4*n)-1-i]==a[(4*n)-i-2]:
				z.append(a[i]*a[(4*n)-1-i])
			else:
				zz=1
				break
			i+=2
		if zz==1:
			print("NO")
		else:
			z.sort()
			if z[0]==z[len(z)-1]:
				print("YES")
			else:
				print("NO")	
	else:
		print("NO")
	t-=1