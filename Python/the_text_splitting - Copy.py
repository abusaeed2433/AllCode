import os

n,p,q=map(int,input().split())
s=input()
z=0
for i in range(0,n+1):
	if (n-i*p)%q==0 and (n-i*p)>=0:
#		print(i,(n-i*p)//q)
		print(i+(n-i*p)//q)
		k=0
		for j in range(i):
			print(s[k:k+p])
			k+=p
		for j in range((n-i*p)//q):
			print(s[k:k+q])
			k+=q
		z=1
		break
if z==0:
	print("-1")
