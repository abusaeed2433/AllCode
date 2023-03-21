import sys
input=sys.stdin.buffer.readline
import os
from math import*

n=int(input())
s=(n*(n+1))//2
if s%2==0:
	print("0")
else:
	print("1")
ans=[]
s=s//2
while s>=1:
	if s<=n:
		ans.append(s)
		break
	else:
		s-=n
		ans.append(n)
		n-=1
print(len(ans),end=' ')
for x in ans:
	print(x,end=' ')
