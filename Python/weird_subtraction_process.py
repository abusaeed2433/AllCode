import math

a,b=list(map(int,input().split()))
while a!=0 and b!=0:
    if a>=(2*b):
        c=math.floor(a/b)
        while c>0:
            a=a-b
            c-=1
        print(a,b)
    elif b>=(2*a):
        b=b-(math.floor(b/a))*a
    else:
        break
    break
        
