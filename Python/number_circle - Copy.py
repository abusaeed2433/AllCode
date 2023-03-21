import sys
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
arr.sort()
ans=[0]*n
#print(ans)
k=0
l=1
for i in range(n):
	if i%2==0:
		ans[k]=arr[i]
		k+=1
	else:
		ans[n-l]=arr[i]
		l+=1
check=0
for i in range(n):
	if ans[i]<(ans[i-1]+ans[(i+1)%n]):
		continue
	else:
		check=1
		break
if check==1:
	print("NO")
else:
	print("YES")
	for x in ans:
		print(x,end=' ')

