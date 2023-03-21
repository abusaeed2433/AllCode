n=int(input())
a=list(map(int,input().split()))
a=a[::-1]
x=[]
for i in range(0,n):
    c=a[i]
    k=1
    for j in range(0,i-1):
        c=c+k*(x[j])
        x.append(c)
        if k==1:
            k=-1
        else:
            k=1
x=x[::-1]
print(x)
