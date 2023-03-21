import math
t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    c=a[n]-a[n-1]
    c=int(math.fabs(c))
    print(c)
