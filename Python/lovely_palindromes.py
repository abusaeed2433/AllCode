
n=input()
if int(n)<10:
    print(n,end='')
    print(n)
elif int(n)==10:
    print("1001")
elif int(n)==11:
    print("1111")
else:
    print(n,end='')
    n=n[::-1]
    print(n)
