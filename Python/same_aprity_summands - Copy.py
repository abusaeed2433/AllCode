def printer(x,b):
    for i in range(0,b):
        print(x,end=' ')

t=int(input())
for i in range(0,t):
    a,b=list(map(int,input().split()))
    if b>a:
        print("NO")
    elif a%b==0:
        print("YES")
        c=int(a/b)
        printer(c,b)
        print()
    else:
        if a%2==1:
            if b%2==0:
                print("NO")
            else:
                print("YES")
                e=1
                printer(e,b-1)  
                print(a-b+1)
        else:
            if b%2==0:
                print("YES")
                e=1
                printer(e,b-1)
                print(a-b+1)
            else:
                if (a-b)>=b:
                    print("YES")
                    e=2
                    printer(e,b-1)
                    print(int(a-(2*(b-1))))
                else:
                    print("NO")

