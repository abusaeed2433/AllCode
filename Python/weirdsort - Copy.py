
t=int(input())
for i in range(0,t):
    n,m=list(map(int,input().split()))
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    z=4
    for j in range(0,n-1):
        if a[j]<a[j+1]:
            continue
        else:
            c=j+1
            z=0
            b.sort()
            for k in range(0,m):
                if b[k]==c:
                    z=1
                    break
                else:
                    continue
            if z==0:
                break
            else:
                continue
    if z==0:
        print("NO")
    else:
        print("YES")
