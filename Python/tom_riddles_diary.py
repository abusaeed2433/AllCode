

x=set()
for i in range(0,int(input())):
	s=input()
	if s in x:
		print("YES")
	else:
		print("NO")
	x.add(s)