n=int(input())
sum=0
x=0
for i in range(1,n+1):
    sum+=(i*(i+1))/2
    x+=1
    if sum==n:
        print(x)
        break
    elif sum>n:
        print(x-1)
        break
    else:
        continue
