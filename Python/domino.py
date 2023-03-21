import sys
input=sys.stdin.buffer.readline

n=int(input())
l=0
r=0
swap=0
while n:
	n-=1
	a,b=map(int,input().split())
	if a%2==0 and b%2==1:
		swap+=1
	elif b%2==0 and a%2==1:
		swap+=1
	l+=a
	r+=b
#print(l,r,swap)
if l%2==0 and r%2==0:
	print("0")
elif l%2==1 and r%2==1:
	if swap>1:
		print("1")
	else:
		print("-1")
else:
	print("-1")
