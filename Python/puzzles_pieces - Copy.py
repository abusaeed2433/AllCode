

t=int(input())
for i in range(0,t):
    n,m=list(map(int,input().split()))
    if n==1 or m==1:
        print("YES")
    elif m==2 and n==2:
        print("YES")
    else:
        print("NO")

