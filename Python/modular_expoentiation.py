import sys
input=sys.stdin.buffer.readline

n=int(input())
m=int(input())
s=1
count=0
while s<=m and count<n:
	count+=1
	s*=2
if count==n:
	print(m%s)
else:
	print(m)