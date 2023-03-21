
n,d=map(int,input().split())
s=input()
i_pos=0
ans=0
zz=0
while i_pos<n-1:
	c=d
	z=0
	while c>0:
		if i_pos+c<n-1:
			if s[i_pos+c]=="1":
				ans+=1
				z=1
				i_pos+=c
				break
			else:
				c-=1
		else:
			i_pos+=c
			ans+=1
			z=1
			break
	if z==0:
		zz=1
		print("-1")
		break
	else:
		continue
if zz==0:
	print(ans)
