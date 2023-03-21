
n=int(input())
a=list(map(int,input().split()))
s=list(set(a))
s.sort(reverse=True)
#print(s)
ans=[0]*n
k=1
for y in s:
	count=0
	for j in range(0,n):
		if a[j]==y:
			ans[j]=k
			count+=1
		else:
			continue
	k+=count
for x in ans:
	print(x,end=' ')
						#unknown_2433
