import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	even=0
	odd=0
	swap=0
	for i in range(len(arr)):
		if i%2==0:
			if arr[i]%2==0:
				even+=1
			else:
				odd+=1
				swap+=1
		else:
			if arr[i]%2==1:
				odd+=1
			else:
				even+=1
	if even==odd or odd==even-1:
		print(swap)
	else:
		print("-1")