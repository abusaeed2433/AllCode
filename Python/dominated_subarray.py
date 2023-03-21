import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	z=0
	s=set(arr)
	if len(s)==len(arr):
		print("-1")
	else:
		z=0
		ans=n
		k=0
		while z==0:
			k+=1
			for i in range(n-k):
				if arr[i+k]-arr[i]==0:
					z=1
					ans=k+1
					break
				else:
					continue
		print(ans)

