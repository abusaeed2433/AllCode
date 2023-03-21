import sys
input=sys.stdin.buffer.readline

n=int(input())
if n==3:
	print("1","2")
	print("2","11")
else:
	l=1
	for i in range(1,n):
		for j in range(1,n):
			print(j*l,end=' ')
		print()
		l+=1
