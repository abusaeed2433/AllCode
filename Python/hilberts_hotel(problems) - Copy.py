def checker(x):
    x.sort()
    z=0
    for i in range(0,len(x)-1):
        if x[i]==x[i+1]:
            z=1
            break
        else:
            continue
    if z==1:
        print("NO")
    else:
        print("YES")

t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    x=[]
    for k in range(0,n):
        c=int(k+a[int(k%n)])
        x.append(c)
    checker(x)

