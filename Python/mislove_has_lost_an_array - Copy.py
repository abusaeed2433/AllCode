def calculator(n,l,r):
    s=1
    c=1
    for i in range(1,l):
        s=2*s
        c+=s
    c+=(n-l)
    print(c,end=' ')
    s=1
    c=1
    for i in range(1,r):
        s=2*s
        c+=s
    c+=(s*(n-r))
    print(c)

n,l,r=list(map(int,input().split()))
calculator(n,l,r)
