def checker(a,n):
    c=0
    if a[0]==1:
        c=1
        for i in range(1,n):
            if a[i]==1:
                c+=1
            else:
                break
    return c
                

n=int(input())
a=list(map(int,input().split()))
y=0
for i in range(0,n):
    x=0
    if a[i]==1:
        x+=1
        for j in range(i+1,n):
            if a[j]==1:
                x+=1
            else:
                if y<=x:
                    y=x
                    break
                else:
                    break
    else:
        continue
    if y<=x:
        y=x
if y==n:
    print(y)
else:
    d=checker(a,n)
    a=a[::-1]
    e=checker(a,n)
    f=d+e
    if(f>=n):
        f=n
    if y>=f:
        print(y)
    else:
        print(f)
