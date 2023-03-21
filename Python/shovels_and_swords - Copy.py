import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	a,b=map(int,input().split())
	c=max(a,b)
	d=min(a,b)
	if c>=2*d:
		print(d)
	elif c==d:
		print((c+d)//3)
	else:
		if d>(c//2):
			if c-c//2>0 and d-(c//2)>=2:
				print((c//2)+1)
			else:
				print(c//2)
		else:
			print(d)

