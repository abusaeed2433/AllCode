import sys
input=sys.stdin.buffer.readline

k,a,b=map(int,input().split())
if a>=k and b>=k:
	print((a//k)+(b//k))
elif a%k==0 and a!=0:
	print((a//k)+(b//k))
elif b%k==0 and a!=0:
	print((a//k)+(b//k))
else:
	print("-1")