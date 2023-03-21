n=int(input())
a=input()
x=[]
y=[]
for i in range(0,n):
    b=input()
    d=b[0]+b[1]+b[2]
    x.append(d)
    e=b[5]+b[6]+b[7]
    y.append(e)
if a==y[n-1]:
    print("home")
else:
    print("contest")
