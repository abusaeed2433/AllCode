
s=input()
z=[]
for i in range(len(s)-1):
	if s[i]==s[i+1]:
		z.append(1)
	else:
		z.append(0)
#print(z)
n=int(input())
while n:
	n-=1
	l,r=map(int,input().split())
	if l==r:
		print("0")
	else:
		print(sum(z[l-1:r-1]))
					#unknown_2433