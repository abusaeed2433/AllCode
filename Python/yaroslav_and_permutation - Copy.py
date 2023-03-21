import sys
from math import*
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
arr.sort()
#print(arr)
mc=0
count=1
for i in range(n-1):
	if arr[i]==arr[i+1]:
		count+=1
	else:
		if mc<count:
			mc=count
		count=1
#print(mc)
if mc<count:
	mc=count
#print(mc)
if int(ceil(n/2))>=mc:
	print("YES")
else:
	print("NO")
					#unknown_2433