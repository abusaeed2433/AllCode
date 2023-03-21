import sys
input=sys.stdin.buffer.readline
import os
from math import*


w,h,x,y=map(int,input().split())
area=w*h
#ans1=min((w*y),(area-(w*y)))
#ans2=min((x*h),(area-(x*h)))
#if ans1==ans2:
#	print(ans1,1)
#else:
#	print(max(ans1,ans2),0)
print((area/2),1 if x==w/2 and y==h/2 else 0)

