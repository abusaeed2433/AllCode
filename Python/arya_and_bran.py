import sys
input=sys.stdin.buffer.readline

n,k=map(int,input().split())
arr=list(map(int,input().split()))
day=0
s=0
z=0
c=0
for x in arr:
	#print(c,s)
	if c>=8 and x>=8:
		c=max(s,c)
	elif x>=8 and c<8:
		

	if x+c>=8:
		s+=8
		c=x+c-8
	else:
		s+=x
	day+=1
	if s>=k:
		z=1
		break
if z==0:
	print("-1")
else:
	print(day)
