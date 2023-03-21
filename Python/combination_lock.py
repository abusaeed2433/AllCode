n=int(input())
a=input()
b=input()
x=0
for i in range(0,n):
    e=abs(10-int(a[i])+int(b[i]))
    f=abs(10-int(b[i])+int(a[i]))
    c=min(e,f)
    d=abs(int(b[i])-int(a[i]))
    if(c>=d):
        x+=d
    else:
        x+=c
print(x)
