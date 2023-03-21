def f(a,b):
    c=d-b
    c=abs(c)
    return c
b=list(map(int,input().split()))
n=b[0]
d=b[1]
a=list(map(int,input().split()))
x=2
for i in range(0,n-1):
    c=f(a[i],a[i+1])
    if c>(2*d):
        x=x+2
    elif c==(2*d):
           x=x+1
    else:
        continue
print(x)
