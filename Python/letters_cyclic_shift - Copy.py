def printer(x,s):
    for j in range(0,26):
        if s[i]==x[j]:
            print(x[j-1],end='')
            break
        else:
            continue

s=input()
z=0
w=0
zz=0
yy=0
x=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
for j in range(0,len(s)):
    if s[j]=="a":
        yy+=1
    else:
        break
if yy==len(s):
    for j in range(0,len(s)-1):
        print(s[j],end='')
    print("z")
else:
    for i in range(0,len(s)):
        if w==0:
            if z==0:
                if s[i]=="a":
                    print(s[i],end='')
                    if zz==1:
                        z=1
                    else:
                        z=0
                else:
                    zz=1
                    printer(x,s)
            else:
                if s[i]=="a":
                    print(s[i],end='')
                else:
                    if zz==1:
                        print(s[i],end='')
                    else:
                        w=1
                        zz=1
                        printer(x,s)
        else:
            print(s[i],end='')
            
