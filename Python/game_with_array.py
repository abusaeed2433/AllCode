
n,s=list(map(int,input().split()))
if n<=(s//2):
	print("YES")
	for i in range(0,n-1):
		print("1",end=' ')
	print(s-(n-1))
	print(s//2)
else:
	print("NO")