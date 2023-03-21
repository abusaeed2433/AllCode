import math
m,d=list(map(int,input().split()))
x=(7-(d-1))
if m==2:
    y=28-x
elif m==4 or m==6 or m==9 or m==11:
    y=30-x
else:
    y=31-x
s=1+(y/7)
s=math.ceil(s)
print(s)
