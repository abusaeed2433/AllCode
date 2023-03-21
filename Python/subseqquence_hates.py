
t=int(input())
while t:
	t-=1
	s=input()
	z=[]
	count=1
	for i in range(len(s)-1):
		if s[i]==s[i+1]:
			count+=1
		else:
			z.append(count)
			count=1
	z.append(count)
	if len(z)<=2:
		print("0")
	else:
		if z[0]==max(z) or z[len(z)-1]==max(z):
			if z[0]==max[z]:
				z=[1:]
			else:
				z=[0:len(z)-1:-1]
				
		else:
			z=
	print(z)