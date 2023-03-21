

n,k=map(int,input().split())
arr=list(map(int,input().split()))
c=arr[0]
arr=arr[1:c+1]
acount,count,ans=[0]*3
for i in range(1,n+1):
	if i in arr:
		count=0
		ans+=1
	else:
		count+=1
	if count==k:
		ans+=1
		count=0

#	if count==k:
#		if count!=acount:
#			ans+=acount+1
#		count=0
#		acount=0
#	else:
#		if i in arr:
#			acount+=1
#
print(ans)
