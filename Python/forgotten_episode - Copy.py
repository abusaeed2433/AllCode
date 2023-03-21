import sys
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
arr.sort()
z=0
for i in range(0,n-1):
	if arr[i]==i+1:
		continue
	else:
		print(i+1)
		z=1
		break
if z==0:
	print(n)