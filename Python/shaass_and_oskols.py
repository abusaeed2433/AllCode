
n=int(input())
a=list(map(int,input().split()))
w=int(input())
if n==1:
	if w==0:
		print(a[0])
	else:
		for i in range(w):
			x,y=map(int,input().split())
		if x==0:
			print(a[0])
		else:
			print("0")
else:
	if w==0:
		for z in a:
			print(z)
	else:
		for i in range(w):
			x,y=map(int,input().split())
			if x==1:
				a[1]+=a[0]-y
			elif x==n:
				a[n-2]+=y-1
			else:
				a[x-2]+=y-1
				a[x]+=a[x-1]-y
			a[x-1]=0
			#print(a)
		for x in a:
			print(x)