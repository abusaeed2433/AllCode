n=int(input())
a=list(map(int,input().split()))
b=[]
y=1
x=1
z=3
b.append(a[0])
for i in range(1,2*n):
    z=0
    for j in range(0,len(b)):
        if a[i]==b[j]:
            z=1
            break
        else:
            continue
    if z==0:
        x=x+1
        b.append(a[i])
        if y<x:
            y=x
    else:
        x=x-1
        b.remove(a[i])
print(y)
