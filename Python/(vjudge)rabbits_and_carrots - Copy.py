import sys
from math import*
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n,k=map(int,input().split())
	arr=list(map(int,input().split()))
	count=0
	for x in arr:
		while x%k==0:
			x=x/k
		if x==1:
			count+=1
	print(count)