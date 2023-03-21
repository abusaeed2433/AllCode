


def largestBunch(arr):
	n,pp,ans = len(arr),0,0
	for i in range(1,n):
		if(arr[i]!=arr[i-1]):
			ans=max(ans,i-pp)
			pp=i
	ans=max(ans,n-pp)
	return ans


print("Enter array elements:")
arr = list(map(int,input().split()))

print(largestBunch(arr))