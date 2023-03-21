
n,m=map(int,input().split())
l=[]
for i in range(0,m):
	l.append(i+1)
l1=[]
for i in range(n):
	a,b=map(int,input().split())
	l1+=l[a-1:b]
l=set(l)
l1=set(l1)
ans=l.difference(l1)
ans=list(ans)
print(len(ans))
for x in ans:
	print(x,end=' ')