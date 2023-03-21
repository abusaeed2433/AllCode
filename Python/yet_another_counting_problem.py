def finder(l,r):
    x=0
    for i in range(l,r+1):
        c=(i%a)%b
        d=(i%b)%a
        if c==d:
            continue
        else:
            x+=1
    print(x,end=' ')

t=int(input())
for i in range(0,t):
    a,b,q=list(map(int,input().split()))
    for j in range(0,q):
        l,r=list(map(int,input().split()))
        finder(l,r)
    print()
    
