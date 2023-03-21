import sys
input=sys.stdin.buffer.readline
from math import*

n=int(input())
arr=list(map(float,input().split()))
for i in range(n+n):
	arr[i]-=int(arr[i])
arr=list(filter(lambda x:x!=0,arr))
arr.sort()
print(arr)
if len(arr)==0:
	ans="0.000"
elif len(arr)==1:
	ans=min(arr[0],(1-arr[0]))
	ans=fabs(ans)
	ans=round(ans,3)
else:
	ans=sum(arr[0:len(ans)//2])
	ans-=sum(arr[int(ceil(len(s)/2)):])
	if len(arr)%2==1:
			CANNOT UNDERSTAND THIS PROBLEM RIGHT NOW

	for i in range(len(arr)):
		if arr[i]<=.500000:
			ans+=arr[i]
		else:
			ans+=-(1-arr[i])
	ans=fabs(ans)
	ans=round(ans,3)
	if len(str(ans))<5:
		print(ans,end='')
		for i in range(5-len(str(ans))):
			print("0",end='')
	else:
		print(ans)
