

t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    x=0
    y=0#maximum same element
    z=0#same element counter
    for j in range(0,n-1):
        if a[j]==a[j+1]:
            x+=1
            z+=1
        else:
            if y<=x:
                y=x
                x=0
            else:
                x=0
    if y<=x:
        y=x
    zz=n-z
    if y==0:
        if n<2:
            print("0")
        else:
            print("1")
    else:
        if zz>y+1:
            print(y+1)
        else:
            print(min(y,zz))
            

