t=int(input())
a=[]
x=[]
a=list(map(int,input().split()))
m=max(a[0],a[1],a[2])
s=sum(a)
b=a[3]-((3*m)-s)
if b>2 and b%3==0:
    x=1
else:
    x=0
print(x)
