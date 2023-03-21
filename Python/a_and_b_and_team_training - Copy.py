import sys
input=sys.stdin.buffer.readline

n,m=map(int,input().split())
if 2*min(n,m)<=max(n,m):
	print(min(n,m))
else:
	print(int((n+m)/3))
