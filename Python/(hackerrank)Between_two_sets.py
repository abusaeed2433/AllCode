import sys
input=sys.stdin.buffer.readline
from math import*

def lcm(a,b):
	lc=max(a,b)
	while lc%a!=0 or lc%b!=0:
		lc+=1
	return lc

n,m=map(int,input().split())
arr=list(map(int,input().split()))
brr=list(map(int,input().split()))
lc=arr[0]
gc=brr[0]
if m!=1:
	gc=gcd(brr[0],brr[1])
	for i in range(2,m):
		gc=gcd(brr[i],gc)
if n!=1:
	lc=lcm(arr[0],arr[1])
	for i in range(2,n):
		lc=lcm(lc,arr[i])
		if lc>gc:
			break
if lc>gc:
	print("0")
elif lc==gc:
	print("1")
else:
	count=0
	i=lc
	while i<=gc:
		if i%lc==0 and gc%i==0:
			count+=1
		i+=1
	print(count)