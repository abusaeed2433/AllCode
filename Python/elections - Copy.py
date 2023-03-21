

n,m=list(map(int,input().split()))
x=[]
for i in range(0,m):
    a=list(map(int,input().split()))
    c=max(a)
    for j in range(0,n):
        if a[j]==c:
            x.append(j+1)
            break
        else:
            continue
z=0
zz=[]
for j in range(0,n):
    for i in range(0,m):
        if x[i]==j+1:
            z+=1
        else:
            continue
    zz.append(z)
    z=0
d=max(zz)
for i in range(0,n):
    if zz[i]==d:
        print(i+1)
        break
    else:
        continue
