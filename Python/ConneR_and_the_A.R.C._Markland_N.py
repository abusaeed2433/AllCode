import math

t=int(input())
for i in range(0,t):
    n,s,k=list(map(int,input().split()))
    a=list(map(int,input().split()))
    a.sort()
    x=list(filter(lambda x:x>=s,a))
    y=list(filter(lambda x:x<s,a))
    w=1000000000
    print(x,y)
    maxx=max(x)+1
    miny=min(y)-1
    z=0
    for j in range(s,n+1):
        if len(x)>0:
            if j==x[0]:
                x.pop(0)
            else:
                w=x[0]-s
                break
        else:
            w=maxx-s
            break
    j=s-1
    ww=1000000000
    while j>=0:
        if len(y)>0:
            if j==y[len(y)-1]:
                y.pop()
            else:
                ww=s-y[len(y)-1]
                break
        else:
            ww=s-miny
            break
    print(w,ww)
    print(min(w,ww))
    
