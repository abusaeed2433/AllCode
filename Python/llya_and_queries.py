
s=input()
z=[0]
count=0
for i in range(len(s)-1):
	if s[i]==s[i+1]:
		count+=1
	z.append(count)
#print(z)
n=int(input())
while n:
	n-=1
	l,r=map(int,input().split())
#	var=0
#	if l==1:
#		var=0
#	else:
#		var=z[l-2]
	print(z[r-1]-z[l-1])
					#unknown_2433