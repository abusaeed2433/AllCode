import sys
input=sys.stdin.buffer.readline

n,m=map(int,input().split())
arr=list(map(int,input().split()))
s=0
ans=0
for i in range(n):
	s+=arr[i]
	if s>m:
		ans+=1
		s=arr[i]
if s>0:
	print(ans+1)
else:
	print(ans)