import sys
input=sys.stdin.buffer.readline
import os 
from math import*


n=int(input())
ans=n//2
print(ans,ans)
print(ans,-ans)
print(-ans,ans)
print(-ans,-ans)