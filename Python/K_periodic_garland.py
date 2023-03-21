

t=int(input())
while t:
	n,k=list(map(int,input().split()))
	s='1'
	for i in range(0,k-1):
		s+='0'
	s1=s
	s2=s[::-1]
	print(s1,s2)
	#finding 1st 1
	t-=1