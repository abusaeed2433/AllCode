import sys
input=sys.stdin.buffer.readline
n=int(input())
arr=list(map(int,input().split()))
x=0
for y in arr:
	print(y+x,end=' ')
	if x<y+x:
		x=y+x