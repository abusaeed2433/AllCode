

n,t,c=map(int,input().split())
arr=list(map(int,input().split()))
ans=n-(c-1)
z=0
check1=0
count=1
for i in range(n):
	#print(ans)
	if arr[i]<=t:
		if z==0:
			check1=1
		else:
			if check1==0:
				ans-=count-1
			else:
				ans-=count
			count=1
			z=0
			check1=1
	else:
		z=1
		count+=1
if z==1:
	ans-=count-1
if ans<=0:
	print("0")
else:
	print(ans)

