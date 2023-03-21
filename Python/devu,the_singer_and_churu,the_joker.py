import sys
input=sys.stdin.buffer.readline

n,d=map(int,input().split())
arr=list(map(int,input().split()))
if sum(arr)+10*(n-1)>d:
	print("-1")
else:
	print((d-sum(arr))//5)

			#unknown_2433
