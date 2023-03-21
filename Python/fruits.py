def value(a,z):
    w=0
    for i in range(0,len(z)):
        w+=a[i]*z[i]
    print(w,end=' ')

n,m=list(map(int,input().split()))
a=list(map(int,input().split()))
x=[]
for i in range(0,m):
    s=input()
    x.append(s)
x=sorted(x)
y=1
z=[]
for i in range(0,m-1):
    if x[i]==x[i+1]:
        y+=1
    else:
        z.append(y)
        y=1
z.append(y)
z.sort(reverse=True)
a.sort()
value(a,z)
a=a[::-1]
value(a,z)
