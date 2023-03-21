g=[int(input()) for i in range(0,6)]
a=g[0]
b=g[1]
c=g[2]
d=g[3]
e=g[4]
f=g[5]
if e>=f:
    s=min(a,d)
    d=d-s
    s=s*e
    h=min(b,c,d)
    s=s+(h*f)
    print(s)
else:
    s=min(b,c,d)
    d=d-s
    s=s*f
    h=min(a,d)
    s=s+(h*e)
    print(s)
