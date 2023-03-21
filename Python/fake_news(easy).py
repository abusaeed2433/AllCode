
s=input()
st=['h','e','i','d','i']
k=0
z=0
for i in range(len(s)):
	if s[i]==st[k]:
		k+=1
		if k==5:
			z=1
			break
	else:
		continue
if z==0:
	print("NO")
else:
	print("YES")

