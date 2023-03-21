import sys
imput=sys.stdin.buffer.readline

n=int(input())
b=2
c=3
ans=0
while c<=n:
	ans+=b*c
	b+=1
	c+=1
print(ans)