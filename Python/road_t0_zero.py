

t=int(input())
for i in range(0,t):
    x,y=list(map(int,input().split()))
    a,b=list(map(int,input().split()))
    if a==0 or b==0:
        print("0")
    elif a==0 and b==0:
        print("0")
    else:
        if (a+a)<=b:
            print(int(a*(x+y)))
        else:
            c=min(x,y)
            d=max(x,y)
            d=d-c
            print((c*b)+(d*a))
        
