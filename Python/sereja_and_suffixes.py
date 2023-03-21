import sys
input=sys.stdin.buffer.readline

n,m=map(int,input().split())
arr=list(map(int,input().split()))
count=0
s=set()
z=[0]*n
for i in range(n-1,-1,-1):
	if arr[i] not in s:
		s.add(arr[i])
		count+=1
	z[i]=count
while m:
	m-=1
	l=int(input())
	print(z[l-1])