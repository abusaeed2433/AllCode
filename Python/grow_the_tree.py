n=int(input())
a=list(map(int,input().split()))
a.sort(reverse=True)
if n%2==0:
    b=a[0:int(n/2)]
    c=a[int(n/2):n]
    e=sum(b)
    f=sum(c)
    s=(e*e)+(f*f)
    print(s)
else:
    b=a[0:int(n/2)+1]
    c=a[int(n/2)+1:n]
    e=sum(b)
    f=sum(c)
    g=(e*e)+(f*f)
    print(g)
