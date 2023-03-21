import sys
input=sys.stdin.buffer.readline
def printer(ipos,x):
	for i in range(ipos,x):
		print(i,end=' ')

n,k=map(int,input().split())

if k==0:
	printer(1,n+1)
else:
	for i in range(k+1,0,-1):
		print(i,end=' ')
	printer(k+2,n+1)
