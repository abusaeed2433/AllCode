import sys
input=sys.stdin.buffer.readline


n=int(input())
arr=list(map(int,input().split()))
a=min(arr)
b=max(arr)
pos=[]
for i in range(n):
	if arr[i]==a or arr[i]==b:
		pos.append(i)
	if len(pos)==2:
		break
#print(pos)
print(max(n-1-min(pos),max(pos)-0
