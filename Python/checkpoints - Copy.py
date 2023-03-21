import math

n,k=list(map(int,input().split()))
a=list(map(int,input().split()))
if n==1:
    print("0")
elif n==2:
    c=k-a[0]
    c=int(math.fabs(c))
    d=k-a[1]
    d=int(math.fabs(d))
    print(min(c,d))
else:
    x=[]
    a.sort()
    e=int(math.fabs(k-a[0]))
    g=int(math.fabs(k-a[n-2]))
    e=int(min(e,g))
    f=int(math.fabs(k-a[n-1]))
    h=int(math.fabs(k-a[1]))
    f=int(min(f,h))
    s=0
    for i in range(0,n-1):
        c=int(a[i+1]-a[i])
        c=int(math.fabs(c))
        s+=c
    e=e+s-(a[n-1]-a[n-2])
    f=f+s-(a[1]-a[0])
    print(min(e,f))
