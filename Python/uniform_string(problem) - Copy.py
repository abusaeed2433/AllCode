t=int(input())
n=list(map(int,input().split()))
k=list(map(int,input().split()))
y=0
for i in range(0,t):
    for j in range(0,n[i]):
        x=0
        for l in range(97,k[i]+97):
            y+=1
            x+=1
            print(str(l),end='')
            if y==n[i]:
                break

        j+=1
    print()
