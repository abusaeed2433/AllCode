a=list(map(int,input().split()))
a1=a[0]
a2=a[1]
a3=a[2]
b=list(map(int,input().split()))
b1=b[0]
b2=b[1]
b3=b[2]
n=int(input())
c=a1+a2+a3
d=b1+b2+b3
if c==0:
    if d==0:
        z=0
    else:
        if d<=10:
            z=1
        else:
            if d%10==0:
                z=(d/10)
            else:
                z=int((d/10))+1
elif c>0 and c<=5:
    if d==0:
        z=1
    else:
        if d<11:
            z=2
        else:
            if d%10==0:
                z=(d/10)+1
            else:
                z=int((d/10))+2
elif c>5 and c%5==0:
    if d==0:
        z=c/5
    else:
        if d<=10:
            z=(c/5)+1
        else:
            if d%10==0:
                z=(d/10)+(c/5)
            else:
                z=int((d/10))+1+(c/5)
elif c>5 and c%5!=0:
    if d==0:
        z=(c/5)+1
    else:
        if d<=10:
            z=(c/5)+2
        else:
            if d%10==0:
                z=(d/10)+int((c/5))+1
            else:
                z=int((d/10))+2+int((c/5))
if z<=n:
    print("YES")
elif z>n:
    print("NO")

