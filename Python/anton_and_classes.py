
n=int(input())
mb,mb1=[1000000000]*2
ma,ma1=[0]*2
for i in range(n):
	a,b=map(int,input().split())
	if mb>b:
		mb=b
	if ma1<a:
		ma1=a
m=int(input())
for i in range(m):
	a,b=map(int,input().split())
	if ma<a:
		ma=a
	if mb1>b:
		mb1=b
if (ma-mb)<=0 and (ma1-mb1)<=0:
	print("0")
else:
	print(max((ma1-mb1),(ma-mb)))