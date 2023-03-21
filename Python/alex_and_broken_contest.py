

s=input()
name=["Danil","Olya","Slava","Ann","Nikita"]
count=0
for x in name:
	i=0
	while i<len(s)-len(x)+1:
		if s[i:len(x)+i]==x:
			count+=1
			i+=len(x)
		else:
			i+=1
	if count>=2:
		break
if count==1:
	print("YES")
else:
	print("NO")