from math import*

n=int(input())
for i in range(int(ceil(sqrt(n))),0,-1):
	if n%i==0:
		print(2*(i+(n//i)))
		break
	else:
		continue