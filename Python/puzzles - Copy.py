n,m=list(map(int,input().split()))
a=list(map(int,input().split()))
a.sort()
x=[]
for i in range(0,m-n+1):
    c=a[i+n-1]-a[i]
    x.append(c)
y=min(x)
print(y)
