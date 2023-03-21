a=list(map(int,input().split()))
d=a[3]
a=[a[0],a[1],a[2]]
a=sorted(a)
x=0
for i in range(0,10000000000):
    if (a[1]-a[0])>=d:
        if (a[2]-a[1])>=d:
            if (a[2]-a[0])>=d:
                print(x)
                break
            else:
                a[2]=a[2]+1
                x=x+1
        else:
            a[2]=a[2]+1
            x=x+1
    else:
        a[0]=a[0]-1
        x=x+1
