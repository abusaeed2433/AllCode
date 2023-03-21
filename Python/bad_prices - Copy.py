

t=int(input())
while t:
	n=int(input())
	count=0
	a=list(map(int,input().split()))
	while len(a)>0:
		c=min(a)
		for i in range(0,len(a)):
			if a[i]==c:
				if i==len(a)-1:
					count+=i
					a.clear()
					break
				else:
					count+=i
					a=a[i+1:len(a)]
					break
			else:
				continue
	print(count)
	t-=1