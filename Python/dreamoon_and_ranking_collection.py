import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n,x=map(int,input().split())
	arr=list(map(int,input().split()))
	arr=list(set(arr))
	k=1
	i=0
	ans=-1
	arr.sort()
	#print(arr)
	while i<len(arr) and x>=0:
		if arr[i]!=k:
				x-=1
				k+=1
				if x>=0:
					ans=k
		else:
			k+=1
			i+=1
			ans=k
	if x<=0:
		if ans==-1:
			print("0")
		else:
			print(ans-1)
	else:
		print(arr[-1]+x)
