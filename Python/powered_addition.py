import copy
def calc(total):
    k=1
    s=1
    for i in range(100):
        #print(s)
        if s>=total:
            return i+1
        else:
            k=2*k
            s+=k

t=int(input())
while t:
    t-=1
    n=int(input())
    a=list(map(int,input().split()))
    ans=0
    for i in range(n-1,0,-1):
        if a[i]>=a[i-1]:
            continue
        else:
            a=a[0:i+1]
            break
    for i in range(len(a)-1):
        if a[i]<=a[i+1]:
            continue
        else:
            a=a[i:len(a)]
            if len(a)==0:
                break
            else:
                m=max(a)
                b=[]
                for i in range(len(a)):
                    if a[i]==m:
                        b=a[0:i]
                        a=a[i:len(a)]
                        break
                    else:
                        continue
                if len(a)==0 and len(b)==0:
                    break
                elif len(a)==0:
                    total=max(b)-min(b)
                elif len(b)==0:
                    total=max(a)-min(a)
                else:
                    total=max((max(a)-min(a)),(max(b)-min(b)))
            ans2=calc(total)
            ans=ans2
            break
    print(ans)


