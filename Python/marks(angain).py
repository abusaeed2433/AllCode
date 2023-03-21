

n,m=map(int,input().split())
arr=[]
for i in range(n):
	s=input()
	arr.append(s)

pos=[]
#print(arr)
for i in range(m):
	narr=[]
	for j in range(n):
		narr.append(arr[j][i])
#	print(narr)
	d=max(narr)
	val=[]
	for j in range(n):
		if narr[j]==d:
			pos.append(j+1)
#	print(pos)
print(len(set(pos)))

