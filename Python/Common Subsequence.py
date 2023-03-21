import sys
input=sys.stdin.buffer.readline


t=int(input())
while t:
	t-=1
	n,m=map(int,input().split())
	arr=list(map(int,input().split()))
	brr=list(map(int,input().split()))
	crr=list(set(arr)&set(brr))
	if len(crr)==0:
		print("NO")
	else:
		print("YES")
		print("1",crr[0])