import copy
n=int(input())
a=list(map(int,input().split()))
a.sort()
z=[]
x=[]
y=0
w=0
for i in range(0,n-1):
    if a[i]==a[i+1]:
        y+=1
        x.append(a[i])
    else:
        if y>=2:
            w=1
            break
        else:
            z.append(a[i])
            y=0
z.append(a[n-1])
if w==1:
    print("NO")
else:
    print("YES")
    print(len(x))
    for i in range(0,len(x)):
        print(x[i],end=' ')
    print()
    print(len(z))
    z=z[::-1]
    for i in range(0,len(z)):
        print(z[i],end=' ')
