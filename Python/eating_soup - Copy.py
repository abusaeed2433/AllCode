import sys
input=sys.stdin.buffer.readline

n,m=map(int,input().split())
if n==m:
	print("0")
elif m==0 or m==1:
	print("1")
else:
	if m>=n//2:
		print(n//2)
	else:
		print(m)