
t=int(input())
while t:
	t-=1
	n,m,x,y=map(int,input().split())
	ans2=0
	ans1=0
	for i in range(0,n):
		s=input()
		if len(s)==1:
			if s==".":
				ans1+=1
		else:
			j=0
			z=0
			while j<len(s):
				if s[j]==".":
					if z==0:
						z=1
						if j==len(s)-1:
							ans1+=1
					else:
						ans2+=1
						z=0
				else:
					if z==1:
						ans1+=1
						z=0
					else:
						z=0
				j+=1
	if 2*x<=y:
		print((ans1+2*ans2)*x)
	else:
		print((ans2*y)+(ans1*x))
