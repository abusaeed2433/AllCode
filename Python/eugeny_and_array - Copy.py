#import sys
#input=sys.stdin.buffer.readline

n,m=map(int,input().split())
a=list(map(int,input().split()))
count1=0
for x in a:
	if x==1:
		count1+=1
count0=n-count1
while m:
	m-=1
	l,r=map(int,input().split())
	if (r-l+1)%2==0:
		if ((r-l+1)//2)<=min(count0,count1):
			print("1")
		else:
			print("0")
	else:
		print("0")