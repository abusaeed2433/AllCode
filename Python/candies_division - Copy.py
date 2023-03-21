
import math
t=int(input())
for i in range(0,t):
    a,b=list(map(int,input().split()))
    if a>=b:
        if a%b==0:
            print(a)
        else:
            d=a%b
            c=a-d
            f=int(math.floor(b/2))
            if d>=f:
                print(c+f)
            else:
                print(int(c+d))
    else:
        f=int(math.floor(b/2))
        if f<=a:
            print(f)
        else:
            print(a)
