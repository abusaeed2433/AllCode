import math
def checker(n):
    z=0
    for i in range(2,int(math.ceil(math.sqrt(n)))+1):
        if n%i==0:
            z=1
            break
        else:
            continue
    return z

t=int(input())
a=list(map(int,input().split()))
for i in range(0,t):
    c=int(math.sqrt(a[i]))
    if c==math.sqrt(a[i]):
        z=checker(c)
        if z==0:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
