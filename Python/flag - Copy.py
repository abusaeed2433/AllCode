

n,m=list(map(int,input().split()))
cl=[]
z=0
while n:
	x=[]
	s=input()
	for y in s:
		x.append(int(y))
	st=set(x)
	if len(st)==1:
		cl.append(int(y))
	else:
		z=1
	if len(cl)>=2 and cl[len(cl)-1]==cl[len(cl)-2]:
		z=1
	n-=1
if z==1:
	print("NO")
else:
	print("YES")