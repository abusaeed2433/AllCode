
x,y=map(int,input().split())
a=list(map(str,input().split()))
b=list(map(str,input().split()))
t=int(input())
while t:
	t-=1
	n=int(input())
	n-=1
	print("%s%s"%(a[n%x],b[n%y]))
