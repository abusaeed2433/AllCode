

t=int(input())
for i in range(0,t):
    n=int(input())
    x=list(map(int,input().split()))
    a=0
    b=0
    c=0
    count=0
    while len(x)>0:
        d=x[0]
        x.pop(0)
        if len(x)<=0:
            if count%2==0:
                a+=d
            else:
                b+=d
            count+=1
            break
        else:
            while d<=c:
                d+=x[0]
                x.pop(0)
                if len(x)<=0:
                    break
                else:
                    continue
            if len(x)<=0:
                if count%2==0:
                    a+=d
                else:
                    b+=d
                count+=1
                break
            else:
                if count%2==0:
                    a+=d
                else:
                    b+=d
                count+=1
                x=x[::-1]
                c=d
    print(count,a,b)
                
