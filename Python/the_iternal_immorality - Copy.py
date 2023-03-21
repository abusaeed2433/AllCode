import sys
input=sys.stdin.buffer.readline

a,b=map(int,input().split())
ans=1
i=a+1
while ans!=0 and i<=b:
	c=str(i)
	d=str(ans*int(c[-1]))
	ans=int(d[-1])
	i+=1
print(ans)
