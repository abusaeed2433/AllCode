

t=int(input())
for i in range(0,t):
    a,b,n,s=list(map(int,input().split()))
    if b>=s:
        print("YES")
    else:
        if ((a*n)+b)>=s:
            if s%n<=b:
                print("YES")
            else:
                print("NO")
        else:
            print("NO")
