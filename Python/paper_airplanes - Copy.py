import math
k,n,s,p=list(map(int,input().split()))
c=n/s
c=math.ceil(c)
c=c*k
c=c/p
c=math.ceil(c)
print(int(c))
