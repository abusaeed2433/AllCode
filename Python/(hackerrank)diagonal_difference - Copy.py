from math import*

n=int(input())
left_d=0
right_d=0
c=n
k=0
while n:
	arr=list(map(int,input().split()))
	left_d+=arr[k]
	right_d+=arr[c-1-k]
	#print(left_d,right_d)
	k+=1
	n-=1
print(int(fabs(left_d-right_d)))