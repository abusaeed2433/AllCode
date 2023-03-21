import sys
input=sys.stdin.buffer.readline

n=int(input())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
if arr1==arr2:
	print(n)
else:
	da=dict()
	db=dict()
	for i in range(n):
		da.update({arr1[i]:i})
		db.update({arr2[i]:i})
	ans=[]
	#print(da)
	#print(db)
	for i in range(1,n+1):
		ans.append((da[i]-db[i])%n)
	#print(ans)


	ans.sort()
	anss=0
	count=1
	for i in range(n-1):
		if ans[i]==ans[i+1]:
			count+=1
		else:
			if count>anss:
				anss=count
			count=1
	if count>anss:
		anss=count
	print(anss)
