

t=int(input())
while t:
    n,k=list(map(int,input().split()))
    if n%2==0:
        print(int(n+2*k))
    else:
        c=2
        while n%c!=0:
            c+=1
        print(int(n+c+2*(k-1)))
    t-=1
