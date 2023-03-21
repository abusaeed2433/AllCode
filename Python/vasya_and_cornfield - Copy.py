import sys
input=sys.stdin.buffer.readline

n,d=map(int,input().split())
m=int(input())
while m:
	m-=1
	x,y=map(int,input().split())
	e1=x+y-d
	e2=x-y-d
	e3=x+y-2*n+d
	e4=y-d-x
	if e1==0 or e2==0 or e3==0 or e4==0:
		print("YES")
	else:
		if e1>0 and e2<0 and e3<0 and e4<0:
			print("YES")
		else:
			print("NO")
						#unknown_2433