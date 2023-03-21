n=int(input())
c=[]
for i in range(0,n):
    s=input()
    c.append(s[0])
x=[]
for i in range(97,123):
    a=0
    for j in range(0,n):
        if c[j]==i:
            a=a+1
        else:
            continue
    x.append(a)
print(x)
