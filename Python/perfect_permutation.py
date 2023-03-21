
n=int(input())
if n%2==1:
    print("-1")
else:
    c=n//2
    d=2
    for i in range(0,c):
        print(d,d-1,end=' ')
        d+=2
