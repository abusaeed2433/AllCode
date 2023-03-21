import os
from math import*

def adder(s,d):
	count=0
	c=""
	for i in range(len(s)):
		if s[i]=="a" or s[i]=="e" or s[i]=="i" or s[i]=="o" or s[i]=="u":
			count+=1
			c=s[i]
	if count not in d:
		d[count]=[s,c]
	else:
		duo.append([s,d[count][1]])


n=int(input())
d=dict()
arr=[]
duo=[]
for _ in range(n):
	s=input()
	arr.append(s)
	adder(s,d)
print(d)
com=dict()
incom=dict()
#duo=list(filter(lambda x:))
print(duo)
