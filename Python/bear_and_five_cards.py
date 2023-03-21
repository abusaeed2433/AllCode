

a=list(map(int,input().split()))
a.sort(reverse=True)
p_ans=0
c=0
for i in range(len(a)-1):
	if a[i]==a[i+1]:
		c=2*a[i]
		if i!=0:
			if a[i]==a[i-1]:
				c=3*a[i]
				if p_ans<c:
					p_ans=c
				else:
					continue
			else:
				c=2*a[i]
				if p_ans<=c:
					p_ans=c
				else:
					continue
		else:
			if p_ans<c:
				p_ans=c
			else:
				continue
	else:
		continue
print(sum(a)-p_ans)
