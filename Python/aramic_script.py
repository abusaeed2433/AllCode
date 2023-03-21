
n=int(input())
arr=list(map(str,input().split()))
ans=[]
for x in arr:
	x=list(set(x))
	x=sorted(x)
	if x not in ans:
		ans.append(x)
print(len(ans))

