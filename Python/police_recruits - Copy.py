import math
t=int(input())
a=list(map(int,input().split()))
count=0
s=0
zz=5
z=[]
for x in a:
	if x>0:
		if zz==1:
			z.append(s)
			s=x
			zz=0
		else:
			zz=0
			s+=x
	else:
		if zz==0:
			z.append(s)
			s=x
			zz=1
		else:
			s+=x
			zz=1
z.append(s)
count=0
s=0
for x in a:
	if x>=0:
		s+=x
	else:
		s+=x
		if s>=0:
			continue
		else:
			count+=math.fabs(x)
			s=0

print(int(count))