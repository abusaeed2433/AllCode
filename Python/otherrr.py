

n=int(input())
arr=list(map(int,input().split()))
k=0
arr1=[]
i=0
ans=[]
while i<n:
	z=0
	for j in range(len(arr1)):
		if arr1[j] not in arr[i:n]:
			ans.append(arr1[j])
			#print("a",end='')
			arr1.pop(j)
			i+=1
			z=1
			break
	if z==0:
		if k not in arr[i:n]:
			ans.append(k)
			i+=1
		else:
			arr1.append(k)
	k+=1
if len(ans)==len(list(set(ans))):
	for x in ans:
		print(x,end=' ')
else:
	print("-1")
