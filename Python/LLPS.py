n=input()
x=[]
for i in range(0,len(n)):
    x.append(n[i])
c=max(x)
y=0
for i in range(0,len(n)):
    if x[i]==c:
        print(c,end='')
    else:
        continue
