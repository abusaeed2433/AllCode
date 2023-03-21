import sys
input=sys.stdin.buffer.readline

t=int(input())
arr=list(map(int,input().split()))
ans=[]
c=0
for x in arr:
	c+=x
	ans.append(c)
#print(ans)
n=int(input())
arr2=list(map(int,input().split()))
for x in arr2:
	l=0
	u=t-1
	z=0
	while l<=u:
		mid=(l+u)//2
		#print(l,u,mid)
		if ans[mid]==x:
			print(mid+1)
			break
		elif ans[mid]<x:
			l=mid+1
		else:
			if mid==0:
				print("1")
				break
			elif ans[mid-1]<x:
				print(mid+1)
				break
			else:
				u=mid


