import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	a=list(map(int,input().split()))
	a.sort()
	r=a[0]
	g=a[1]
	b=a[2]
	day=0
#	print(r,g,b)
	dif=b-g
	if dif>=r:
		g-=r
		b-=r
		day+=2*r
		r=0
	else:
		g-=dif
		r-=dif
		b-=dif
		day+=2*dif
	day+=g+r//2
	print(day)
	t-=1
			#unknown_2433