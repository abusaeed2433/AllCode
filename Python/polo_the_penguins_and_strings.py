import os
from math import*

n,k=map(int,input().split())
x=["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
if n<k:
	print("-1")
elif n>=k and n!=1 and k==1:
	print("-1")
elif n==1 and k==1:
	print("a")
else:
	k-=2
	n-=k
	for i in range(n):
		print(x[i%2],end='')
	for j in range(k):
		print(x[j+2],end='')