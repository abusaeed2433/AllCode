a=list(map(int,input().split()))
n=a[0]
m=a[1]
b=list(map(int,input().split()))
c=list(map(int,input().split()))
b.sort()
c.sort()
z=0
for i in range(0,n):
    for j in range(0,m):
        if b[i]==c[j]:
            d=b[i]
            z=1
            break
        else:
            continue
    if z==1:
        break
    else:
        continue
if z==1:
    print(d)
else:
    e=min(b)
    f=min(c)
    g=min(e,f)
    h=max(e,f)
    print(10*g+h)
