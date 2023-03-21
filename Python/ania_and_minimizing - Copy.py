n,k=list(map(int,input().split()))
s=input()
if k!=0:
    if n==1:
        print("0")
    elif k>=n:
        print("1",end='')
        for i in range(1,n):
            print("0",end='')
    else:
        if s[0]=="1":
            print("1",end='')
            x=0
            for i in range(1,n):
                if s[i]=="0":
                    print("0",end='')
                else:
                    if x>=k:
                        print(s[i],end='')
                    else:
                        print("0",end='')
                        x+=1
        else:
            print("1",end='')
            x=1
            for i in range(1,n):
                if s[i]=="0":
                    print(s[i],end='')
                else:
                    if x>=k:
                        print(s[i],end='')
                    else:
                        print("0",end='')
                        x+=1
else:
    print(s)
