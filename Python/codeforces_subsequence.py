import os
from math import*

n=int(input())
if n==1:
	print("codeforces")
else:
	s='codeforces'
	i=1
	k=0
	while i<n:
		i*=2
		k+=1
	arr=[k//10]*10
	for i in range(k%10):
		arr[-i-1]+=1
	i=0
	while i<10:
		for j in range(arr[i]+1):
			print(x[i],end='')
		i+=1
