n=input()
c=int(len(n)/2)
z=0
x="0"
for i in range(0,c):
    if n[i]==n[len(n)-1-i]:
        continue
    else:
        z=1
        break
if z==0:
    print("YES")
else:
    t=0
    for i in range(0,len(n)):
        if n[len(n)-1-i]=="0":
            t+=1
        else:
            break
    for j in range(0,t-1):
        x=x+"0"
    x=x+n
    y=0
    w=int(len(x)/2)
    for j in range(0,w):
        if x[j]==x[len(x)-1-j]:
            continue
        else:
            y=1
            break
    if y==0:
        print("YES")
    else:
        print("NO")
            
