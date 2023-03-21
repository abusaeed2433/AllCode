

t=int(input())
for i in range(0,t):
    x=[]
    s=input()
    for j in range(0,len(s)):
        if s[j]=="R":
            x.append(j+1)
        else:
            continue
    if len(x)==0:
        print(len(s)+1)
    else:
        y=[x[0],len(s)+1-x[len(x)-1]]
        for j in range(0,len(x)-1):
            c=x[j+1]-x[j]
            y.append(c)
        print(max(y))
