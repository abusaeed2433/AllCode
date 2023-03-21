n=int(input())
a=list(map(int,input().split()))
a.pop(0)
b=list(map(int,input().split()))
b.pop(0)
x=a+b
x.sort()
z=0
p=0
for i in range(1,n+1):
    for j in range(0,len(x)):
        p=1
        if i==x[j]:
            z=0
            break
        else:
            z=1
    if z==1:
        break
    else:
        continue
if z==1 or p==0:
    print("Oh, my keyboard!")
else:
    print("I become the guy.")
