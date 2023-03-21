import sys
input=sys.stdin.buffer.readline
from math import*

n,t=map(int,input().split())
val=pow(1.000000011,t)
print(n*val)