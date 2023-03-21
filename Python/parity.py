import sys
input=sys.stdin.buffer.readline
from math import*

n,k=map(int,input().split())
arr=list(map(int,input().split()))
odd=0
for i in range(k-1):
	if arr[i]%2==1:
		odd+=1
even=k-odd-1
#print(even,odd)
if n%2==0:
	if arr[-1]%2==0:
		print("even")
	else:
		print("odd")
else:
	if odd%2==0:
		if arr[-1]%2==0:
			print("even")
		else:
			print("odd")
	else:
		if arr[-1]%2==0:
			print("odd")
		else:
			print("even")
