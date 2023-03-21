c=list(map(int,input().split()))
n=c[0]
m=c[1]
x=[]
a=list(map(int,input().split()))
b=0
for i in range(0,n):
    d=(a[i]+b)
    print("%d"%(d/m),end=' ')
    b=d%m
