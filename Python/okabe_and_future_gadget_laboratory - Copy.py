
def checker(x,n,a,b):
	for i in range(n):
		for j in range(n):
			if a[i]+b[j]==x:
				return True
			else:
				continue



n=int(input())
l=[]
for i in range(n):
	a=list(map(int,input().split()))
	l.append(a)
z=0
for i in range(n):
	for j in range(n):
		x=l[i][j]
		b=l[i]
		c=[]
		for k in range(n):
			c.append(l[k][j])
		if x==1:
			continue
		else:
			if checker(x,n,b,c):
				continue
			else:
				z=1
				break
	if z==1:
		break
if z==1:
	print("No")
else:
	print("Yes")
