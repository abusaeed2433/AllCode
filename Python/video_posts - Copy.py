

n,k=list(map(int,input().split()))
a=list(map(int,input().split()))
c=sum(a)
if c%k==0:
    zz=[]
    ww=0
    d=int(c/k)
    x=0
    w=0
    for i in range(0,n):
        x+=a[i]
        y=i+1
        if x==d:
            zz.append(y-w)
            x=0
            w=i+1
        elif x<d:
            continue
        else:
            ww=1
            print("No")
            break
    if ww==0:
        print("Yes")
        for i in range(0,len(zz)):
            print(zz[i],end=' ')
else:
    print("No")
