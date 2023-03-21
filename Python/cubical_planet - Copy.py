

a=list(map(int,input().split()))
b=list(map(int,input().split()))
z=0
for i in range(0,3):
    if a[i]==0:
        if b[i]==1:
            continue
        else:
            z=1
            break
    else:
        if b[i]==0:
            continue
        else:
            z=1
            break
if z==1:
    print("YES")
else:
    print("NO")
