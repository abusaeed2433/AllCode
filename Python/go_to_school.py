n=int(input())
a=list(map(int,input().split()))
for i in range(0,n+1):
    for j in range(0,n):
        if a[j]==i:
            print("%d "%int(j+1),end='')
