import sys
input=sys.stdin.buffer.readline

l1,r1,l2,r2,k=map(int,input().split())
p1=0
p2=0
if r2<l1 or l2>r1:
	p1=-1
	p2=-1
elif l2>=l1 and r2<=r1:
	p1=l2
	p2=r2
elif l2>=l1 and r2>r1:
	p1=l2
	p2=r1
elif r2<=r1 and l2<l1:
	p1=l1
	p2=r2
else:
	p1=l1
	p2=r1
if p1==-1 and p2==-1:
	print("0")
else:
	if k>=p1 and k<=p2:
		print(p2-p1)
	else:
		print(p2-p1+1)