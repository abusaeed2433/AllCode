import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	z=[]
	while n:
		n-=1
		x,y=map(int,input().split())
		z.append((x,y))
	z.sort()
	s=""
	i=0
	k=0
	k1=0
	zz=0
	while i<len(z):
		if z[i][0]>=k:
			for j in range(k,z[i][0]):
				s+="R"
			k=z[i][0]
			if z[i][1]>=k1:
				for j in range(k1,z[i][1]):
					s+="U"
				k1=z[i][1]
			else:
				zz=1
				break
		else:
			zz=1
			break
		i+=1

	if zz==1:
		print("NO")
	else:
		print("YES")
		print(s)