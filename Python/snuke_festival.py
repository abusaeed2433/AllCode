import sys
input=sys.stdin.buffer.readline
from bisect import*
import os

n=int(input())
arr=list(map(int,input().split()))
brr=list(map(int,input().split()))
crr=list(map(int,input().split()))
arr.sort()
brr.sort()
crr.sort()
#print(arr)
#print(brr)
#print(crr)
i,j,k=[0]*3
ans=0
while i<n and j<n and k<n:
	var=bisect_right(arr,arr[i])-bisect_left(arr,arr[i])
	brr=list(filter(lambda x:x>arr[i],brr))
	if len(brr)==0:
		break
	j=0
	while j<len(brr):
		#print(j)
		var1=bisect_right(brr,brr[j])-bisect_left(brr,brr[j])
		drr=list(filter(lambda x:x>brr[j],crr))
		j+=var1
		var2=len(drr)
		ans+=var*var1*var2
		#print(var2,end=' ')
	j=0
	i+=var
	#print(var,var1,var2)
print(ans)

#26
