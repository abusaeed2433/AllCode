import sys
from bisect import*
#sys.stdin=open('input.txt','r')
#sys.stdout=open('output.txt','w')

n=int(input())
arr=list(map(int,input().split()))
arr.sort()
print(arr)
ans=0
d=n-1
c=0
e=0
while arr[d]>arr[c]+arr[c]:
	a=bisect_right(arr,arr[c])-e
	b=bisect_left(arr,arr[d])
	if a<len(arr)-b:
		c=a
		ans+=a
		e+=a-1
	elif a>len(arr)-b:
		ans+=len(arr)-b
		d-=len(arr)-b

print(ans)




