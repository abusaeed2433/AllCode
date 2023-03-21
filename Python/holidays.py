import sys
input=sys.stdin.buffer.readline
from math import*

n=int(input())
var=2*(n//7)
mini=var+0 if n%7<6 else var+1
maxm=var+2 if n%7>=2 else var+n%7
print(mini,maxm)