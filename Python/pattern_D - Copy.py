from math import*

def print_L(n):
	if n<3:
		print("L")
	else:
		if n>50:
			n=50
			print("size exceeded. printing maximum size:")
		k=n//3
		for i in range(n):
			for j in range(n):
					if j<k:
						print(".",end='')
					else:
						if i<n and i>=n-k:
							print(".",end='')
						else:
							print(" ",end='')
			print()

n=int(input())
print_L(n)

