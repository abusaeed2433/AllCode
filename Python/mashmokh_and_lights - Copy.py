n,m=list(map(int,input().split()))
b=list(map(int,input().split()))
x=[]
c=n
for i in range(0,n):
    x.append(0)
for i in range(0,m):
    for j in range(b[i]-1,n):
        x[j]=b[i]
        n=b[i]-1
for i in range(0,c):
    print(x[i],end=' ')
