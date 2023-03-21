import sys
input=sys.stdin.buffer.readline
import os
from math import*

n=int(input())
if n%1000==0:
	print("0")
else:
	print(1000-(n%1000))