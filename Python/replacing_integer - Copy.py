a=list(map(int,input().split()))
n=a[0]
k=a[1]
if n>=k:
    if n%k==0:
        print("0")
    else:
        if (n%k)<=(k-(n%k)):
            print(n%k)
        else:
            print(k-(n%k))
else:
    c=k-n
    if c<=n:
        print(c)
    else:
        print(n)
