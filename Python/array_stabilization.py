def tester(c,a):
    x=0
    for i in range(0,n):
        if c==a[i]:
            x+=1
        else:
            continue
    return x

n=int(input())
a=list(map(int,input().split()))
c=max(a)
d=tester(c,a)
c=min(a)
e=tester(c,a)
if d==1:
    if e==1:
        g=(min(a))
        a.remove(g)
        f=max(a)-min(a)
        a.append(g)
        a.remove(max(a))
        h=max(a)-g
        print(min(f,h))   
    else:
        a.remove(max(a))
        print(max(a)-min(a))
else:
    if e==1:
        a.remove(c)
        print(max(a)-min(a))
    else:
        print(max(a)-min(a))
