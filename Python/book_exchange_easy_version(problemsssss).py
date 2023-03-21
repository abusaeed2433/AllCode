import sys
def calculator(a,n,z,w,zz,x):
    sys.setrecursionlimit(10)
    for i in range(0,n):
        if z+1==a[i]:
            if i==zz:
                w+=1
                x.append(w)
                z+=1
                w=0
                zz+=1
                print("A")
                if z+1==n:
                    for j in range(0,len(x)):
                        print(x[j],end=' ')
                else:
                    calculator(a,n,z,w,zz,x)
            else:
                calculator(a,n,z,w,zz,x)
        else:
            continue
t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    z=0
    w=1
    zz=0
    x=[]
    calculator(a,n,z,w,zz,x)
    print()
