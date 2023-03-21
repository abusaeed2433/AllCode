import sys
input=sys.stdin.buffer.readline

d=int(input())
n=int(input())
arr=list(map(int,input().split()))
ans=0
for i in range(n-1):
	ans+=d-arr[i]
print(ans)
			#unknown_2433