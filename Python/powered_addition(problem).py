import copy

t=int(input())
while t:
    n=int(input())
    a=list(map(int,input().split()))
    minstep=0
    z=0
    for i in range(0,n-1):
        print(a)
        if a[i]<=a[i+1]:
            continue
        else:
            z=1
            d=1
            x=0
            while a[i+1]<a[i]:
                a[i+1]+=d
                d=2*d
                x+=1
            if minstep>=x:
                continue
            else:
                minstep=x
    if z==0:
        print("0")
    else:
        print(minstep)
    t-=1
