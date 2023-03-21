
def printer(s,pos,k):
	x=["d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w"]
	p=""
	for i in range(len(s)):
		if i==pos and pos!=-1:
			print(x[k%20],end='')
			p+=x[k%20]
		else:
			print(s[i],end='')
			p+=s[i]
	print()
	return p

def ret(s,pos,k):
	x=["d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w"]
	p=""
	for i in range(len(s)):
		if i==pos and pos!=-1:
			p+=x[k%20]
		else:
			p+=s[i]
	return p

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	m=max(arr)
	if m==0:
		y=["a","b"]
		k1=0
		print("x")
		for i in range(n):
			print(y[k1%2])
			k1+=1
	else:
		p=""
		for i in range(m):
			p+="a"
		z=0
		k=0
		p=printer(p,-1,k)
		k+=1
		x=["d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w"]
		for i in range(n):
			if arr[i]==m:
				p=printer(p,-1,k)
				k+=1
			else:
				p=printer(p,arr[i],k)
				k+=1


