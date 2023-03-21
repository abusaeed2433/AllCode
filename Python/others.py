import sys
import os
from math import*
input=sys.stdin.buffer.readline

t=int(input())
while t:
    t-=1
    n=int(input())
    ans=0
    z=-1
    while n:
        n-=1
        r,g,b=map(int,input().split())
        if z==-1:
            if r==min(r,g,b):
                z=1
                ans+=r
            elif g==min(r,g,b):
                z=2
                ans+=g
            else:
                z=3
                ans+=b
        elif z==1:
            if g>=b:
                ans+=b
                z=3
            else:
                ans+=g
                z=2
        elif z==2:
            if r>=b:
                ans+=b
                z=3
            else:
                ans+=r
                z=1
        else:
            if r>=g:
                ans+=g
                z=2
            else:
                ans+=r
                z=1
    print(ans)
