import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	arr.sort()
	istrue=False
	for i in range(n-1):
		if arr[i+1]-arr[i]>1:
			istrue=True
			break
	if istrue:
		print("NO")
	else:
		print("YES")