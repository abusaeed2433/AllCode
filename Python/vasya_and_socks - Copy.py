

n,m=list(map(int,input().split()))
x=0
while n:
    x+=1
    if x%m==0:
        continue
    else:
        n-=1
print(x)
