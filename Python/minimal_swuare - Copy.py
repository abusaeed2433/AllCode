
t=int(input())
while t:
	t-=1
	a,b=map(int,input().split())
	if (2*min(a,b))>=max(a,b):
		print(int(4*min(a,b)*min(a,b)))
	else:
		print(int(max(a,b)*max(a,b)))