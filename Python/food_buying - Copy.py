

t=int(input())
for i in range(0,t):
    n=int(input())
    c=0
    while n>9:
        x=int(n/10)
        c+=(n-(n%10))
        n=(n%10)+x
    print(c+n)

