import sys
input=sys.stdin.buffer.readline
import os
from math import*

n=int(input())
z=0
for i in range((n//1234567)+1):
	for j in range(((n-i*1234567)//123456)+1):
		var=(n-(i*1234567)-(j*123456))
		if var>=0 and var%1234==0:
			z=1
			break
	if z==1:
		break
if z==1:
	print("YES")
else:
	print("NO")
