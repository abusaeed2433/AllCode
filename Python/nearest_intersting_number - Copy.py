n=input()
x=len(n)
sum=0
for i in range(0,x):
    sum+=int(n[i])
if sum%4==0:
    print(n)
else:
    for i in range((int(n)+1),):
        sum1=0
        l=len(str(i))
        m=str(i)
        for j in range(0,l):
            sum1+=int(m[j])
        if (sum1)%4==0:
            print("%s"%m)
            break
        else:
            continue

