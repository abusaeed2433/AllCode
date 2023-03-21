def printer(a,n):
    for i in range(0,n):
        print(a[i],end=' ')
    print()

t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort(reverse=True)
    printer(a,n)
