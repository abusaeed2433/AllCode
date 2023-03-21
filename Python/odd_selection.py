import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n,x=map(int,input().split())
	arr=list(map(int,input().split()))
	odd=0
	even=0
	for y in arr:
		if y%2==0:
			even+=1
		else:
			odd+=1
	if x>n or odd==0:
		print("No")
	else:
		if x<=even:
			print("Yes")
		else:
			if x<=odd:
				if x%2==1 or even>0:
					print("Yes")
				else:
					print("No")
			else:
				x=x-even
				if x%2==0:
					if x+1<=odd:
						print("Yes")
					else:
						print("No")
				else:
					print("Yes")
