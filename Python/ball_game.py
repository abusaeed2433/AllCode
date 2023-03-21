n=int(input())
c=1
d=1
for i in range(0,n-1):
    c+=d
    d+=1
    if c>n:
        print(c-n,end=' ')
        c=c-n
    else:
        print(c,end=' ')
