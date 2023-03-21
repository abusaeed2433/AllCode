

s=input()
n=len(s)
z=0
x=[]
for i in range(0,n):
    if s[i]=="0":
        if z==0:
            z=1
        else:
            x.append(0)
    else:
        x.append(1)
if z==0:
    x.pop(n-1)
for i in range(0,n-1):
    print(x[i],end='')
