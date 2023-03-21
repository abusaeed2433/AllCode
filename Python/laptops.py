
n=int(input())
z=0
for i in range(n):
	a,b=map(int,input().split())
	if b>a:
		z=1
if z==1:
	print("Happy Alex")
else:
	print("Poor Alex")