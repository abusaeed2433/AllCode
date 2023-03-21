t=int(input())
while t:
    t-=1
    n=int(input())
    arr=list(map(int,input().split()))
    p,ans,check=0,0,0
    isTaken=False
    for i in range(n):
        if arr[i]!=p:
            if check!=2 or arr[i]-p!=1:
                ans+=1
                check=1
            elif i==n-1:
                ans+=1
                check=1
            elif arr[i+1]!=arr[i]:
                ans+=1
                check=1
                if arr[i+1]-arr[i]==1:
                    isTaken=True
            p=arr[i]
        else:
            if check<2:
                if isTaken==False or check!=1:
                    check+=1
                    ans+=1
                    p=arr[i]
                else:
                    check=2
                    isTaken = False
    print(ans)
