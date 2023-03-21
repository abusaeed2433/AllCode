import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n,m=map(int,input().split())
	count=min(m,n)
	z=[]
	c1=0
	ans=[]
	for i in range(n):
		arr=list(map(int,input().split()))
		ans.append(arr)
		if 1 in arr:
			c1+=1
	c1=n-c1
	c2=0
	for i in range(m):
		for j in range(n):
			if ans[j][i]==1:
				c2+=1
				break
#		print(count)
#	print(c2)
	c2=m-c2
	#print(c1,c2,count)
	count=min(c1,c2)
	if count%2==0:
		print("Vivek")
	else:
		print("Ashish")