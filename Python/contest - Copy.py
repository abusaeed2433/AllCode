import sys
input=sys.stdin.buffer.readline

a,b,c,d=map(int,input().split())
m=max(3*a/10,a-(a//250)*c)
v=max(3*b/10,b-(b//250)*d)
if m==v:
	print("Tie")
elif m>v:
	print("Misha")
else:
	print("Vasya")