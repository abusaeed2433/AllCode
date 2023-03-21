
p,n=map(int,input().split())
ans=[]
for i in range(n):
	x=int(input())
	ans.append(x%p)
z=[]
for i in range(0,n-1):
	for j in range(i+1,n):
		if ans[i]==ans[j]:
			z.append(j+1)
		else:
			continue
if len(z)==0:
	print("-1")
else:
	print(min(z))