import sys
input=sys.stdin.buffer.readline
from math import*
import copy

def printer(arr):
	count=len(arr)//2
	i=0
	while i<len(arr) and count>0:
		count-=1
		print(i+1,len(arr)-i)
		i+=1


t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	odd=list(filter(lambda x:x%2==1,arr))
	even=list(filter(lambda x:x%2==0,arr))
	#print(even,odd)
	if len(odd)==0 or len(even)==0:
		arr.pop()
		arr.pop()
	else:
		if len(even)%2==0:
			i=0
			count1=0
			while i<2*n and count1<2:
				if arr[i]%2==0:
					arr[i]=-1
					count1+=1
				i+=1
			#print(arr)
			for i in range(2*n):
				if arr[i]!=-1:
					if arr[i]%2==0:
						for j in range(i+1,2*n):
							if i!=j and arr[j]!=-1 and arr[j]%2==0:
								print(i+1,j+1)
								arr[j]=-1
								arr[i]=-1
								break
					else:
						for j in range(i+1,2*n):
							if i!=j and arr[j]!=-1 and arr[j]%2==1:
								print(i+1,j+1)
								arr[i]=-1
								arr[j]=-1
								break
		else:
			for i in range(2*n):
				if arr[i]%2==0:
					arr[i]=-1
					break
			for i in range(2*n):
				if arr[i]%2==1:
					arr[i]=-1
					break
			#print(arr)
			for i in range(2*n):
				if arr[i]!=-1:
					if arr[i]%2==0:
						for j in range(i+1,2*n):
							if i!=j and arr[j]!=-1 and arr[j]%2==0:
								print(i+1,j+1)
								arr[j]=-1
								arr[i]=-1
								break
					else:
					#	print("b",i)
						for j in range(i+1,2*n):
							if i!=j and arr[j]!=-1 and arr[j]%2==1:
								print(i+1,j+1)
								arr[i]=-1
								arr[j]=-1
								break
	if len(odd)==0 or len(even)==0:
		printer(arr)
	



