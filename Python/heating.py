
t=int(input())
while t:
	t-=1
	c,s=map(int,input().split())
	a=s//c
	b=s%c
	ans=0
	for i in range(0,c-b):
		ans+=int(a*a)
	for i in range(c-b,c):
		ans+=int((a+1)*(a+1))
	print(ans)