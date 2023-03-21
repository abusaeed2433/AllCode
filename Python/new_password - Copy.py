
x=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
n,k=list(map(int,input().split()))
while n>0:
    for i in range(0,k):
        print(x[i],end='')
        n-=1
        if n==0:
            break
        else:
            continue
