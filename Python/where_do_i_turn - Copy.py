import sys
import os
from math import*
input=sys.stdin.buffer.readline

a1,a2=map(int,input().split())
b1,b2=map(int,input().split())
x,y=map(int,input().split())
c=b1-a1
d=b2-a2
check=(d*(0-a1)-c*(0-a2))
ans=(d*(x-a1)-c*(y-a2))
if check<0:
	ans*=-1
if ans==0:
	print("Straight")
elif ans<0:
