

n=int(input())
arr=list(map(int,input().split()))
brr=list(map(int,input().split()))
ans=[]
for i in range(n):
	val=(arr[i]*20)-(brr[i]*10)
	if val<0:
		val=0
	ans.append(val)
print(max(ans))