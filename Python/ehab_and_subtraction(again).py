n,k=list(map(int,input().split()))
a=list(map(int,input().split()))
a.sort()
c=0
d=0
e=1
x=0
while e!=0 and x<k:
    if d>=n:
        break
    else:
        if c==a[d]:
            d+=1
        else:
            e=a[d]-c
            print(e)
            c=a[d]
            d+=1
            x+=1
for i in range(x,k):
    print("0")
