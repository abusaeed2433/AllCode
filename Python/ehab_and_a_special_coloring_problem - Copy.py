import sys
input=sys.stdin.buffer.readline

n=int(input())
k=1
for i in range(2,n-1):
	if k==1:
		print(k,end=' ')
		k=2
	else:
		print(k,end=' ')
		k=1