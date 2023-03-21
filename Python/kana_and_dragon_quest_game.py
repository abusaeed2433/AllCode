import math
def func(x,n,m):
    if n!=0:
        for i in range(0,n):
            if x>=20:
                x=math.floor(x/2)+10
            else:
                break
        if m!=0:
            x=x-(10*m)
        if x<=0:
            print("YES")
        else:
            print("NO")
        
    else:
        x=x-(10*m)
        if x<=0:
            print("YES")
        else:
            print("NO")

t=int(input())
for i in range(0,t):
    x,n,m=list(map(int,input().split()))
    func(x,n,m)
