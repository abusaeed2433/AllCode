

t=int(input())
x=[]
y=[]
for i in range(0,t):
    a,b=list(map(int,input().split()))
    x.append(a)
    y.append(b)
for i in range(0,t-1):
    z=0
    for j in range(i+1,t):
        if (x[i]+y[i])==x[j] and (x[j]+y[j])==x[i]:
            z=1
            break
        else:
            continue
    if z==1:
        break
    else:
        continue
if z==1:
    print("YES")
else:
    print("NO")
