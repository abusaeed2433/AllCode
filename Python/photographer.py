import sys
input=sys.stdin.buffer.readline
import os
from math import*

n,d=map(int,input().split())
a,b=map(int,input().split())
price=[]
for i in range(n):
	x,y=map(int,input().split())
	price.append([x*a+y*b,i+1])

price.sort()
#print(price)
ans=[]
s=0
i=0
while i<n:
	s+=price[i][0]
	if s<=d:
		ans.append(price[i][1])
	else:
		break
	i+=1
print(len(ans))
for x in ans:
	print(x,end=' ')
