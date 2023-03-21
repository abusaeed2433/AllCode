

t=int(input())
for i in range(0,t):
    n,k=list(map(int,input().split()))
    c=k*k
    if c>n:
        print("NO")
    else:
        if n%2==0 and k%2==1:
            print("NO")
        elif n%2==1 and k%2==0:
            print("NO")
        else:
            print("YES")
