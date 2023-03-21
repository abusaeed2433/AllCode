t=int(input())
for i in range(0,t):
    n,k=list(map(int,input().split()))
    x=0
    while n:
        if n%k==0:
            n=(n//k)
            x+=1
        else:
            x+=int(n%k)
            n=n-int(n%k)
    print(x)
