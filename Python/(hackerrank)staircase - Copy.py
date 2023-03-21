
n=int(input())
k=n-1
for i in range(n):
	for j in range(k):
		print(' ',end='')
	for j in range(k,n):
		print("#",end='')
	k-=1
	print()