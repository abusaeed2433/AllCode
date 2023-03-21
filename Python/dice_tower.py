

t=int(input())
a=list(map(int,input().split()))
for x in a:
	if x<=14:
		print("NO")
	else:
		r=x%14
		y=[1,2,3,4,5,6]
		z=0
		for c in y:
			if r==c:
				z=1
				break
			else:
				continue
		if z==1:
			print("YES")
		else:
			print("NO")