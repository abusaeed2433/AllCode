import sys
input=sys.stdin.buffer.readline
t=int(input())
while t:
    t-=1
    n=int(input())
    x=[]
    y=[]
    for i in range(n):
        a,b=list(map(int,input().split()))
        x.append(a)
        y.append(b)
    count=0
    for i in range(n):
        if x[i]>y[i-1]:
            count+=(x[i]-y[i-1])
            x[i]=y[i-1]
        else:
            continue
    ans=min(x)
    print(count+ans)
