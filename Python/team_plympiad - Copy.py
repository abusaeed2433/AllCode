n=int(input())
x=0
y=0
z=0
a=[]
b=[]
c=[]
d=[]
a=list(map(int,input().split()))
a=[int(input()) for i in range(n)]
for i in range(0,n):
    if a[i]==1:
        x=x+1
        d.append(i+1)
    elif a[i]==2:
        y+=1
        b.append(i+1)
    else:
        z+=1
        c.append(i+1)
p=min(x,y,z)
print(p)
for i in range(0,p):
    print("%d %d %d"%(d[i],b[i],c[i]))
