

t=int(input())
while t:
	n=int(input())
	pp=0
	pc=0
	z=0
	for i in range(n):
		p,c=list(map(int,input().split()))
		if p>=pp and c>=pc and p>=c and (p-pp)>=(c-pc):
			if p==pp:
				if c==pc:
					continue
				else:
					z=1
			pp=p
			pc=c
		else:
			z=1
	if z==1:
		print("NO")
	else:
		print("YES")
	t-=1