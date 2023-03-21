x=[1,2,4,5,8,10,16,20,25,32,40,50,64,80,100]
t=int(input())
for i in range(0,t):
    z=0
    n=int(input())
    for j in range(0,len(x)):
        if n==x[j]:
            z=1
            break
        else:
            continue
    if z==1:
        print("No")
    else:
        print("Yes")
