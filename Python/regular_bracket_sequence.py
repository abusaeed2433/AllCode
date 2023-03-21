

s=input()
l=0
r=0
ans=0
for i in range(len(s)):
	if s[i]=="(":
		l+=1
	else:
		if l>0:
			r+=1
	if l>=r and r>0:
		ans+=1
		r-=1
		l-=1
#	print(l,r,ans)
print(2*ans)


