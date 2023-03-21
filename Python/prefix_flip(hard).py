import os
t1=int(input())
while t1:
	t1-=1
	n=int(input())
	s=input()
	t=input()
	s+="0"
	t+="0"
	ans=[]
	for i in range(n):
		if s[i]!=s[i+1]:
			ans.append(i+1)
	for i in range(n,0,-1):
		if t[i]!=t[i-1]:
			ans.append(i)
	print(len(ans),end=' ')
	for x in ans:
		print(x,end=' ')
	print()

