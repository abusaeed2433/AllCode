import os

t=int(input())
while t:
	t-=1
	s=input()
	print(s[0],end='')
	i=1
	while i<len(s)-1:
		print(s[i],end='')
		i+=2
	print(s[-1])
