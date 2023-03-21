
n,r=list(map(int,input().split()))
a=list(map(int,input().split()))
c=(n*(n-1))/2
a.sort()
x=0
y=0
for i in range(1,n+1):
    x=0
    for j in range(0,n):
        if a[j]==i:
            x+=1
        else:
            if x>0:
                break
            else:
                continue
    y+=(x*(x-1))/2
print(int(c-y))
