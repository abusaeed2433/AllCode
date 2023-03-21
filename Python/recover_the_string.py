import math
def func(y):
    n1=(1+(math.sqrt(1+(8*y))))/2
    n2=(1-(math.sqrt(1+(8*y))))/2
    n=max(n1,n2)
    return n
a=list(map(int,input().split()))
s=sum(a)
n=func(s)
d=func(a[3])
e=func(a[0])
if a[0]==0 and a[1]==0 and a[3]==0 and a[2]==0:
    print("0")
else:
    if int(n)==n and int(d)==d and int(e)==e:
        p=0
        if (a[1]+a[2])==(e*d):
            t=0
            d=int(d)
            e=int(e)
            j=0
            y=0
            while a[1]!=j:
                print("0",end='')
                p+=1
                j+=(d-y)
                y=1
            for k in range(0,d):
                print("1",end='')
            for k in range(p,e):
                print("0",end='')
            
        else:
            print("Impossible")
    else:
        print("Impossible")
