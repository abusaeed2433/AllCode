
t=int(input())
while t:
	n,m=list(map(int,input().split()))
	if n==1:
		print("0")
	elif n==2:
		print(m)
	else:
		print(2*m)
	t-=1