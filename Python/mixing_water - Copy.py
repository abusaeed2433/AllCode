from math import*

zz=int(input())
while zz:
	zz-=1
	h,c,t=map(int,input().split())
	if t>=h:
		print("1")
	elif ((h+c)/2)>=t:
		print("2")
	else:
		n=3
		ans=(((n//2)+1)*h+(n//2)*c)/n
		#print(ans)
		if t>ans:
			if (t-ans)<(h-t):
				print("3")
			else:
				print("1")
		else:
			while t<=ans:
				n+=2
				ans=(((n//2)+1)*h+(n//2)*c)/n
			if t==ans:
				print(n)
			else:
				c=fabs(ans-t)
				n+=2
				ans=(((n//2)+1)*h+(n//2)*c)/n
				d=fabs(ans-t)
				if c<=d:
					print(n-2)
				else:
					print(n)

