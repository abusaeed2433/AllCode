
n=int(input())
arr=list(map(int,input().split()))
sum1,sum2,k1,k2=[0]*4
s=sum(arr)//2
ans=0
while sum1<=s and sum2<=s:
	if sum1==sum2:
		ans=sum1
		sum1+=arr[k1]
		sum2+=arr[n-1-k2]
		k1+=1
		k2+=1
	else:
		if sum1<sum2:
			sum1+=arr[k1]
			k1+=1
		else:
			sum2+=arr[n-1-k2]
			k2+=1
print(ans)
