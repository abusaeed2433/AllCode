
n,k=map(int,input().split())
arr=list(map(int,input().split()))
arr.sort()
#print(arr)
if k==n:
	print(arr[-1])
elif k==0:
	if arr[0]==1:
		print("-1")
	else:
		print("1")
else:
	if arr[k-1]==arr[k]:

		print("-1")
	else:
		print(arr[k-1])