def printer(s,n):
    for i in range(0,n):
        print(s,end='')

t=int(input())
for i in range(0,t):
    n0,n1,n2=list(map(int,input().split()))
    if n2==0:
        if n1%2==0:
            print("0",end='')
            n=int(n1/2)
        else:
            n=int((n1+1)/2)
        s="10"
        printer(s,n)
        s="0"
        printer(s,n0)
    elif n0==0:
        if n1%2==1:
            n=int((n1+1)/2)
        else:
            n=int(n1/2)
            print("1",end='')
        s="01"
        printer(s,n)
        s="1"
        printer(s,n2)
    else:
        s="0"
        printer(s,n0)
        if n1%2==0:
            s="01"
            printer(s,int(n1/2))
            s="1"
            printer(s,n2)
            print("0",end='')
        else:
            s="01"
            printer(s,(int((n1+1)/2)))
            s="1"
            printer(s,n2)
    print()
        
