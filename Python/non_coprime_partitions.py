from math import*
import sys
input=sys.stdin.buffer.readline

n=int(input())
s=(n*(n+1))//2
if n<=2:
	print("No")
else:
	print("Yes")
	ans1=0
	if n==n/2:
		ans1=n//2
	else:
		ans1=(n+1)//2
	print("1",ans1)
	print(n-1,end=' ')
	for i in range(1,n+1):
		if i!=ans1:
			print(i,end=' ')
		else:
			continue

					#unknown_2433