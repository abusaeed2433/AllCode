

n=int(input())
s=input()
x=['RGB','RBG','GBR','GRB','BGR','BRG']
if n==1:
    print("0")
    print(s)
elif n==2:
    if s[0]==s[1]:
        print("1")
        if s[0]=="R":
            print("RG")
        else:
            print("BG")
        
    else:
        print("0")
        print(s)
else:
    c=n
    ans=0
    for i in range(0,6):
        ans=0
        for j in range(0,n):
            if x[i][j%3]==s[j]:
                continue
            else:
                ans+=1
        if ans<c:
            d=i
            c=ans
    print(c)
    for j in range(0,n):
        print(x[d][j%3],end='')
    
    



