n=int(input())
s=[]
z=0
for i in range(0,n):
    c=input()
    if z==0:
        if c[0]=="O" and c[1]=="O":
            z=1;
            d="++|"+c[3]+c[4]
            s.append(d)
        elif c[3]=="O" and c[4]=="O":
            z=2;
            d=c[0]+c[1]+"|++"
            s.append(d)
        else:
            s.append(c)
    else:
        s.append(c)
if z==1 or z==2:
    print("YES")
    for i in range(0,n):
        print(s[i])
else:
    print("NO")
    
