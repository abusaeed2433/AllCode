
n,a,b=map(int,input().split())
arr=list(map(int,input().split()))
exp=arr[0]
total_s=sum(arr)
arr=arr[1:n]
arr.sort(reverse=True)

if a==b:
	print(n-1)
else:
	ans=0
	k=0
	while ((a*exp)//total_s)<b:
		ans+=1
		total_s-=arr[k]
		k+=1
	print(ans)