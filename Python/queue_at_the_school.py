
n,k=map(int,input().split())
s=input()
l=list(s)
ans=[]

for i in range(0,k):
	for j in range(0,n):
		if l[j]=='G' and j!=0:
			if count==1:
				temp=l[j]
				l[j]=l[j-1]
				l[j-1]=temp
				count=0
			else:
				count=0
		else:
			count=1
for x in l:
	print(x,end='')

#unknown_2433