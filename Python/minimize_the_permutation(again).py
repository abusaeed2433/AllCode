def calc(a,p):
    w=0
    d=0
    for i in range(w,n):
        if a[i]==p:
            d=i-w
            break
        else:
            continue
    return d

t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))

    
