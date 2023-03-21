n=int(input())
a=input()
x=[]
y=[]
for i in range(0,n):
    b=input()
    d=b[0]+b[1]+b[2]
    y.append(d)
    e=b[5]+b[6]+b[7]
    x.append(e)
print(y)
print(x)
c=x[0]
i=0
for j in range(0,n):
    z=0
    if c==y[j]:
        c=x[j]
        z=1
        x.pop(i)
        y.pop(i)
        x.append("0")
        y.append("0")
        i=j
    else:
        continue
    if z==0:
        break
    else:
        continue
if a==c:
    print("home")
else:
    print("contest")
print(a)
print(y)
print(x)
