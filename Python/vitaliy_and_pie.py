

n=int(input())
n=2*(n-1)
s=input()
x=[]
i=0
count=0
while i<n:
	x.append(s[i])
	if s[i+1].lower() in x:
		x.remove(s[i])
	else:
		count+=1
	i+=2
print(count)