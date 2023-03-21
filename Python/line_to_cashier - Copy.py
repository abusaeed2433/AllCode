n=int(input())
a=list(map(int,input().split()))
x=[]
for i in range(0,n):
    b=list(map(int,input().split()))
    c=sum(b)
    d=(5*c)+(15*len(b))
    x.append(d)
c=min(x)
print(c)
