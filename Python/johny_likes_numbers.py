

n,k=list(map(int,input().split()))
if n%k==0:
	print(n+k)
else:
	print(int(n+k-(n%k)))