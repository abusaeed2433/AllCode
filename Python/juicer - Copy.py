

n,b,d=list(map(int,input().split()))
a=list(map(int,input().split()))
s=0
x=0
for i in range(0,n):
    if a[i]>b:
        continue
    else:
        s+=a[i]
    if s>d:
        s=0
        x+=1
    else:
        continue
print(x)
