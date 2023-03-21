t=int(input())
for i in range(0,t):
    n,a,b,c,d=list(map(int,input().split()))
    if (n*(a-b))>(c+d) or (n*(a+b))<(c-d):
        print("No")
    else:
        print("Yes")
        
