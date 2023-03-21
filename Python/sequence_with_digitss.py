
t=int(input())
while t:
	a1,k=list(map(int,input().split()))
	l=[]
	a1=str(a1)
	l.append(a1)
	z=0
	while min(a1)!='0':
		k-=1
		if k==0:
			z=1
			print(l[-1])
			break
		else:
			a1=str(int(a1)+int(min(a1))*(int(max(a1))))
			l.append(a1)
	if z==0:
		print(l[-1])
	t-=1