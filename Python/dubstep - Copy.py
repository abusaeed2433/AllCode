
s=input()
s=list(s)
z="WUB"
i=0
k=1
l_pos=0
while i<len(s)-2:
	if (s[i]+s[i+1]+s[i+2])==z:
		if k==0:
			print(' ',end='')
		k=1
		i+=3
		l_pos+=3
	else:
		k=0
		print(s[i],end='')
		i+=1
		l_pos+=1
for i in range(l_pos,len(s)):
	print(s[i],end='')