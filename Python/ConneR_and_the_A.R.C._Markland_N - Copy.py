import math

t=int(input())
while t:
    t-=1
    n,s,k=list(map(int,input().split()))
    arr=list(map(int,input().split()))
    arr.sort()
    if s in arr:
        ans=[-1]
        l=1
        i=0
        z=0
        count=0
        pos=0
        while i<k:
            #print(ans)
            if arr[i]!=l:
                if z==0:
                    ans[0]=l
                else:
                    ans.append(l)
                count+=1
            else:
                if arr[i]==s:
                    z=1
                    pos=count
                    ans.append(s)
                i+=1
            if z==1 and len(ans)>2:
                break
            l+=1
#        print(ans)
        if ans[-1]==s and ans[-1]+1<=n:
            ans.append(arr[-1]+1)
 #       print(ans)
        if ans[-1]==s:
            print(s-ans[-2])
        elif ans[0]==s:
            print(ans[1]-ans[0])
        else:
            if ans[0]==-1:
                print(ans[2]-s)
            else:
                print(min((ans[1]-ans[0]),(ans[2]-ans[1])))
    else:
        print("0")


