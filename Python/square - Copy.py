t=int(input())
for i in range(0,t):
    a,b=list(map(int,input().split()))
    c,d=list(map(int,input().split()))
    e=max(a,b)
    f=max(c,d)
    if e==f:
        g=min(a,b)
        h=min(c,d)
        if (g+h)==e:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
