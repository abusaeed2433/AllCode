import sys
import copy
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	ans=[]
	arr=list(map(int,input().split()))
	na=copy.deepcopy(arr)
	na.sort()
	arr1=list(map(int,input().split()))
	count0=0
	count1=0
	for x in arr1:
		if x==0:
			count1+=1
		else:
			count0+=1
	if count0>0 and count1>0:
		print("Yes")
	else:
		if na==arr:
			print("Yes")
		else:
			print("No")
"""
	if arr==na:
		print("Yes")
	else:
		i=0
		ans=[]
		while i<n:
			if na[i]==arr[i]:
				ans.append(arr1[i])
			else:
				for j in range(n):
					if arr[j]==na[i]:
						ans.append(arr1[j])
						break
			i+=1
		z=0
		for i in range(n):
			if na[i]==arr[i]:
				continue
			else:
				if ans[i]==arr1[i]:
					z=1
					break
		if z==1:
			print("No")
		else:
			print("Yes")
"""