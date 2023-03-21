

def generatePattern(n):
	s=""
	s1=""
	for i in range(n):
		s1+="A"
		if i==0 or i==n-1:
			s+="A"
		else:
			s+="*"
		print("A",end='')
	print()
	i=1
	while(i<n):
		for j in range(i):
			print("#",end='')
		if(i==n-1):
			print(s1)
		else:
			print(s)
		i+=1
	

#num = int(input())
#generatePattern(num)
for i in range(1,3):
	print("a")