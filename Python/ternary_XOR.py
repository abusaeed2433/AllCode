def printer(y,n):
    for i in range(0,n):
        print(y[i],end='')
    print()

t=int(input())
for i in range(0,t):
    n=int(input())
    s=input()
    x=1
    y=[1]
    z=[1]
    for j in range(1,n):
        x+=1
        if s[j]=="1":
            y.append(1)
            z.append(0)
            break
        else:
            c=int(int(s[j])/2)
            y.append(c)
            z.append(c)
    for j in range(x,n):
        y.append(0)
        z.append(int(s[j]))
    printer(y,n)
    printer(z,n)
        
