n=int(input())
if n%2==0:
    c=n/2
    if c%2==0 or c%3==0:
        print("%d %d"%(c,c))
    else:
        print("%d %d"%((c-1),(c+1)))
elif n%3==0 and n%2!=0:
    c=n/3
    print("6 %d"%(n-6))
elif n%3==2 and n%2!=0:
    print("8 %d"%(n-8))
elif n%3==1 and n%2!=0:
    print("4 %d"%(n-4))
