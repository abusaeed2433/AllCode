import os
	
def counter(f,l,c):
	count=0
	for i in range(f,l+1):
		if s[i]!=x[c]:
			count+=1

	return count

def calc(f,l,c):
#	c+=2
	if f==l:
		if s[f]==x[c]:
			return 0
		else:
			return 1
	var=(f+l)//2
	return min(counter(f,var,c)+calc(var+1,l,c+1),
		counter(var+1,l,c)+calc(f,var,c+1))

t=int(input())
while t:
	t-=1
	n=int(input())
	s=input()
	x=["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
	f=0
	l=n-1
	c=0
	print(calc(f,l,c))

