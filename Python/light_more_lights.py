import sys
input=sys.stdin.buffer.readline
from math import*

t=2
while t>0:
	n=int(input())
	if n==0:
		break
	ans=int(sqrt(n))
#
#	for i in range(1,int(sqrt(n))+1):
#		if n%i==0:
#			if i!=n//i:
#				ans+=2
#			else:
#				ans+=1
	if ans==sqrt(n):
		print("yes")
	else:
		print("no")
