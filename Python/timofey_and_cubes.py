
n=int(input())
arr=list(map(int,input().split()))
i=0
while i<=n-i+1:
	arr=arr[0:i]+arr[i:n-i+1:-1]+arr[n-i+1:n]
	i+=1
print(arr)