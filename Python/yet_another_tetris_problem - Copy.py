

t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    z=0
    for i in range(0,n-1):
        y=a[i+1]-a[i]
        if y%2==1:
            z=1
            break
        else:
            continue
    if z==1:
        print("NO")
    else:
        print("YES")
        

