import sys
input=sys.stdin.buffer.readline

n=int(input())
if n<3:
	print("Y")
else:
	for i in range(n):
		for j in range(n):
			if n-1-i>i:
				if j==i or j==n-1-i:
					print(".",end='')
				else:
					print(" ",end='')
			else:
				if j==n-i-1:
					print(".",end='')
				else:
					print(" ",end='')
		print()

