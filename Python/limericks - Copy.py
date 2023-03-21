import sys
from math import*
input=sys.stdin.buffer.readline

n=int(input())
for i in range(2,int(sqrt(n))+1):
	if n%i==0:
		print(i,end='')
		print(n//i)
		break