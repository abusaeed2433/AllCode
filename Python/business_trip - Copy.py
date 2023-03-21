
k=int(input())
arr=list(map(int,input().split()))
arr.sort(reverse=True)
need=0
if k==need:
	print("0")
else:
	z=0
	for i in range(12):
		need+=arr[i]
		if need>=k:
			z=1
			print(i+1)
			break
	if z==0:
		print("-1")
