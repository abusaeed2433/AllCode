
t=int(input())
while t:
	t-=1
	s=input()
	count=1
	y=0
	ip=0
	fp=0
	c=0
	for i in range(len(s)-1):
		if s[i]==s[i+1]:
			count+=1
		else:
			if y<count:
				z=s[i]
				fp=i
				ip=fp-count+1
				y=count
			count=1
	if ip==0 or fp==len(s)-1:
		if ip==0:
			ans1=0
			ans2=0
			ans3=0
			for i in range(fp+1,n):
				if s[i]==z:
					ans1+=1
				else:
					ans2+=1
			

	else:
		ans1=0
		ans2=0
		ans3=0
		ans4=0
		for i in range(ip):
			if s[i]=="0":
				ans1+=1
			else:
				ans2+=1
		for i in range(fp+1,len(s)):
			if s[i]=="1":
				ans3+=1
			else:
				ans4+=1
		print(min((ans1+ans3),(ans2+ans4)))




