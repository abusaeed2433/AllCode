import sys
from math import*
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
arr.sort(reverse=True)
for x in arr:
	if x<0:
		print(x)
		break
	else:
		x=int(fabs(x))
		c=int(sqrt(x))
		if c*c!=x:
			print(x)
			break