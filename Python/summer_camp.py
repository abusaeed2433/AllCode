import os

s=""
n=int(input())
k=1
while len(s)<n:
	s+=str(k)
	k+=1
print(s[n-1])