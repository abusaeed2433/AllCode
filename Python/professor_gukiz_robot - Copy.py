import math

x1,y1=list(map(int,input().split()))
x2,y2=list(map(int,input().split()))
c=(math.fabs(x2-x1))
d=(math.fabs(y2-y1))
print(int(max(c,d)))
