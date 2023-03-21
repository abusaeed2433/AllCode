import os

n=int(input())

arr=list(map(int,input().split()))
x=[31,0,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31]
if 29 in arr:
	x[1]=29
else:
	x[1]=28

check=0
for i in range(0,24):
	z=0
	for j in range(n):
		if arr[j]!=x[(i+j)%24]:
			z=1
			break
	if z==0:
		#print(i)
		check=1
		break
if check==1:
	print("Yes")
else:
	print("No")
