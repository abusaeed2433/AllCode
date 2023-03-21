

t=int(input())
while t:
	zero=0
	even=0
	zz=0
	s=input()
	for i in range(0,len(s)):
		if s[i]=='0':
			zero+=1
		elif int(s[i])%2==0:
			even+=1
		else:
			zz+=int(s[i])
	if zero%3==0 and even%3==0 and zz%3==0:
		print("red")
	elif 
	t-=1
