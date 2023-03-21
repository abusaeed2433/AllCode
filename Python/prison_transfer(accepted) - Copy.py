

n,t,c=map(int,input().split())
arr=list(map(int,input().split()))
count=0
ans=0
for x in arr:
	if x<=t:
		count+=1
	else:
		temp=(count-c+1)
		if temp<0:
			temp=0
		ans+=temp
		count=0
temp=count-c+1
if temp<0:
	temp=0
print(ans+temp)