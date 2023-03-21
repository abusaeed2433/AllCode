from math import*
import os

a,b,x=map(int,input().split())
c=0
d=0
if x%2==0:
	var=x//2
	for i in range(var):
		if a>b:
			print("01",end='')
		else:
			print("10",end='')
	for i in range(min(a,b)-var):
		print("1" if a>b else 0,end='')
	for i in range(max(a,b)-var):
		print("0" if a>b else 1,end='')
else:
	var=(x-1)//2
	for i in range(var):
		if a>b:
			print("01",end='')
		else:
			print("10",end='')
	for i in range(max(a,b)-var):
		print("0" if a>b else "1",end='')
	for i in range(min(a,b)-var):
		print("1" if a>b else 0,end='')

