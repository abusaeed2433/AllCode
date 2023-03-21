from math import*

def digitsum(x):
	s=0
	while x>0:
		s+=x%10
		x=x//10
#		x/=10
	return s

def findroot(b):
#	x=sqrt(((b/4)*b)+n)-b//2
#	x=sqrt(b*b/4+n)-i/2;
#	x=(-b+sqrt(b*b+4*n))/2
	x=sqrt(b*(b/4)+n)-b/2;
#	print(x)
	if x==int(x):
		ans=digitsum(x)
		if ans==b:
			return int(x)
	return -1


n=int(input())
isprinted=False
for i in range(1,91):
	val=findroot(i)
	if val!=-1:
		print(val)
		isprinted=True
		break

if isprinted==False:
	print("-1")

