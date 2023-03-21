
#guessing
t=int(input())
while t:
	t-=1
	n,m=map(int,input().split())
	if n%m==0:
		print("YES")
	else:
		print("NO")
#unknown_2433