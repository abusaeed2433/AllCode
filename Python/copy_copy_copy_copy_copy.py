t=int(input())
for i in range(0,t):
    x=1
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    for j in range(0,n-1):
        if a[j]!=a[j+1]:
            x=x+1
        else:
            continue
    print(x)
