
t=int(input())
n=t
arr=[]
while t:
	t-=1
	a=list(map(int,input().split()))
	arr.append(a)

ans=[]
for i in range(n):
	z=0
	for j in range(n):
		if arr[i][0]<arr[j][0] and arr[i][1]<arr[j][1] and arr[i][2]<arr[j][2]:
			z=1
			break
		else:
			continue
	if z==0:
		ans.append(arr[i][3])
	else:
		ans.append(1001)
min_value=min(ans)
#print(ans)
for i in range(n):
	if ans[i]==min_value:
		print(i+1)
		break
	else:
		continue
							#unknown_2433