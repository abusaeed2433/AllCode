import os
from math import*

t=int(input())
while t:
	t-=1
	s=input()
	z1=0
	z0=0
	arr=[]
	for i in range(len(s)):
		if s[i]=="+":
			if z0>0:
				arr.append(-z0)
			z1+=1
			z0=0
		else:
			if z1>0:
				arr.append(z1)
			z0+=1
			z1=0
	if z1>0:
		arr.append(z1)
	if z0>0:
		arr.append(-z0)
#	print(arr)
	k=0
	count=0
	ans=0
	s1=0
	for i in range(len(arr)):
		if arr[i]+k+s1<0:
			count+=int(fabs(arr[i]))
			count1=count+arr[i]+k+s1+1
			if count1<0:
				count1=0
			ans+=(count*(count+1)//2)-(count1*(count1-1)//2)#   ((count+(arr[i]+k+s1))*(count+arr[i]+k+s1+1))//2
			k+=(k-arr[i])
			s1+=arr[i]
		else:
			s1+=arr[i]
			count+=int(fabs(arr[i]))
		#print(ans,k)
	print(ans+len(s))







