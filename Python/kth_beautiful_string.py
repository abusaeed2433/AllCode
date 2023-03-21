

t=int(input())
for i in range(0,t):
    n,k=list(map(int,input().split()))
    z=0
    t=n-2
    while t>=0:
        tt=n-1
        while tt>t:
            z+=1
            if z==k:
                x=t
                y=tt
                break
            else:
                tt-=1
        if z==k:
            break
        else:
            t-=1
    for j in range(0,n):
        if j==x or j==y:
            print("b",end='')
        else:
            print("a",end='')
    print()
