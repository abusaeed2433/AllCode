import sys
input=sys.stdin.buffer.readline


t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	ans=[]
	for i in range(n+n):
		if arr[i] not in ans:
			ans.append(arr[i])
	for i in range(n):
		print(ans[i],end=' ')
	print()