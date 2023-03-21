
import os
from math import*


n,q=map(int,input().split())
arr=list(map(int,input().split()))
ans=[]
var=[]
while q:
	q-=1
	s=list(map(str,input().split()))
	if s[0][0]=="M":
		var.append([int(s[1]),int(s[2])])
	else:
		ans.append(int(s[1]))
#print(ans)
#print(var)

for i in range(len(ans)):
	count=0
	for j in range(len(var)):
		if ans[i]>=var[j][0] and ans[i]<=var[j][1]:
			count+=ans[i]-var[j][0]
	print(int(arr[ans[i]-1]*pow(3,count)))
	count=0
