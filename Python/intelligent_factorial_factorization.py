import sys
input=sys.stdin.buffer.readline
from math import*
import os

def factorial(n):
	ans=1
	for i in range(1,n+1):
		ans*=i
	return ans

def calc(di):
	ans=1
	for i in range(2,n+1):
		if di[i]!=0:
			ans*=i**di[i]
	return ans

t=int(input())
count=0
while t:
	count+=1
	t-=1
	n=int(input())

	x=[3,5,7]
	a,b,c,d=[0]*4
	di=dict()
	for i in range(n+1):
		di[i+1]=0
	for i in range(2,n+1):
		while i!=1:
			if i%2==0:
				i=i//2
				a+=1
				di[2]+=1
			else:
				if i%x[0]==0:
					i=i//x[0]
					di[3]+=1
				elif i%x[1]==0:
					i=i//x[1]
					di[5]+=1
				elif i%7==0:
					i=i//7
					di[7]+=1
				else:
					di[i+1]+=1
					break
#	print(a,b,c,d)
	val1=factorial(n)
	val2=calc(di)
	print(val1,val2,val1==val2)
	print(di)
	print("Case %d: %d = "%(count,n),end='')
	if a!=0:
		print("2 (%d)"%a,end='')
	for i in range(2,n+1):
		if di[i]!=0:
			print(" * %d *(%d)"%(i,di[i]),end='')
	print()




