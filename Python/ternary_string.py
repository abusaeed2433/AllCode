
t=int(input())
while t:
	s=input()
	ans=len(s)
	for i in range(0,len(s)-2):
		k=i-1
		temp=-1
		a=0
		b=0
		c=0
		z=0
		while a==0 or b==0 or c==0:
			k+=1
			if k<len(s):
				if s[k]=='1':
					a+=1
				elif s[k]=='2':
					b+=1
				else:
					c+=1
			else:
				z=1
				break
		temp=k-i+1
		if z==0:
			if ans>temp:
				ans=temp
				if ans==3:
					break
		else:
			if ans==len(s):
				ans=0
				break
	print(ans)
	t-=1