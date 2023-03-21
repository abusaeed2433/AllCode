n=list(map(int,input().split()))
a=list(map(int,input().split()))
s=sum(a)
c=s/(4*n[1])
x=0
for i in range(0,n[0]):
    if a[i]>=c:
        x=x+1
    else:
        continue
if x>=n[1]:
    print("Yes")
else:
    print("No")
