def counter(arr,k):
	a=0
	b=0
	c=0
	d=0
	e=0
	for i in range(n):
		if arr[i][k]=="A":
			a+=1
		elif arr[i][k]=="B":
			b+=1
		elif arr[i][k]=="C":
			c+=1
		elif arr[i][k]=="D":
			d+=1
		else:
			e+=1
	return max(a,b,c,d,e)



n,m=map(int,input().split())
arr=[]
for i in range(n):
	s=input()
	arr.append(s)
marks=list(map(int,input().split()))
ans=0
for i in range(m):
	c=counter(arr,i)
	#print(c)
	ans+=marks[i]*c
print(ans)
			#unknown_2433