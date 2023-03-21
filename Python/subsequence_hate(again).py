
c=int(input())
while c:
	c-=1
	arr=[]
	s=input()
	t,f=[0]*2
	for i in range(len(s)):
		if s[i]=="1":
			t+=1
			if f!=0:
				arr.append(f)
				f=0
		else:
			f+=1
			if t!=0:
				arr.append(t)
				t=0
	if f!=0:
		arr.append(f)
	else:
		arr.append(t)
	if len(arr)<=2:
		print("0")
	else:
		print(arr)
		even=[]
		odd=[]
		for i in range(len(arr)):
			if i%2==0:
				odd.append(arr[i])
			else:
				even.append(arr[i])
		print(odd)
		print(even)
		ans=min(sum(even),(sum(odd)-max(odd[0],odd[-1])))
		print(ans)

