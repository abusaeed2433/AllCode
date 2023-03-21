import sys
input=sys.stdin.buffer.readline

n,s,t=map(int,input().split())
arr=list(map(int,input().split()))
ans=0
ipos=-1
pos=s
while pos!=t and ipos!=pos and ans<=n:
	ans+=1
	ipos=pos
	pos=arr[ipos-1]
if pos==t:
	print(ans)
else:
	print("-1")
