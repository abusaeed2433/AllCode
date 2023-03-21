import sys
import os
input=sys.stdin.buffer.readline

p,q,l,r=map(int,input().split())
ab=[]
cd=[]
while p:
	p-=1
	a,b=map(int,input().split())
	for j in range(a,b+1):
		ab.append(j)
ab=set(ab)
while q:
	q-=1
	c,d=map(int,input().split())
	cd.append([c,d])
i=l
count=0
while i<r+1 and count!=(l-r+1):
	check=[]
	for l in range(len(cd)):
		for j in range(cd[l][0]+i,cd[l][1]+i+1):
			check.append(j)
	check=set(check)
	another=list(ab.intersection(check))
	if len(another)>0:
		count+=1
	i+=1
	#print(ab,check,count)
print(count)
