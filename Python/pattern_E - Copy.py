

def print_E(n):
	if n<=4:
		n=5
		print("size is low. printing minimum size(5)")
	elif n>100:
		print("maximum size reached. printing maimum value")
		n=100
	k=n//5
	s=k+(n%5)//2
	l=k
	m=k
	if (n%5)%2==1:
		m+=1
	arr=[l,s,m,s,l]
	for i in range(5):
		if i%2==0:
			for j in range(arr[i]):
				print("..",end='')
				for k in range(n-2):
					print(".",end='')
				print()
		else:
			for j in range(arr[i]):
				print("..",end='')
				for k in range(n-2):
					print(" ",end='')
				print()



n=int(input())
print_E(n)