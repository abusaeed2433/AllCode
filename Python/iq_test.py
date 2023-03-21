n=int(input())
a=list(map(int,input().split()))
x=0
y=0
z=0
zz=0
for i in range(0,n):
    if a[i]%2==0:
        if x==2:
            continue
        else:
            x=x+1
            z=i
    else:
        if y==2:
            continue
        else:
            zz=i
            y=y+1
if y==1:
    print(zz+1)
else:
    print(z+1)
