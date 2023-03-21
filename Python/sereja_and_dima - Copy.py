

n=int(input())
a=list(map(int,input().split()))
s=0
d=0
i=-1
while len(a)!=0:
	i+=1
	if i%2==0:
		if a[0]>=a[len(a)-1]:
			s+=a[0]
			a.pop(0)
		else:
			s+=a[len(a)-1]
			a.pop()
	else:
		if a[0]>=a[len(a)-1]:
			d+=a[0]
			a.pop(0)
		else:
			d+=a[len(a)-1]
			a.pop(len(a)-1)

print(s,d)