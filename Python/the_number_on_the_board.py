
k=int(input())
n=input()
dig=[]
for x in n:
	dig.append(int(x))
dig.sort()
s=sum(dig)
count=0
l=0
while s<k:
	#print(dig)
	#print(s)
	count+=1
	s+=9-dig[l]
	l+=1
print(count)
				#unknown_2433