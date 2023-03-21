n=int(input())
s=input()
y=[]
for i in range(0,n):
    y.append(s[i])
x=0
print(y)
for i in range(0,n-1):
    if y[i]=="U":
        if y[i+1]=="R":
            x+=1
        else:
            y[i]=0
    else:
        if y[i+1]=="U":
            x+=1
        else:
            y[i]=0
    print(x)
    print(y)
