n=int(input())
a=list(map(int,input().split()))
x=1
y=1
if n==1:
    if a[0]==0:
        print("0")
    else:
        print("1")
else:
    a.sort()
    for i in range(0,n-1):
        if a[i]!=0:
            if a[i]==a[i+1]:
                continue
            else:
                x=x+1
        else:
            continue
    a.sort(reverse=True)
    for j in range(0,n-1):
        if a[j]!=0:
            if a[j]==a[j+1]:
                continue
            else:
                y=y+1
        else:
            continue
    if x==y and x==1 and a[0]==0:
        print("0")
    else:
        print(min(x,y))
