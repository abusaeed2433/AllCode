import sys
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
right_max=arr[n-1]
ans=[0]
for i in range(n-2,-1,-1):
	if arr[i]>right_max:
		ans.append(0)
		right_max=arr[i]
	else:
		ans.append(right_max-arr[i]+1)
ans=ans[::-1]
for x in ans:
	print(x,end=' ')
			#unknown_2433