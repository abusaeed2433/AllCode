def counter(y):
    x=0
    for k in range(0,4):
        if y[k]=="#":
            x+=1
        else:
            continue
    return x
mat=[]
for i in range(0,4):
    a=input()
    mat.append(a)
zz=0
for i in range(0,3):
    for j in range(0,3):
        y=[mat[i][j],mat[i][j+1],mat[i+1][j],mat[i+1][j+1]]
        x=counter(y)
        if x==2:
            continue
        else:
            zz=1
            break
    if zz==1:
        break
if zz==1:
    print("YES")
else:
    print("NO")
            
