n=int(input())
s=input()
x=[]
y=[]
for i in range(0,n):
    x.append(s[i])
for i in range(1,n+1):
    if n%i==0:
        y=x[0:i]
        y.reverse()
        for k in range(0,len(y)):
            x[k]=y[k]
    else:
        continue
for i in range(0,n):
    print(x[i],end='')
