
n=int(input())
if n==1:
	c=int(input())
	print("0")
else:
	arr=[]
	row_sum=[]
	col_sum=[]
	for i in range(n):
		a=list(map(int,input().split()))
		arr.append(a)
		row_sum.append(sum(a))
	k=0
	for i in range(n):
		c=0
		for j in range(n):
			c+=arr[j][k]
		k+=1
		col_sum.append(c)
	col_sum.sort(reverse=True)
	count=0
	for i in range(n):
		for j in range(n-1,-1,-1):
			if row_sum[i]<col_sum[j]:
				count+=j+1
				break
			else:
				continue
	#print(row_sum)
	#print(col_sum)
	print(count)
					#unknown_2433