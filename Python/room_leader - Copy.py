
t=int(input())
name=[]
points=[]
while t:
	arr=list(map(str,input().split()))
	name.append(arr[0])
	sum=int(arr[1])*100-int(arr[2])*50
	for i in range(3,8):
		sum+=int(arr[i])
	points.append(sum)
	t-=1
max_point=max(points)
for i in range(len(points)):
	if max_point==points[i]:
		print(name[i])
		break
						#unknown_2433