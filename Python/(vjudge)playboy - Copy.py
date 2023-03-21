import sys
from bisect import*
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
arr=list(set(arr))
arr.sort()
#print(arr)
q=int(input())
l=list(map(int,input().split()))
for i in range(q):
	c=bisect_left(arr,l[i])
	d=bisect_right(arr,l[i])
	#print(c,d)
	if c==d:
		if c==0:
			print("X",arr[0])
		elif c==len(arr):
			print(arr[-1],"X")
		else:
			print(arr[c-1],arr[c])
	else:
		if c==0 and d==n:
			print("X","X")
		elif c==0:
			print("X",arr[1])
		elif d==len(arr):
			print(arr[-2],"X")
		else:
			print(arr[c-1],arr[d])