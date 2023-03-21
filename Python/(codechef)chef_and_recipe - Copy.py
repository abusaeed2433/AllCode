
t=int(input())
while t:
	n=int(input())
	arr=list(map(int,input().split()))
	for i in range(n-1):
		if arr[i]==arr[i+1]:
			arr[i]=-1
		else:
			continue
#	print(arr)
	arr=list(filter(lambda x:x!=-1,arr))
	print(arr)
	if len(arr)==len(set(arr)):
		print("YES")
	else:
		print("NO")
	t-=1