import sys
input=sys.stdin.buffer.readline
from math import*


def area(a,b,c,check):
	s=(a+b+c)/2
	ar=s*(s-a)*(s-b)*(s-c)
	if ar<=0 or check==-1:
		return -1
	else:
		return sqrt(ar)

t=int(input())
ans=[]
while t:
	t-=1
	n=int(input())
	arr=[]
	brr=[]
	for i in range(n):
		x,y=map(int,input().split())
		arr.append([x,y])
#	print(arr)
	extra=[]
	for i in range(n-2):
		for j in range(i+1,n-1):
			for k in range(j+1,n):
				a=sqrt((arr[i][0]-arr[j][0])*(arr[i][0]-arr[j][0])+(arr[i][1]-arr[j][1])*(arr[i][1]-arr[j][1]))
				b=sqrt((arr[j][0]-arr[k][0])*(arr[j][0]-arr[k][0])+(arr[j][1]-arr[k][1])*(arr[j][1]-arr[k][1]))
				c=sqrt((arr[i][0]-arr[k][0])*(arr[i][0]-arr[k][0])+(arr[i][1]-arr[k][1])*(arr[i][1]-arr[k][1]))
				m1=arr[j][0]-arr[i][0]
				m2=arr[j][0]-arr[k][0]
				extra.append([a,b,c,i,j,k])
				check=1
				if m1==0 and m2==0:
					check=-1
				elif m1==0 or m2==0:
					check=1
				else:
					if ((arr[j][1]-arr[i][1])/m1)==((arr[j][1]-arr[k][1])/m2):
						check=-1
				ar=area(a,b,c,check)
				if ar!=-1:
					ans.append(ar)
#	print(ans)
#	print(extra)
	print("{:.9f}".format(min(ans)+.000001))

