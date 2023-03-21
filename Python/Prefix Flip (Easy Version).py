import os

def calc(arr):
	for i in range(len(arr)):
		if int(arr[i])==0:
			arr[i]=1
		else:
			arr[i]=0
	arr=arr[::-1]
	return arr

count=0
t=int(input())
while t:
	t-=1
	n=int(input())

	a=input()
	arr=list(a)
	b=input()
	brr=list(b)
	for i in range(n):
		arr[i]=int(arr[i])
		brr[i]=int(brr[i])
	ans=[]
	while arr!=brr:
		for i in range(n):
			if brr[n-1-i]==arr[i]:
				arr=calc(arr[0:i+1])+arr[i+1:]
				ans.append(i+1)
				break
	print(len(ans),end=' ')
	for i in range(len(ans)):
		print(ans[i],end=' ')
	print()




