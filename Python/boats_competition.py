import sys
input=sys.stdin.buffer.readline
import os
from math import*


t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	if n<2:
		print("0")
	elif n<4 and n>1:
		print("1")
	else:
		check=-1
		arr.sort()
		val=arr[-1]+arr[-2]
		val2=arr[0]+arr[1]
		ans=0
		for i in range(val,val2-1,-1):
			j=0
			k=n-1
			temp=0
			while j<k:
				s=arr[j]+arr[k]
				if s==i:
					temp+=1
					j+=1
					k-=1
				else:
					if s<i:
						j+=1
					else:
						k-=1
			if ans<temp:
				ans=temp
				check=i
		print(ans)
#	print(check)


