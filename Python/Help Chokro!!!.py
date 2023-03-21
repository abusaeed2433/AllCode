import sys
input=sys.stdin.buffer.readline
import os 
from math import*


n,k=map(int,input().split())
arr=list(map(int,input().split()))

mean=(sum(arr)//n)
val1=int(ceil(sum(arr)/n))
val2=(sum(arr)//n)
v1=val1%k
v2=k-(val1%k)
val1-=v1
val3=val1+v2+v1
v1=val2%k
v2=k-v1
val2-=v1
val4=val2+v2+v1
#print(val1,val2,val3,val4)
ans,ans1,ans2,ans3=[0]*4
#print(val1,val2,val3,val4)
for i in range(n):
	if arr[i]>=val1:
		ans+=(arr[i]-val1)
	else:
		ans+=(val1-arr[i])
	if arr[i]>=val2:
		ans1+=(arr[i]-val2)
	else:
		ans1+=(val2-arr[i])
	if arr[i]>=val3:
		ans2+=(arr[i]-val3)
	else:
		ans2+=(val3-arr[i])
	if arr[i]>=val4:
		ans3+=(arr[i]-val4)
	else:
		ans3+=(val4-arr[i])
#print(ans,ans1,ans2,ans3)
print(min(ans,ans1,ans2,ans3))
