

t=int(input())
while t:
	t-=1
	n,k=map(int,input().split())
	alp=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
	#print(alp)
	ans=alp[0:k]
	for i in range(0,n):
		print(ans[i%k],end='')
	print()
					#unknown_2433