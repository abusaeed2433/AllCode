
z=0
for i in range(3):
	count=0
	s=input()
	for x in s:
		if x=="a" or x=="e" or x=="i" or x=="o" or x=="u":
			count+=1
		else:
			continue
	if i==1:
		if count==7:
			continue
		else:
			z=1
	else:
		if count==5:
			continue
		else:
			z=1
if z==1:
	print("NO")
else:
	print("YES")
