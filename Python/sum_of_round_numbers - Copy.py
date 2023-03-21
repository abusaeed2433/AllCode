def checker(s,n,x):
    for i in range(0,n):
        if s[i]=="0":
            continue
        else:
            s1=s[i]
            for j in range(i+1,n):
                s1+="0"
            x.append(s1)
    return x
def printer(x):
    print(len(x))
    for i in range(0,len(x)):
        print(x[i],end=' ')
    print()
t=int(input())
for i in range(0,t):
    s=input()
    n=len(s)
    if n==1:
        print("1")
        print(s)
    else:
        x=[]
        x=checker(s,n,x)
        printer(x)
