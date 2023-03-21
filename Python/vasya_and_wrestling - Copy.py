import sys
input=sys.stdin.buffer.readline
import os

t=int(input())
arr=[]
brr=[]
last=0
while t:
	t-=1
	n=int(input())
	last=n
	if n<0:
		brr.append(-n)
	else:
		arr.append(n)
if sum(arr)>sum(brr):
	print("first")
elif sum(arr)<sum(brr):
	print("second")
else:
	z=""
	for i in range(min(len(arr),len(brr))):
		if arr[i]>brr[i]:
			z="first"
			break
		elif arr[i]<brr[i]:
			z="second"
			break
	if z=="":
		if last<0:
			print("second")
		else:
			print("first")
	else:
		print(z)



