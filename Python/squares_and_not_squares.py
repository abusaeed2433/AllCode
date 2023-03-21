import sys
input=sys.stdin.buffer.readline
import os
from math import*

n=int(input())
arr=list(map(int,input().split()))
sq_count=0
move=[]
zero=0
for i in range(n):
	if arr[i]==0:
		zero+=1
	c=sqrt(arr[i])
	if int(c)*int(c)==arr[i]:
		sq_count+=1
	else:
		c=round(c)
		move.append(int(fabs(c*c-arr[i])))
notsq=n-sq_count
#print(sq_count,notsq)
if sq_count==notsq:
	print("0")
elif sq_count>notsq:
	rest=(n//2)-notsq
	if zero<=n//2:
		print(rest)
	else:
		con=zero-(n//2)
		print(con*2+(rest-con))
else:
	con=(n//2)-sq_count
	move.sort()
#	print(con)
	print(sum(move[0:con]))

