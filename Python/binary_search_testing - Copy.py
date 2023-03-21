
a=list(map(int,input().split()))
n=int(input("number that you want to find:"))
a.sort()
l=0
u=len(a)-1
z=0
while l<=u:
	mid=(l+u)//2
	if a[mid]==n:
		z=1
		break
	else:
		if a[mid]<n:
			l=mid+1
		else:
			u=mid-1
if z==1:
	print("FOUND")
else:
	print("not found")