from math import*

def print_X(n):
	if n<3:
		n=3
		print("size is low. printing minimum size(5)")
	elif n>100:
		print("maximum size reached. printing maimum value")
		n=100
	k=0
	for i in range(n):
		for j in range(n):
			if j==i and j==n-1-i:
				print(".",end='')
			else:
				print(" ",end='')
		print()



n=int(input())
print_X(n)