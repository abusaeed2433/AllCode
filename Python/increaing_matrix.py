import math
def checker(matrix,n,m,s):
    z=0
    for i in range(0,n):
        for j in range(0,m-1):
            if matrix[i][j]<matrix[i][j+1]:
                continue
            else:
                z=1
                break
    if z==1:
        print("-1")
    else:
        for i in range(0,n-1):
            for j in range(0,m):
                if matrix[i][j]<matrix[i+1][j]:
                    continue
                else:
                    z=1
                    break
        if z==0:
            print(s)
        else:
            print("-1")


n,m=list(map(int,input().split()))
matrix=[]
s=0
e=[]
f=[]
                            #taking matrix input
for i in range(0,n):
    a=list(map(int,input().split()))
                            #counting zeroes
    for j in range(0,m):
        if a[j]==0:
            e.append(i)
            f.append(j)
        else:
            continue
                            #zeroes counted
    s+=int(sum(a))
    matrix.append(a)
                            #input taken
e=e[::-1]
f=f[::-1]
if len(e)==0:
    checker(matrix,n,m,s)
else:
    for i in range(0,len(e)):
        g=int(matrix[e[i]+1][f[i]])
        h=int(matrix[e[i]][f[i]+1])
        c=g-h
        c=int(math.fabs(c))
        d=min(g,h)-1
        s+=d
        matrix[e[i]][f[i]]=d
    checker(matrix,n,m,s)
