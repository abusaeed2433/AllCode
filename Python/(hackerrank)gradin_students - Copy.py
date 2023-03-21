
t=int(input())
while t:
	t-=1
	n=int(input())
	if n%5>=3:
		c=n+(5-(n%5))
		if c<40:
			print(n)
		else:
			print(c)
	else:
		print(n)