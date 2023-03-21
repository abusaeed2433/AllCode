
t=int(input())
while t:
	t-=1
	n,k,m,w=map(int,input().split())
	ans=1
	for i in range(m,k,-1):
		ans*=i
	for i in range(1,m-k+1):
		ans/=i
	print(ans)
	ans1=1
	for i in range(w+m-k,n-k,-1):
		ans1*=i
	for i in range(1,w+m-n+1):
		ans1/=i
	print(ans1)
	print(int(ans+ans1))