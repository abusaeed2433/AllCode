n=int(input())
if n==1:
    print("3")
elif n==2:
    print("4")
elif n%2==0:
    if n%3==0:
        print(n-2)
    elif n%3==1:
        print("2")
    elif n%3==2:
        print("1")
else:
    print("1")
