import copy

n=int(input())
a=list(map(int,input().split()))
y=[]
na=copy.deepcopy(a)
na.sort(reverse=True)
for i in range(0,n):
    for j in range(0,n):
        if a[j]!=-1 and na[i]==a[j]:
            y.append(j+1)
            a[j]=-1
            break
        else:
            continue
ans=0
for i in range(0,n):
    ans+=(i*na[i])
print(ans+n)
for i in range(0,n):
    print(y[i],end=' ')
