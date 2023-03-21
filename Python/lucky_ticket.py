def checker(x):
	z=0
	for i in x:
		if i==4 or i==7:
			continue
		else:
			z=1
			break
	return z

n=int(input())
s=input()
x=[]
for i in s:
	x.append(int(i))
z=checker(x)
if z==1:
	print("NO")
else:
	s1=sum(x[0:n//2])
	s2=sum(x[n//2:n])
	if s1==s2:
		print("YES")
	else:
		print("NO")
