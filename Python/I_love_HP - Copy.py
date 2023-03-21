n=int(input())
a=list(map(int, input().split()))
if n==1:
    print("0")
else:
    mi=min(a[0],a[1])
    ma=max(a[0],a[1])
    if mi==ma:
        x=0
        for i in range(2,n):
            if a[i]>ma:
                ma=a[i]
                x+=1
            if a[i]<mi:
                mi=a[i]
                x+=1
        print(x)
    else:
        mi=min(a[0],a[1])
        ma=max(a[0],a[1])
        x=1
        for i in range(2,n):
            if a[i]>ma:
                ma=a[i]
                x+=1
            if a[i]<mi:
                mi=a[i]
                x+=1
        print(x)
