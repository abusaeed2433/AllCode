import os

t1=int(input())
while t1:
	t1-=1
	n=int(input())
	s=input()
	t=input()
	ans=[]
	for i in range(n):
		if s[i]!=t[i]:
			ans.append(i+1)
#	print(ans)
	print(len(ans)*3,end=' ')
	for i in range(len(ans)):
		print(ans[i],1,ans[i],end=' ')
	print()

