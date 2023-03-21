import sys
input=sys.stdin.buffer.readline
import os
from math import*

def nCr(n,r):
	ans=1
	for i in range(n,n-r,-1):
		ans*=i
	var=1
	for i in range(1,r+1):
		var*=i
#	print(ans,var,ans//var)
	return ans//var


n=int(input())
ans=nCr(n,5)+nCr(n,6)+nCr(n,7)
print(ans)

