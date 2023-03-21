

t=int(input())
while t:
	n=int(input())
	a=list(map(int,input().split()))
	b=list(map(int,input().split()))
	check=[0,0]
	z=0
	if a[0]>0:
		check[0]='+'
	elif a[0]<0:
		check[1]='-'
	if a[0]!=b[0]:
		print("NO")
	else:
		for i in range(1,n):
			if a[i]==b[i]:
				if a[i]<0:
					check[1]='-'
				elif a[i]>0:
					check[0]='+'
			else:
				if a[i]<b[i]:
					if check[0]!='+':
						z=1
						break
					if a[i]<0:
						check[1]='-'
					elif a[i]>0:
						check[0]='+'
				else:
					if check[1]!='-':
						z=1
						break
					if a[i]<0:
						check[1]='-'
					elif a[i]>0:
						check[0]='+'
		if z==0:
			print("YES")
		else:
			print("NO")

	t-=1