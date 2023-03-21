

t=int(input())
for i in range(0,t):
    x,y=list(map(int,input().split()))
    if x>=y:
        print("YES")
    else:
        if x>3:
            print("YES")
        elif x==3 and y==2:
            print("YES")
        elif x==2 and y==3:
            print("YES")
        else:
            print("NO")
            
            
