n=int(input())
a=list(map(int,input().split()))
if n==2:
    print(a[1]+a[1]-a[0])
else:
    c=a[1]-a[0]
    z=0
    for i in range(1,n-1):
        d=a[i+1]-a[i]
        if d==c:
            continue
        else:
            z=1
            break
    if z==0:
        print(a[n-1]+a[n-2]-a[n-3])
    else:
        print(a[n-1])
