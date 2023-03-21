t=int(input())
while t:
    n=int(input())
    x=[]
    while n:
        n-=1
	a,b=list(map(int,input().split()))
	x.append((a,b))
    x.sort()
    bul=[]
    i=0
    n=len(x)
    while i<n:
        if i!=0:
            x=x[:n]+x[0]
	y=[]
	z=[]
	for l in x:
	    y.append(l[0])
	    z.append(l[1])
	bullet=y[0]
	for j in range(i+1,n):
	    if z[i]>=y[j]:
		i+=1
	    else:
                y[j]-=z[i]
		bullet+=y[j]
		i+=1
	bul.append(bullet)
	print(bul)
	bullet=0
    t-=1
