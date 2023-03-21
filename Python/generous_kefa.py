
from math import*


n,k=map(int,input().split())
s=input()
s=sorted(s)
ans=0
pos=0
for i in range(n-1):
	if s[i]!=s[i+1]:
		val=i+1-pos
		pos=i+1
		if ans<val:
			ans=val
#print(n,pos)
if ans<(n-pos):
	ans=n-pos
#print(ans)
if ans<=k:
	print("YES")
else:
	print("NO")