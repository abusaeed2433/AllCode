import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	arr.sort()
	count=0
	for i in range(n-1,0,-1):
		j=0
		k=i-1
		while j<k:
			if arr[j]+arr[k]>arr[i]:
				count+=k-j
				k-=1
			else:
				j+=1
	print(count)
	