def string(n,m):
    for i in range(0,n):
        for j in range(0,m):
            if i==0 and j==0:
                print("W",end='')
            else:
                print("B",end='')
        print()


t=int(input())
for i in range(0,t):
    n,m=list(map(int,input().split()))
    string(n,m)
