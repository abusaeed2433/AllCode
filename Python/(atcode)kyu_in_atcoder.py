import sys
input=sys.stdin.buffer.readline
import os 
from math import*


x=[400,600,800,1000,1200,1400,1600,1800,2000]
n=int(input())
for i in range(len(x)):
	if n<x[i]:
		print(9-i)
		break