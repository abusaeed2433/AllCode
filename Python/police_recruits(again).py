

n=int(input())
a=list(map(int,input().split()))
count=0
u=0
for x in a:
	if x==-1 and count==0:
		u+=1
	else:
		count+=x