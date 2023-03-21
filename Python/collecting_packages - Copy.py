import math
import copy
def calc(x,y,n,e,g,c):
    z=[]
    count=0
    xx=copy.deepcopy(x)
    wwww=0
    www=[]
    while count<n:
        ww=[]
        z.append(c-e)
        for j in range(0,n):
            if x[j]!=-1 and x[j]==c:
                count+=1
                ww.append(int(math.fabs(y[j]-g)))
                www.append(y[j])
                x[j]=-1
                y[j]==-1
            else:
                continue
        h=min(www)
        www.clear()
        if h<g:
            wwww=1
            break
        f=max(ww)
        if f>g:
            g=f
        e=c
        z.append(f)
        xx=list(filter(lambda x:x>c,xx))
        if len(xx)==0:
            break
        else:
            c=min(xx)
    if wwww==1:
        z.clear()
        return z
    else:
        return z

def printer(z):
    for i in range(0,len(z)):
        if i%2==0:
            for j in range(0,z[i]):
                print("R",end='')
        else:
            for j in range(0,z[i]):
                print("U",end='')
    print()

t=int(input())
for i in range(0,t):
    n=int(input())
    x=[]
    y=[]
    for j in range(0,n):
        x1,y1=list(map(int,input().split()))
        x.append(x1)
        y.append(y1)
        e=0
        f=0
    c=min(x)
    z=calc(x,y,n,e,f,c)
    if len(z)==0:
        print("NO")
    else:
        print("YES")
        printer(z)
        
