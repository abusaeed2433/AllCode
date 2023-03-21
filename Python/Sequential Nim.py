import sys
input=sys.stdin.buffer.readline


t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	brr=list(filter(lambda x:x==1,arr))
	if len(brr)==n:
		if n%2==1:
			print("First")
		else:
			print("Second")
	elif  len(brr)==0:
		print("First")
	else:
		win=-1
		x=[-1,1]
		if n%2==0:
			win=x[0]  #second
		else:
			win=x[1]  #first
		counter=0
		for i in range(n):
			if arr[i]==1:
				counter+=1
			else:
				break
		if counter%2==1:
			print("Second")
		else:
			print("First")



