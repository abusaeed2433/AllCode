import math
def value(n):
    x=[]
    for i in range(1,n+1):
        c=2**i
        x.append(c)
    return x
t=int(input())
for i in range(0,t):
    n=int(input())
    x=value(n)
    print(x)
    d=n/2
    e=sum(x[int(d-1):int(2*d-1)])
    f=sum(x)-e
    f=f-e
    f=math.fabs(f)
    print(int(f))
