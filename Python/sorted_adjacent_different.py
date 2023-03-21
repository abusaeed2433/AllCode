import math

t=int(input())
while t:
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    if n%2==0:
        c=n//2
        print(a[c-1],a[c],end=' ')
        n=(n//2)-1
        d=c-1
    else:
        c=n//2
        print(a[c],end=' ')
        n=n//2
        d=c
    for i in range(0,n):
        print(a[d-(i+1)],a[c+(i+1)],end=' ')
    print()
    t-=1
    
