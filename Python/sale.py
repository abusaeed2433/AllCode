import math
n,m=list(map(int,input().split()))
a=list(map(int,input().split()))
a=list(filter(lambda n:n<=0,a))
a.sort()
if len(a)>=m:
    c=sum(a[0:m])
    c=int(math.fabs(c))
else:
    c=sum(a)
    c=int(math.fabs(c))
print(c)
