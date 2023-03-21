from math import*
n=int(input())
b=[]
while n!=0:
	b.append(n%2)
	n=n//2
ans=0
k=len(b)-1
for i in range(len(b)):
	ans+=b[i]*int(ceil(2**k))
	k-=1
print(ans)