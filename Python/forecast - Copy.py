import sys
from math import*
input=sys.stdin.buffer.readline

a,b,c=map(int,input().split())
x1=(-b+sqrt(b*b-4*a*c))/(2*a)
x2=(-b-sqrt(b*b-4*a*c))/(2*a)
print(max(x1,x2))
print(min(x1,x2))