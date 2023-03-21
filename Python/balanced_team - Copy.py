import sys
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
arr.sort()
#print(arr)
ans=1
j=0
for i in range(n):
	while j<n and arr[j]-arr[i]<=5:
			j+=1
			ans=max(ans,j-i)
print(ans)