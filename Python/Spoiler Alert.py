import sys
input=sys.stdin.buffer.readline
import os 
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	if n%2==0:
		ans=n//2
		print(ans*(ans+1))
	else:
		ans=n//2
		val=ans*(ans+1)
		print(val+ans+1)