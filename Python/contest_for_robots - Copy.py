n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
s1=sum(a)
s2=sum(b)
x=0
if s1==0:
    print("-1")
elif s1>s2:
    print("1")
else:
    for i in range(0,n):
        if a[i]==1 and b[i]==0:
            x=x+1
        else:
            continue
    if x==0:
        print("-1")
    else:
        for j in range(2,101):
            s=s1+(j-1)*x
            if s>s2:
                print(j)
                break
            else:
                continue
