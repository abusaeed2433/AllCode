

n=int(input())
arr=list(map(int,input().split()))
brr=[]
for i in range(max(arr)+1):
	brr.append([])
for i in range(n):
	brr[arr[i]-1].append(i+1)
ans=[]
for x in brr:
	if len(x)!=0:
		if len(x)==1 or len(x)==2:
			ans.append(x)
		else:
			z=[]
			for j in range(1,len(x)):
				z.append(x[j]-x[j-1])
			if len(set(z))==1:
				ans.append(x)
			else:
				ans.append([0])
	else:
		ans.append([0])
bns=list(filter(lambda y:y[0]!=0,ans))
print(len(bns))
for i in range(len(ans)):
	if ans[i][0]!=0:
		if len(ans[i])==1:
			print(i+1,"0")
		else:
			print(i+1,ans[i][1]-ans[i][0])

