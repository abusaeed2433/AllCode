

n,k=list(map(int,input().split()))
a=list(map(int,input().split()))
x=1
y=1
for i in range(0,n-1):
    if a[i]!=a[i+1]:
        x+=1
    else:
        if y<x:
            y=x
            x=1
        else:
            x=1
print(max(x,y))
