
n,k=map(int,input().split())
ans=n//(k+1)
#print(ans)
if (k+1)*ans>n//2:
	ans=(n//2)//(k+1)
print(ans,k*ans,n-((k+1)*ans))