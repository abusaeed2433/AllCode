

t=int(input())
while t:
    n=int(input())
    if n>=1000000:
        c=n%1000000
        if c>=500000:
            print((n//1000000)+1,end='')
            print("M")
        else:
            print(n//1000000,end='')
            print("M")
    elif n>=1000:
        if n>500000:
            print("1M")
        else:
            c=n%1000
            if c>=500:
                print("%dK"%((n//1000)+1))
            else:
                print("%dK"%(n//1000))
    else:
        print(n)
    t-=1
