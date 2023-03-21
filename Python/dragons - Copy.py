s,n=list(map(int,input().split()))
x=[]
y=[]
for i in range(0,n):
    c,d=list(map(int,input().split()))
    x.append(c)
    y.append(d)
w=0
for i in range(0,n):
    z=0
    for j in range(0,n):
        if x[j]!=-1 and s>x[j]:
            s+=y[j]
            x[j]=-1
            z=1
            w+=1
            break
        else:
            continue
    if z==0:
        break
if w==n:
    print("YES")
else:
    print("NO")
