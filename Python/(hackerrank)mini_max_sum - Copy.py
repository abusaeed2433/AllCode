
arr=list(map(int,input().split()))
arr.sort()
print(sum(arr)-arr[len(arr)-1],sum(arr)-arr[0])