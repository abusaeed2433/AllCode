import sys
input=sys.stdin.buffer.readline
import os
from math import*


n=int(input())
prev=2
k=1
for i in range(1,n+1):
	var=(i*(i+1))*(i*(i+1))
	print((var-prev)//k)
	prev=i*(i+1)
	k+=1
