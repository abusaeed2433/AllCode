import sys
input=sys.stdin.buffer.readline

t=int(input())
ans=list(map(int,input().split()))
ans=set(ans[1:])
t-=1
while t:
	t-=1
	arr=list(map(int,input().split()))
	arr=set(arr[1:])
	ans=ans.intersection(arr)
for x in ans:
	print(x,end=' ')

