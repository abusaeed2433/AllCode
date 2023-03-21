n,m=list(map(int,input().split()))
z=[]
c=0
d=0
for i in range(0,n):
    a,b=list(map(int,input().split()))
    d+=a
    c+=b
    z.append(a-b)
if c>m:
    print("-1")
else:
    if d<=m:
        print("0")
    else:
        z.sort(reverse=True)
        c=0
        for i in range(0,n):
            c+=z[i]
            if (d-c)<=m:
                print(i+1)
                break
            else:
                continue
