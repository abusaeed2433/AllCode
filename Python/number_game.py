import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	n=int(input())
	if n%2==1:
		if n==1:
			print("FastestFinger")
		else:
			print("Ashishgup")
	else:
		count=0
		while n%2==0:
			n/=2
			count+=1
		if n==1:
			if count==1:
				print("Ashishgup")
			else:
				print("FastestFinger")
		else:
			if count==1:
				zz=0
				for i in range(2,int(sqrt(n))+1):
					if n%i==0:
						zz=1
						break
				if zz==0:
					print("FastestFinger")
				else:
					print("Ashishgup")
			else:
				print("Ashishgup")

