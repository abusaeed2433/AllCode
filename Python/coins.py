import sys
input=sys.stdin.buffer.readline
import os
from math import*

n=int(input())
print(n,end=' ')
while n>1:
	z=0
	for i in range(2,int(sqrt(n))+1):
		if n%i==0:
			n=n//i
			print(n,end=' ')
			z=1
			break
	if z==0:
		print("1")
		break


