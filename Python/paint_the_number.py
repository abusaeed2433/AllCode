n=int(input())
a=list(map(int,input().split()))
a.sort()
x=[]
for i in range(0,n):
    y=1
    if a[i]!=0:
        for j in range(0,n):
            if i!=j and a[i]!=0 and a[j]!=0 and a[j]%a[i]==0:
                a[j]=0;
                y=y+1
            else:
                continue
        x.append(y)
    else:
        continue
print(len(x))
