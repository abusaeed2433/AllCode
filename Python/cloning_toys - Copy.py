import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	a,b,c=map(int,input().split())
	if a>=c and a>=c/b:
		print("-1",end=' ')
	else:
		print("1",end=' ')
	if c>=a and c/b>=a:
		print("-1")
	else:
		print(b)