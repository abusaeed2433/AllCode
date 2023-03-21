

t=int(input())
while t:
	t-=1
	check=[[0,0,1],[0,1,0],[1,0,0],[0,1,1],[1,1,0],[1,0,1],[1,1,1]]
	arr=list(map(int,input().split()))
	for i in range(3):
		if arr[i]>4:
			arr[i]=4
	print(arr)
	