
t=int(input())
while t:
    n=int(input())
    
    s2=int((n*int((n+1))//2))
    s=1
    k=1
    while s<=n:
        s=2*s
        k+=s
    k=k-s
    print(s2-(2*k))
    t-=1
