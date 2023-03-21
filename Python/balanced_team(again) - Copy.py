import sys
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
arr.sort()
dif=[]
for i in range(n-1):
	dif.append(arr[i+1]-arr[i])
print(dif)
while 
for i in range(len(dif)):

