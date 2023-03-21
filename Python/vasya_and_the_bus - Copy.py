

n,m=list(map(int,input().split()))
if n==0 and m!=0:
    print("Impossible")
elif n==0 and m==0:
    print("0 0")
else:
    if m==0:
        print(n,n)
    else:
        if n<=m:
            print(n+(m-n),n+m-1)
        else:
            print(n,n+m-1)
