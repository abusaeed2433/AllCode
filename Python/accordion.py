import os
from math import*


s=input()
x="[:|:]"
lp=0
ip=0
z=0
for i in range(len(s)-1,-1,-1):
	if z==0 and s[i]=="]":
