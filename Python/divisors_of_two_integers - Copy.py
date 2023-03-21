

n=int(input())
a=list(map(int,input().split()))
a.sort(reverse=True)
if a[0]==a[1]:
    print(a[0],a[1])
else:
    n1=a[0]
    a.pop(0)
    while len(a)>0:
        if a[0]==a[1]:
            print(n1,a[0])
            break
        else:
            if n1%a[0]==0:
                a.pop(0)
            else:
                print(n1,a[0])
                break
    
