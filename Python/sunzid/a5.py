


print("Enter array elements:")

arr = list(map(int,input().split()))

ts,s1,n = sum(arr),0,len(arr)
isFound = False
for i in range(n):
	s1+=arr[i]
	if(s1==ts-s1):
		print("true")
		isFound = True
		break
if(isFound==False):
	print("false")