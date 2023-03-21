import math

t=int(input())
for i in range(0,t):
    n=int(input())
    n1=0
    n2=0
    n3=0
    for j in range(2,int(math.ceil((math.sqrt(n))))):
        if n%j==0:
            n1=j
            n3=n/j
            break
        else:
            continue
    z=0
    for j in range(n1+1,(int(math.ceil((math.sqrt(n3)))))):
        if n3%j==0 and j!=n3/j and (n3/j)!=n1:
            z=1
            n2=j
            n3=int(n3/j)
            break
        else:
            continue
    if z==0:
        print("NO")
    else:
        print("YES")
        print(n1,n2,n3)
