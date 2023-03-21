
a=list(map(int,input().split()))
a.sort()
print(a)
l=0
u=len(a)-1
n=5
z=0
while l<=u:
	mid=(l+u)//2
	print(l,u,mid)
	if a[mid]==n:
		globals()['z']=1
		break
	else:
		if a[mid]>n:
			u=mid-1
		else:
			l=mid+1
if z==0:
	print("Not found")
else:
	print("Found")
