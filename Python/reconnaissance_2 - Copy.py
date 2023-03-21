import copy
import math

n=int(input())
a=list(map(int,input().split()))
x=[]
for i in range(0,n-1):
    c=int(math.fabs(a[i]-a[i+1]))
    x.append(c)
c=int(math.fabs(a[0]-a[n-1]))
x.append(c)
d=min(x)
for i in range(0,n):
    if d==x[i]:
        if i==n-1:
            print(1,n)
        else:
            print(i+1,i+2)
        break
    else:
        continue
