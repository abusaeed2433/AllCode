import copy
import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
    y=[]
    n=int(input())
    nn=n
    while nn:
        nn-=1
        a,b=map(int,input().split())
        y.append([a,b])
    bul=[]
    i=-1
    while i<n-1:
        i+=1
        if i!=0:
            if i==n-1:
                x=copy.deepcopy([y[n-1]]+y[0:n-1])
            elif i==1:
                x=copy.deepcopy(y[i:n]+[y[0]])
            else:            
                x=copy.deepcopy(y[i:n]+y[0:i])
        else:
            x=copy.deepcopy(y)
        bullet=x[0][0]
        for j in range(1,n):
            if x[j-1][1]>=x[j][0]:
                continue
            else:
                x[j][0]-=x[j-1][1]
                bullet+=x[j][0]
        bul.append(bullet)
        bullet=0
    print(min(bul))
    t-=1