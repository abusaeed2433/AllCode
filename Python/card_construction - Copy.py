import math
def calc(s):
    n1=(-1+(math.sqrt(1+(24*s))))/6
    n2=(-1-(math.sqrt(1+(24*s))))/6
    n=max(n1,n2)
    return n


t=int(input())
for i in range(0,t):
    s=int(input())
    n=5
    x=0
    while s>=2:
        n=calc(s)
        if n==int(n):
            x+=1
            break
        else:
            n=int(n)
            s1=int((n*((3*n)+1))/2)
            x+=1
            s=s-s1
    print(x)
