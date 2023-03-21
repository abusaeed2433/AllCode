
arr=[]
for i in range(3):
	s=input()
	for j in s:
		arr.append(j)

z=0
for i in range(4):
	if arr[i]==arr[8-i]:
		continue
	else:
		z=1
		break
if z==1:
	print("NO")
else:
	print("YES")
					#unknown_2433