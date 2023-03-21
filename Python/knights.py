
n=int(input())
x=["W","B"]
y=x[::-1]
for i in range(n):
	if i%2==0:
		for j in range(n):
			print(x[j%2],end='')
	else:
		for  j in range(n):
			print(y[j%2],end='')
	print()
