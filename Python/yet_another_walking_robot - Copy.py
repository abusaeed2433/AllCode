def init_last_pos(s,n):
    x=0
    y=0
    for i in range(0,n):
        if s[i]=="L":
            x-=1
        elif s[i]=="R":
            x+=1
        elif s[i]=="U":
            y+=1
        else:
            y-=1
    return x,y
def string(x,y):
    s1=""
    if x<0:
        for i in range(0,-x):
         s1+="L"
    elif x>0:
        for i in range(0,x):
            s1+="R"
    if y<0:
        for i in range(0,-y):
         s1+="D"
    elif y>0:
        for i in range(0,y):
            s1+="U"
    return s1
def calc(s1,s,x):
    z=0
    for i in range(0,len(s1)):
        if s[i]==s1[i]:
            continue
        else:
            z=1
            break
    if z==0:
        x.append(len(s)-len(s1))
    else:
        x.append("-1")
    z=0
    i=len(s1)-1
    while i<=0:
        if s[i]==s1[i]:
            continue
        else:
            z=1
            break
        i-=1
    if z==0:
        x.append(len(s)-len(s1))
    else:
        x.append("-1")
    return x


t=int(input())
for i in range(0,t):
    n=int(input())
    s=input()
    x,y=init_last_pos(s,n)
    print(x,y)
    s1=string(x,y)
    print(s1)
    x=[]
    x=calc(s1,s,x)
    print(x)
    s1=s1[::-1]
    x=calc(s1,s,x)
    print(x)
    




