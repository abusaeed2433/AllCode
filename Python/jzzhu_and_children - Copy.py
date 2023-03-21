n,m=list(map(int,input().split()))
a=list(map(int,input().split()))
c=max(a)
c=c/m
if c==int(c):
    c=c-1
x=[]
for i in range(0,n):
    if (a[i]/m)>int(c):
        x.append(i+1)
print(x[len(x)-1])
