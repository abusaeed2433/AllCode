from math import*

a,b,n=map(int,input().split())
a*=10
var=b-(a%b)
if a%b==0:
	var=0
if var>=0 and var<=9:
	a=a//10
	a=str(a)+str(var)
	print(a,end='')
	for i in range(n-1):
		print("0",end='')
else:
	print("-1")