from bisect import*

n=int(input())
arr=list(map(int,input().split()))
if 0 in arr:
	arr.sort()
	c0=bisect_right(arr,0)-bisect_left(arr,0)
	c5=bisect_right(arr,5)-bisect_left(arr,5)
	for i in range(c5//9):
		for j in range(9):
			print("5",end='')
	if (c5//9)>0:
		for j in range(c0):
			print("0",end='')
	else:
		print("0")
else:
	print("-1")