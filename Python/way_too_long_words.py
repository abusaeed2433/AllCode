n=int(input())
x=[]
for i in range(0,n):
    c=input()
    if len(c)>10:
        f=len(c)
        e=len(c)-2
        d=c[0]+str(e)+c[f-1]
        x.append(d)
    else:
        x.append(c)
for i in range(0,n):
    print(x[i])
