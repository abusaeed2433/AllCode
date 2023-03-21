import os
import sys


n=int(input())
s=input()
i=0
ans=[s[0]]
for i in range(1,n):
	if len(ans)%2==0 or ans[-1]!=s[i]:
		ans.append(s[i])

if len(ans)%2==1:
	ans.pop()
print(n-len(ans))
for x in ans:
	print(x,end='')
