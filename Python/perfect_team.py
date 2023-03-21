import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	c,m,x=map(int,input().split())
	ans=min(c,m,x)
	c-=ans
	m-=ans
	x-=ans
	if c==0 or m==0:
		print(ans)
	else:
		a=max(c,m)
		b=min(c,m)
		if b>=a//2:
			b-=a//2
			a-=(a//2)*2
			if b>=2:
				print(ans+(a//2)+1)
			else:
				print(ans+(a//2))
		else:
			print(b)

