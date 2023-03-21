import sys
input=sys.stdin.buffer.readline


n,k=map(int,input().split())
for i in range(1,n+1):
	if k==0:
		print(2*i-1,2*i,end=' ')
	else:
		print(2*i,2*i-1,end=' ')
		k-=1
