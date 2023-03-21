import math


t=int(input())
for i in range(0,t):
    n,k=list(map(int,input().split()))
    if n==k:
        print(n+1)
    elif n>k:
        print(k)
    else:
        n=n/(n-1)
        n=n*k
        n=int(math.ceil(n))
        print(n-1)
        
        
