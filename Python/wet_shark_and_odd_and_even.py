import sys
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
odd=list(filter(lambda x:x%2==1,arr))
odd.sort()
ans=sum(arr)
if ans%2==0:
	print(ans)
else:
	print(ans-odd[0])