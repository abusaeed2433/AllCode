def gcd(e,f):
    if e==0 or f==0:
        gcd=max(e,f)
        return gcd
    else:
        while e!=0 and f!=0:
            gcd=f
            f=e%f
            e=gcd
        return gcd
a,b,n=list(map(int,input().split()))
while a!=0:
    e=gcd(a,n)
    n=n-e
    if n<0:
        print("1")
        break
    else:
        f=gcd(b,n)
        n=n-f
        if n<0:
            print("0")
            break
        else:
            continue
