import math
import copy

t=int(input())
while t:
    n=int(input())
    i=n
    x=[]
    y=[]
    while i:
        l,r=list(map(int,input().split()))
        x.append(l)
        y.append(r)
        i-=1
    x1=copy.deepcopy(x)
    y1=copy.deepcopy(y)
    x1.sort()
    y1.sort()
    if x1[0]==x1[n-1] or y1[0]==y1[n-1]:
        print("0")
        print("s")
    else:
        f=min(x)
        z=0
        for j in range(0,n):
            if x[j]==f:
                if y[j]==max(y):
                    z=1
                    f=0
                    break
                else:
                    continue
            else:
                continue
        c=max(x)-min(x)
        d=max(y)-min(y)
        e=int(math.fabs(min(y)-max(x)))
        if z==1:
            print(min(c,d,e,f))
        else:
            print(min(c,d,e))
    t-=1
