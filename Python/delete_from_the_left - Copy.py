
s1=input()
s2=input()
s1=list(s1)
s2=list(s2)
n=min(len(s1),len(s2))
z=0
count=0
for i in range(n):
	if s1[len(s1)-1-i]==s2[len(s2)-1-i]:
		count+=1
	else:
		break
if z==0:
	print(len(s1)+len(s2)-2*count)