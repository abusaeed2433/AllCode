def calc(x,y):
    z=y[0]
    price=0
    for i in range(0,len(y)):
        if z<=y[i]:
            price+=z*x[i]
        else:
            z=y[i]
            price+=x[i]*y[i]
    print(price)
t=int(input())
x=[]
y=[]
for i in range(0,t):
    a=list(map(int,input().split()))
    x.append(a[0])
    y.append(a[1])
calc(x,y)
