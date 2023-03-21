import sys
input=sys.stdin.buffer.readline


t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	val=arr[-1]
	g=-1
	count=1
	sp=-1
	z=-1
	br=-1
	sppp=-1
	for i in range(n-2,-1,-1):
		if arr[i]==val:
			count+=0
		elif arr[i]<val:
			if sppp==-1:
				sppp=0
			if br==1:
				break
			if sp==1:
				sp=0
				br=0
			else:
				sp=0
		else:
			if sppp==-1:
				sppp=1
			elif sppp==0:
				break
			if br==0:
				break
			if sp==0:
				sp=1
				br=1
			else:
				sp=1
		val=arr[i]
		count+=1
#		print(count)
	print(n-count)





