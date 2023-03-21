f=list(map(int,input().split()))
n=f[0]
m=f[1]
r=f[2]
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=min(a)
d=max(b)
if c>=d:
    print(r)
else:
    e=int(r/c)
    g=e*d
    e=g+(r-e*c)
    print(e)
