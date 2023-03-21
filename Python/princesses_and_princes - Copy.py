def calc(c,n):
    c.sort()
    c=list(filter(lambda x:x>=1,c))
    for i in range(1,n+1):
        z=0
        for j in range(0,len(c)):
            if i!=c[j]:
                continue
            else:
                z=1
                break
        if z==1:
            continue
        else:
            return i


    
t=int(input())
for i in range(0,t):
    pri1=0
    pri2=0
    www=0
    wwww=0
    c=[-1]
    z=0
    zz=0
    pp=0
    n=int(input())
    for j in range(0,n):
        a=list(map(int,input().split()))
        if a[0]==0:
            pp=calc(c,n)
            pri1=j+1
            pri2=pp
            zz=1
        else:
            for k in range(0,len(a)):
                p=0
                for l in range(0,len(c)):
                    if a[k]==c[l]:
                        p=1
                        break
                    else:
                        continue
                if p==1:
                    continue
                else:
                    c.append(a[k])
                    break
            if p==1:
                wwww=1
                if www==0:
                    c.append(0)
                    pri1=j+1
                    pri2=calc(c,n)
                    www=1
                else:
                    continue
            else:
                continue
    if zz==0:
        if p==0:
            print("OPTIMAL")
        else:
            print("IMPROVE")
            print(pri1,pri2)
    else:
        print("IMPROVE")
        print(pri1,pri2)
    
    
