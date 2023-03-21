from math import*
per=[]
t=int(input())
while t:
    t-=1
    n=int(input())
    x=[]
    y=[]
    while n:
        n-=1
        x1,y1=map(int,input().split())
        x.append(x1)
        y.append(y1)
    k=0
    length=[]
    for i in range(len(x)):
        l1=x[i]-x[i-1]
        l2=y[i]-y[i-1]
        l=sqrt(l1*l1+l2*l2)
        length.append(l)
    print(length)
    print("average=",(sum(length)/len(length)))
    print("max=",max(length))
    print("min=",min(length))
    print("perimeter=",sum(length))
    per.append(sum(length))    
print(max(per))
