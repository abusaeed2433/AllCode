import copy
def calc(pa,x,count):
    nb=x[len(x)-1]
    x.pop()
    if nb>pa:
        count+=1
        return nb,count
    else:
        j=len(x)-1
        nb=0
        while j>=0:
            nb+=x[j]
            x.pop()
            j=len(x)-1
            if nb>na:
                count+=1
                break
            else:
                continue
        return nb,count
def calcc(pa,x,count):
    na=x[0]
    x.pop(0)
    if na>nb:
        count+=1
        return na,count
    else:
        j=0
        while len(x)>0:
            na+=x[0]
            x.pop(0)
            j=0
            if na>nb:
                count+=1
                break
            else:
                continue
        return na,count
t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    count=1
    x=copy.deepcopy(a)
    na=x[0]
    x.pop(0)
    a=na
    b=0
    while len(x)!=0:
        nb,count=calc(na,x,count)
        b+=nb
        if len(x)!=0:
            na,count=calcc(nb,x,count)
            a+=na
        else:
            break
        print(a,b,count+1)
    

 
