import sys
from math import*
input=sys.stdin.buffer.readline

x,y=map(int,input().split())
v1=y*(log(x))
v2=x*(log(y))
if v1<v2:
	print("<")
elif v1>v2:
	print(">")
else:
	print("=")