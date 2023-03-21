
n=int(input())
x="C."
y='.C'
c=n//2
ans=2*c*c
if n%2==0:
	print(ans)
else:
	ans+=n
	print(ans)
for i in range(0,n):
	for j in range(0,n):
		if i%2==0:
			print(x[j%2],end='')
		else:
			print(y[j%2],end='')
	print()