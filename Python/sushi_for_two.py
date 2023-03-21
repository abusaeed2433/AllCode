import sys
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
pos=[]
count=1
for i in range(n-1):
	if arr[i]==arr[i+1]:
		count+=1
	else:
		pos.append(count)
		count=1
pos.append(count)
#print(pos)
ans=0
for i in range(len(pos)-1):
	if ans<2*min(pos[i],pos[i+1]):
		ans=2*min(pos[i],pos[i+1])
print(ans)


