import sys
input=sys.stdin.buffer.readline


t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	if sum(arr)%2==1:
		print("YES")
	else:
		odd=0
		even=0
		for i in range(n):
			if arr[i]%2==1:
				odd+=1
			if arr[i]%2==0:
				even+=1
			if even>0 and odd>0:
				break
		if even>0 and odd>0:
			print("YES")
		else:
			print("NO")


