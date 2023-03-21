


t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    x=[]
    y=0
    z=0
    w=0
    ww=0
    for i in range(0,n):
        if a[i]>=0:
            z+=1
            y=i+1
            if w==0:
                continue
            else:
                d=int(max(a[ww-w:ww]))
                x.append(d)
                w=0
        else:
            w+=1
            ww=i+1
            if z==0:
                continue
            else:
                c=max(a[y-z:y])
                x.append(c)
                z=0
    if z>0:
        c=max(a[y-z:y])
        x.append(c)
    if w>0:
        d=max(a[ww-w:ww])
        x.append(d)
    print(int(sum(x)))
