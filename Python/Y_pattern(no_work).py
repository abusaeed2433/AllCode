

def print_A(n):
	if n<3:
		print("A")
	else:
		zzz=0
		if n%2==0:
			n-=1
			zzz=1
		if n>25:
			print("size exceeded. printing maximum size:")
			n=25
		k=n
		l=k
		m=n//2
		z=0
		for i in range(n):
			if i==m:
				if n>5 and z==0:
					m+=1
					z=1
				for j in range(0,2*n):
					if j>=k and j<=l:
						print(".",end='')
					else:
						print(" ",end='')

			else:
				for j in range(2*n):
					if j==k or j==l:
						print(".",end='')
					else:
						print(" ",end='')
			k-=1
			l+=1
			print()
		if zzz==1:
			for i in range(2*n):
				if i==0:
					print(".",end='')
				else:
					print(" ",end='')
			print(".")

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
	arr=[l,s,m,s,s]
	for i in range(5):
		if i%2==0:
			for j in range(arr[i]):
				for k in range(n//3):
					print(".",end='')
				for k in range(n-(n//3)):
					print(".",end='')
				print()
		else:
			for j in range(arr[i]):
				for k in range(n//3):
					print(".",end='')
				for k in range(n-(n//3)):
					print(" ",end='')
				print()

def print_F(n):
	if n<=4:
		n=5
		print("size is low. printing minimum size(5)")
	elif n>100:
		print("maximum size reached. printing maimum value")
		n=100
	k=n//5
	l=k+(n%5)//2
	s=k
	d=s
	if (n%5)%2==1:
		d+=1
	arr=[l,s,l,s,d]
	if n>6:
		arr[2]-=1
		d+=1
	#print(arr)
	for i in range(5):
		if i==0:
			for j in range(arr[i]):
				for k in range(n//4):
					print(".",end='')
				for k in range(n-(n//4)):
					print(".",end='')
				print()
		elif i==2:
			for j in range(arr[i]):
				for k in range(n//4):
					print(".",end='')
				for k in range(n-2*(n//4)):
					print(".",end='')
				print()
		else:
			for j in range(arr[i]):
				for k in range(n//4):
					print(".",end='')
				for k in range(n-2*(n//4)):
					print(" ",end='')
				print()

def print_I(n):
	if n<=4:
		n=5
		print("size is low. printing minimum size(5)")
	elif n>100:
		print("maximum size reached. printing maimum value")
		n=100
	k=n//5
	m=3*k
	k+=(n%5)//3
	m+=((n%5)//3)+(n%5)%3
	arr=[k,m,k]
	for i in range(3):
		if i==0 or i==2:
			for j in range(arr[i]):
				for l in range(n):
					print(".",end='')
				print()
		else:
			for j in range(arr[i]):
				for l in range(n//3):
					print(" ",end='')
				for l in range(n-2*(n//3)):
					print(".",end='')
				print()

def print_Y(n):
	if n<3:
		print("Y")
	else:
		if n>53:
			n=53
			print("size exceeded. printing maximum size:")
		for i in range(n):
			for j in range(n):
				if n-1-i>i:
					if j==i or j==n-1-i:
						print(".",end='')
					else:
						print(" ",end='')
				else:
					if j==n-i-1:
						print(".",end='')
					else:
						print(" ",end='')
			print()



x=["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
for y in x:
	print(y,end=' ')
print()
print("Type your pattern from above:")
#taking input
z,z1,countz,countz1=[0]*4
s=""
n=""
checker=0
while z==0 or z1==0:
	if z==0:#and z1==0:
		if countz!=0:
			if countz==10:
				print("Program closed")
				checker=1
				break
			else:
				print("Type only one letter"+"(remaining chance",end=' ')
				print(10-countz,end='')
				print("):")
		countz+=1
		s=input()
		if s in x:
			z=1
		else:
			continue

	if z1==0:
		if countz1!=0:
			if countz1==10:
				print("Program closed")
				checker=1
				break
			print("Type only integer"+"(remaining chance",end=' ')
			print(10-countz1,end='')
			print("):")
		else:
			print("Type pattern size:")
		countz1+=1
		n=input()
		zz=0
		for y in n:
			if y>="0" and y<="9":
				continue
			else:
				zz=1
				break
		if len(n)==0:
			zz=1
		if zz==0:
			z1=1
if len(n)!=0:
	n=int(n)


#calculating
if checker==0:
	if s=="A":
		print_A(n)
	if s=="B":
		print_B(n)
	if s=="C":
		print_C(n)
	if s=="D":
		print_D(n)
	if s=="E":
		print_E(n)
	if s=="F":
		print_F(n)
	if s=="G":
		print_G(n)
	if s=="H":
		print_H(n)
	if s=="I":
		print_I(n)
	if s=="J":
		print_J(n)
	if s=="K":
		print_K(n)
	if s=="L":
		print_L(n)
	if s=="M":
		print_M(n)
	if s=="N":
		print_N(n)
	if s=="O":
		print_O(n)
	if s=="P":
		print_P(n)
	if s=="Q":
		print_Q(n)
	if s=="R":
		print_R(n)
	if s=="S":
		print_S(n)
	if s=="T":
		print_T(n)
	if s=="U":
		print_U(n)
	if s=="V":
		print_V(n)
	if s=="W":
		print_W(n)
	if s=="X":
		print_X(n)
	if s=="Y":
		print_Y(n)
	if s=="Z":
		print_Z(n)


