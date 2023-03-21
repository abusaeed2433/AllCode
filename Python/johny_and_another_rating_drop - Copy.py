import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	ans=0
	n=int(input())
	while n>=1:
		ans+=n
		n=n//2
	print(ans)
				#almost copy